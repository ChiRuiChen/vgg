#ifndef MYPROJECT_BRIDGE_H_
#define MYPROJECT_BRIDGE_H_

#include "firmware/myproject.h"
#include "firmware/nnet_utils/nnet_helpers.h"
#include <algorithm>
#include <map>

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


namespace nnet {
    bool trace_enabled = false;
    std::map<std::string, void *> *trace_outputs = NULL;
    size_t trace_type_size = sizeof(double);
}

extern "C" {

struct trace_data {
    const char *name;
    void *data;
};

void allocate_trace_storage(size_t element_size) {
    nnet::trace_enabled = true;
    nnet::trace_outputs = new std::map<std::string, void *>;
    nnet::trace_type_size = element_size;
}

void free_trace_storage() {
    for (std::map<std::string, void *>::iterator i = nnet::trace_outputs->begin(); i != nnet::trace_outputs->end(); i++) {
        void *ptr = i->second;
        free(ptr);
    }
    nnet::trace_outputs->clear();
    delete nnet::trace_outputs;
    nnet::trace_outputs = NULL;
    nnet::trace_enabled = false;
}

void collect_trace_output(struct trace_data *c_trace_outputs) {
    int ii = 0;
    for (std::map<std::string, void *>::iterator i = nnet::trace_outputs->begin(); i != nnet::trace_outputs->end(); i++) {
        c_trace_outputs[ii].name = i->first.c_str();
        c_trace_outputs[ii].data = i->second;
        ii++;
    }
}

// Wrapper of top level function for Python bridge
void myproject_float(
    float input_1[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    float layer32_out[OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {
    
    hls::stream<input_t> input_1_ap("input_1");
    nnet::convert_data<float, input_t, N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1>(input_1, input_1_ap);

    hls::stream<result_t> layer32_out_ap("layer32_out");

    myproject(input_1_ap,layer32_out_ap,w2,b2,w4,b4,w7,b7,w9,b9,w12,b12,w14,b14,w16,b16,w19,b19,w21,b21,w23,b23,w26,b26,w28,b28,w30,b30,const_size_in_1,const_size_out_1);

    nnet::convert_data<result_t, float, OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32>(layer32_out_ap, layer32_out);
}

void myproject_double(
    double input_1[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    double layer32_out[OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {
    hls::stream<input_t> input_1_ap("input_1");
    nnet::convert_data<double, input_t, N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1>(input_1, input_1_ap);

    hls::stream<result_t> layer32_out_ap("layer32_out");

    myproject(input_1_ap,layer32_out_ap,w2,b2,w4,b4,w7,b7,w9,b9,w12,b12,w14,b14,w16,b16,w19,b19,w21,b21,w23,b23,w26,b26,w28,b28,w30,b30,const_size_in_1,const_size_out_1);

    nnet::convert_data<result_t, double, OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32>(layer32_out_ap, layer32_out);
}

}

#endif
