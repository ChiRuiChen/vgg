//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "firmware/myproject.h"
#include "firmware/nnet_utils/nnet_helpers.h"

//hls-fpga-machine-learning insert bram
model_default_t w2[1728];
model_default_t b2[64];
model_default_t w4[36864];
model_default_t b4[64];
model_default_t w7[73728];
model_default_t b7[128];
model_default_t w9[147456];
model_default_t b9[128];
model_default_t w12[294912];
model_default_t b12[256];
model_default_t w14[589824];
model_default_t b14[256];
model_default_t w16[589824];
model_default_t b16[256];
model_default_t w19[1179648];
model_default_t b19[512];
model_default_t w21[2359296];
model_default_t b21[512];
model_default_t w23[2359296];
model_default_t b23[512];
model_default_t w26[2359296];
model_default_t b26[512];
model_default_t w28[2359296];
model_default_t b28[512];
model_default_t w30[2359296];
model_default_t b30[512];

#define CHECKPOINT 5000

namespace nnet {
    bool trace_enabled = true;
    std::map<std::string, void *> *trace_outputs = NULL;
    size_t trace_type_size = sizeof(double);
}

int main(int argc, char **argv)
{
  //load input data from text file
  std::ifstream fin("tb_data/tb_input_features.dat");
  //load predictions from text file
  std::ifstream fpr("tb_data/tb_output_predictions.dat");

#ifdef RTL_SIM
  std::string RESULTS_LOG = "tb_data/rtl_cosim_results.log";
#else
  std::string RESULTS_LOG = "tb_data/csim_results.log";
#endif
  std::ofstream fout(RESULTS_LOG);

  std::string iline;
  std::string pline;
  int e = 0;

  if (fin.is_open() && fpr.is_open()) {
    while ( std::getline(fin,iline) && std::getline (fpr,pline) ) {
      if (e % CHECKPOINT == 0) std::cout << "Processing input " << e << std::endl;
      char* cstr=const_cast<char*>(iline.c_str());
      char* current;
      std::vector<float> in;
      current=strtok(cstr," ");
      while(current!=NULL) {
        in.push_back(atof(current));
        current=strtok(NULL," ");
      }
      cstr=const_cast<char*>(pline.c_str());
      std::vector<float> pr;
      current=strtok(cstr," ");
      while(current!=NULL) {
        pr.push_back(atof(current));
        current=strtok(NULL," ");
      }

      //hls-fpga-machine-learning insert data
      hls::stream<input_t> input_1("input_1");
      nnet::copy_data_me<float, input_t, 0, N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1>(in, input_1);
      hls::stream<result_t> layer32_out("layer32_out");

      //hls-fpga-machine-learning insert top-level-function
      unsigned short size_in1,size_out1;
      myproject(input_1,layer32_out,w2,b2,w4,b4,w7,b7,w9,b9,w12,b12,w14,b14,w16,b16,w19,b19,w21,b21,w23,b23,w26,b26,w28,b28,w30,b30,size_in1,size_out1);

      if (e % CHECKPOINT == 0) {
        std::cout << "Predictions" << std::endl;
        //hls-fpga-machine-learning insert predictions
        for(int i = 0; i < OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32; i++) {
          std::cout << pr[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Quantized predictions" << std::endl;
        //hls-fpga-machine-learning insert quantized
        nnet::print_result_me<result_t, OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32>(layer32_out, std::cout, true);
      }
      e++;

      //hls-fpga-machine-learning insert tb-output
      nnet::print_result_me<result_t, OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32>(layer32_out, fout);

    }
    fin.close();
    fpr.close();
  } 

  fout.close();
  std::cout << "INFO: Saved inference results to file: " << RESULTS_LOG << std::endl;

  return 0;
}
