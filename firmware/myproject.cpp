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
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &input_1,
    hls::stream<result_t> &layer32_out,
    model_default_t w2[1728],
    model_default_t b2[64],
    model_default_t w4[36864],
    model_default_t b4[64],
    model_default_t w7[73728],
    model_default_t b7[128],
    model_default_t w9[147456],
    model_default_t b9[128],
    model_default_t w12[294912],
    model_default_t b12[256],
    model_default_t w14[589824],
    model_default_t b14[256],
    model_default_t w16[589824],
    model_default_t b16[256],
    model_default_t w19[1179648],
    model_default_t b19[512],
    model_default_t w21[2359296],
    model_default_t b21[512],
    model_default_t w23[2359296],
    model_default_t b23[512],
    model_default_t w26[2359296],
    model_default_t b26[512],
    model_default_t w28[2359296],
    model_default_t b28[512],
    model_default_t w30[2359296],
    model_default_t b30[512],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_1,layer32_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1;
    const_size_out_1 = OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 1728>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 36864>(w4, "w4.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b4, "b4.txt");
        nnet::load_weights_from_txt<model_default_t, 73728>(w7, "w7.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b7, "b7.txt");
        nnet::load_weights_from_txt<model_default_t, 147456>(w9, "w9.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b9, "b9.txt");
        nnet::load_weights_from_txt<model_default_t, 294912>(w12, "w12.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b12, "b12.txt");
        nnet::load_weights_from_txt<model_default_t, 589824>(w14, "w14.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b14, "b14.txt");
        nnet::load_weights_from_txt<model_default_t, 589824>(w16, "w16.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b16, "b16.txt");
        nnet::load_weights_from_txt<model_default_t, 1179648>(w19, "w19.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b19, "b19.txt");
        nnet::load_weights_from_txt<model_default_t, 2359296>(w21, "w21.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b21, "b21.txt");
        nnet::load_weights_from_txt<model_default_t, 2359296>(w23, "w23.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b23, "b23.txt");
        nnet::load_weights_from_txt<model_default_t, 2359296>(w26, "w26.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b26, "b26.txt");
        nnet::load_weights_from_txt<model_default_t, 2359296>(w28, "w28.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b28, "b28.txt");
        nnet::load_weights_from_txt<model_default_t, 2359296>(w30, "w30.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b30, "b30.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    hls::stream<layer33_t> layer33_out("layer33_out");
    #pragma HLS STREAM variable=layer33_out depth=16900
    nnet::zeropad2d_cl<input_t, layer33_t, config33>(input_1, layer33_out); // zp2d_block1_conv1

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=16384
    nnet::conv_2d_cl<layer33_t, layer2_t, config2>(layer33_out, layer2_out, w2, b2); // block1_conv1

    hls::stream<layer3_t> layer3_out("layer3_out");
    #pragma HLS STREAM variable=layer3_out depth=16384
    nnet::relu<layer2_t, layer3_t, relu_config3>(layer2_out, layer3_out); // block1_conv1_relu

    hls::stream<layer34_t> layer34_out("layer34_out");
    #pragma HLS STREAM variable=layer34_out depth=16900
    nnet::zeropad2d_cl<layer3_t, layer34_t, config34>(layer3_out, layer34_out); // zp2d_block1_conv2

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=16384
    nnet::conv_2d_cl<layer34_t, layer4_t, config4>(layer34_out, layer4_out, w4, b4); // block1_conv2

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=16384
    nnet::relu<layer4_t, layer5_t, relu_config5>(layer4_out, layer5_out); // block1_conv2_relu

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=4096
    nnet::pooling2d_cl<layer5_t, layer6_t, config6>(layer5_out, layer6_out); // block1_pool

    hls::stream<layer35_t> layer35_out("layer35_out");
    #pragma HLS STREAM variable=layer35_out depth=4356
    nnet::zeropad2d_cl<layer6_t, layer35_t, config35>(layer6_out, layer35_out); // zp2d_block2_conv1

    hls::stream<layer7_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=4096
    nnet::conv_2d_cl<layer35_t, layer7_t, config7>(layer35_out, layer7_out, w7, b7); // block2_conv1

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=4096
    nnet::relu<layer7_t, layer8_t, relu_config8>(layer7_out, layer8_out); // block2_conv1_relu

    hls::stream<layer36_t> layer36_out("layer36_out");
    #pragma HLS STREAM variable=layer36_out depth=4356
    nnet::zeropad2d_cl<layer8_t, layer36_t, config36>(layer8_out, layer36_out); // zp2d_block2_conv2

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=4096
    nnet::conv_2d_cl<layer36_t, layer9_t, config9>(layer36_out, layer9_out, w9, b9); // block2_conv2

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=4096
    nnet::relu<layer9_t, layer10_t, relu_config10>(layer9_out, layer10_out); // block2_conv2_relu

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=1024
    nnet::pooling2d_cl<layer10_t, layer11_t, config11>(layer10_out, layer11_out); // block2_pool

    hls::stream<layer37_t> layer37_out("layer37_out");
    #pragma HLS STREAM variable=layer37_out depth=1156
    nnet::zeropad2d_cl<layer11_t, layer37_t, config37>(layer11_out, layer37_out); // zp2d_block3_conv1

    hls::stream<layer12_t> layer12_out("layer12_out");
    #pragma HLS STREAM variable=layer12_out depth=1024
    nnet::conv_2d_cl<layer37_t, layer12_t, config12>(layer37_out, layer12_out, w12, b12); // block3_conv1

    hls::stream<layer13_t> layer13_out("layer13_out");
    #pragma HLS STREAM variable=layer13_out depth=1024
    nnet::relu<layer12_t, layer13_t, relu_config13>(layer12_out, layer13_out); // block3_conv1_relu

    hls::stream<layer38_t> layer38_out("layer38_out");
    #pragma HLS STREAM variable=layer38_out depth=1156
    nnet::zeropad2d_cl<layer13_t, layer38_t, config38>(layer13_out, layer38_out); // zp2d_block3_conv2

    hls::stream<layer14_t> layer14_out("layer14_out");
    #pragma HLS STREAM variable=layer14_out depth=1024
    nnet::conv_2d_cl<layer38_t, layer14_t, config14>(layer38_out, layer14_out, w14, b14); // block3_conv2

    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=1024
    nnet::relu<layer14_t, layer15_t, relu_config15>(layer14_out, layer15_out); // block3_conv2_relu

    hls::stream<layer39_t> layer39_out("layer39_out");
    #pragma HLS STREAM variable=layer39_out depth=1156
    nnet::zeropad2d_cl<layer15_t, layer39_t, config39>(layer15_out, layer39_out); // zp2d_block3_conv3

    hls::stream<layer16_t> layer16_out("layer16_out");
    #pragma HLS STREAM variable=layer16_out depth=1024
    nnet::conv_2d_cl<layer39_t, layer16_t, config16>(layer39_out, layer16_out, w16, b16); // block3_conv3

    hls::stream<layer17_t> layer17_out("layer17_out");
    #pragma HLS STREAM variable=layer17_out depth=1024
    nnet::relu<layer16_t, layer17_t, relu_config17>(layer16_out, layer17_out); // block3_conv3_relu

    hls::stream<layer18_t> layer18_out("layer18_out");
    #pragma HLS STREAM variable=layer18_out depth=256
    nnet::pooling2d_cl<layer17_t, layer18_t, config18>(layer17_out, layer18_out); // block3_pool

    hls::stream<layer40_t> layer40_out("layer40_out");
    #pragma HLS STREAM variable=layer40_out depth=324
    nnet::zeropad2d_cl<layer18_t, layer40_t, config40>(layer18_out, layer40_out); // zp2d_block4_conv1

    hls::stream<layer19_t> layer19_out("layer19_out");
    #pragma HLS STREAM variable=layer19_out depth=256
    nnet::conv_2d_cl<layer40_t, layer19_t, config19>(layer40_out, layer19_out, w19, b19); // block4_conv1

    hls::stream<layer20_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=256
    nnet::relu<layer19_t, layer20_t, relu_config20>(layer19_out, layer20_out); // block4_conv1_relu

    hls::stream<layer41_t> layer41_out("layer41_out");
    #pragma HLS STREAM variable=layer41_out depth=324
    nnet::zeropad2d_cl<layer20_t, layer41_t, config41>(layer20_out, layer41_out); // zp2d_block4_conv2

    hls::stream<layer21_t> layer21_out("layer21_out");
    #pragma HLS STREAM variable=layer21_out depth=256
    nnet::conv_2d_cl<layer41_t, layer21_t, config21>(layer41_out, layer21_out, w21, b21); // block4_conv2

    hls::stream<layer22_t> layer22_out("layer22_out");
    #pragma HLS STREAM variable=layer22_out depth=256
    nnet::relu<layer21_t, layer22_t, relu_config22>(layer21_out, layer22_out); // block4_conv2_relu

    hls::stream<layer42_t> layer42_out("layer42_out");
    #pragma HLS STREAM variable=layer42_out depth=324
    nnet::zeropad2d_cl<layer22_t, layer42_t, config42>(layer22_out, layer42_out); // zp2d_block4_conv3

    hls::stream<layer23_t> layer23_out("layer23_out");
    #pragma HLS STREAM variable=layer23_out depth=256
    nnet::conv_2d_cl<layer42_t, layer23_t, config23>(layer42_out, layer23_out, w23, b23); // block4_conv3

    hls::stream<layer24_t> layer24_out("layer24_out");
    #pragma HLS STREAM variable=layer24_out depth=256
    nnet::relu<layer23_t, layer24_t, relu_config24>(layer23_out, layer24_out); // block4_conv3_relu

    hls::stream<layer25_t> layer25_out("layer25_out");
    #pragma HLS STREAM variable=layer25_out depth=64
    nnet::pooling2d_cl<layer24_t, layer25_t, config25>(layer24_out, layer25_out); // block4_pool

    hls::stream<layer43_t> layer43_out("layer43_out");
    #pragma HLS STREAM variable=layer43_out depth=100
    nnet::zeropad2d_cl<layer25_t, layer43_t, config43>(layer25_out, layer43_out); // zp2d_block5_conv1

    hls::stream<layer26_t> layer26_out("layer26_out");
    #pragma HLS STREAM variable=layer26_out depth=64
    nnet::conv_2d_cl<layer43_t, layer26_t, config26>(layer43_out, layer26_out, w26, b26); // block5_conv1

    hls::stream<layer27_t> layer27_out("layer27_out");
    #pragma HLS STREAM variable=layer27_out depth=64
    nnet::relu<layer26_t, layer27_t, relu_config27>(layer26_out, layer27_out); // block5_conv1_relu

    hls::stream<layer44_t> layer44_out("layer44_out");
    #pragma HLS STREAM variable=layer44_out depth=100
    nnet::zeropad2d_cl<layer27_t, layer44_t, config44>(layer27_out, layer44_out); // zp2d_block5_conv2

    hls::stream<layer28_t> layer28_out("layer28_out");
    #pragma HLS STREAM variable=layer28_out depth=64
    nnet::conv_2d_cl<layer44_t, layer28_t, config28>(layer44_out, layer28_out, w28, b28); // block5_conv2

    hls::stream<layer29_t> layer29_out("layer29_out");
    #pragma HLS STREAM variable=layer29_out depth=64
    nnet::relu<layer28_t, layer29_t, relu_config29>(layer28_out, layer29_out); // block5_conv2_relu

    hls::stream<layer45_t> layer45_out("layer45_out");
    #pragma HLS STREAM variable=layer45_out depth=100
    nnet::zeropad2d_cl<layer29_t, layer45_t, config45>(layer29_out, layer45_out); // zp2d_block5_conv3

    hls::stream<layer30_t> layer30_out("layer30_out");
    #pragma HLS STREAM variable=layer30_out depth=64
    nnet::conv_2d_cl<layer45_t, layer30_t, config30>(layer45_out, layer30_out, w30, b30); // block5_conv3

    hls::stream<layer31_t> layer31_out("layer31_out");
    #pragma HLS STREAM variable=layer31_out depth=64
    nnet::relu<layer30_t, layer31_t, relu_config31>(layer30_out, layer31_out); // block5_conv3_relu

    nnet::pooling2d_cl<layer31_t, result_t, config32>(layer31_out, layer32_out); // block5_pool

}
