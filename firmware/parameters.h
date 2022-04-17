#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_conv2d.h"
#include "nnet_utils/nnet_conv2d_stream.h"
#include "nnet_utils/nnet_padding.h"
#include "nnet_utils/nnet_padding_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
 
//hls-fpga-machine-learning insert weights

//hls-fpga-machine-learning insert layer-config
// zp2d_block1_conv1
struct config33 : nnet::padding2d_config {
    static const unsigned in_height = N_INPUT_1_1;
    static const unsigned in_width = N_INPUT_2_1;
    static const unsigned n_chan = N_INPUT_3_1;
    static const unsigned out_height = OUT_HEIGHT_33;
    static const unsigned out_width = OUT_WIDTH_33;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block1_conv1
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 27;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 1728;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config2 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_33;
    static const unsigned in_width = OUT_WIDTH_33;
    static const unsigned n_chan = N_CHAN_33;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_2;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_2;
    static const unsigned out_width = OUT_WIDTH_2;
    static const unsigned reuse_factor = 1728;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config2_mult mult_config;
};
const ap_uint<config2::filt_height * config2::filt_width> config2::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block1_conv1_relu
struct relu_config3 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block1_conv2
struct config34 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_2;
    static const unsigned in_width = OUT_WIDTH_2;
    static const unsigned n_chan = N_FILT_2;
    static const unsigned out_height = OUT_HEIGHT_34;
    static const unsigned out_width = OUT_WIDTH_34;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block1_conv2
struct config4_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 36864;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config4 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_34;
    static const unsigned in_width = OUT_WIDTH_34;
    static const unsigned n_chan = N_CHAN_34;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_4;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_4;
    static const unsigned out_width = OUT_WIDTH_4;
    static const unsigned reuse_factor = 36864;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config4_mult mult_config;
};
const ap_uint<config4::filt_height * config4::filt_width> config4::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block1_conv2_relu
struct relu_config5 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_4*OUT_WIDTH_4*N_FILT_4;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// block1_pool
struct config6 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_4;
    static const unsigned in_width = OUT_WIDTH_4;
    static const unsigned n_filt = N_FILT_6;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_6;

    static const unsigned out_height = OUT_HEIGHT_6;
    static const unsigned out_width = OUT_WIDTH_6;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 64;
    typedef ap_fixed<16,6> accum_t;
};

// zp2d_block2_conv1
struct config35 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_6;
    static const unsigned in_width = OUT_WIDTH_6;
    static const unsigned n_chan = N_FILT_6;
    static const unsigned out_height = OUT_HEIGHT_35;
    static const unsigned out_width = OUT_WIDTH_35;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block2_conv1
struct config7_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 73728;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config7 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_35;
    static const unsigned in_width = OUT_WIDTH_35;
    static const unsigned n_chan = N_CHAN_35;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_7;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_7;
    static const unsigned out_width = OUT_WIDTH_7;
    static const unsigned reuse_factor = 73728;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config7_mult mult_config;
};
const ap_uint<config7::filt_height * config7::filt_width> config7::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block2_conv1_relu
struct relu_config8 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_7*OUT_WIDTH_7*N_FILT_7;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block2_conv2
struct config36 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_7;
    static const unsigned in_width = OUT_WIDTH_7;
    static const unsigned n_chan = N_FILT_7;
    static const unsigned out_height = OUT_HEIGHT_36;
    static const unsigned out_width = OUT_WIDTH_36;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block2_conv2
struct config9_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 147456;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config9 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_36;
    static const unsigned in_width = OUT_WIDTH_36;
    static const unsigned n_chan = N_CHAN_36;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_9;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_9;
    static const unsigned out_width = OUT_WIDTH_9;
    static const unsigned reuse_factor = 147456;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config9_mult mult_config;
};
const ap_uint<config9::filt_height * config9::filt_width> config9::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block2_conv2_relu
struct relu_config10 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_9*OUT_WIDTH_9*N_FILT_9;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// block2_pool
struct config11 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_9;
    static const unsigned in_width = OUT_WIDTH_9;
    static const unsigned n_filt = N_FILT_11;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_11;

    static const unsigned out_height = OUT_HEIGHT_11;
    static const unsigned out_width = OUT_WIDTH_11;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 64;
    typedef ap_fixed<16,6> accum_t;
};

// zp2d_block3_conv1
struct config37 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_11;
    static const unsigned in_width = OUT_WIDTH_11;
    static const unsigned n_chan = N_FILT_11;
    static const unsigned out_height = OUT_HEIGHT_37;
    static const unsigned out_width = OUT_WIDTH_37;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block3_conv1
struct config12_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 294912;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config12 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_37;
    static const unsigned in_width = OUT_WIDTH_37;
    static const unsigned n_chan = N_CHAN_37;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_12;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_12;
    static const unsigned out_width = OUT_WIDTH_12;
    static const unsigned reuse_factor = 294912;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config12_mult mult_config;
};
const ap_uint<config12::filt_height * config12::filt_width> config12::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block3_conv1_relu
struct relu_config13 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_12*OUT_WIDTH_12*N_FILT_12;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block3_conv2
struct config38 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_12;
    static const unsigned in_width = OUT_WIDTH_12;
    static const unsigned n_chan = N_FILT_12;
    static const unsigned out_height = OUT_HEIGHT_38;
    static const unsigned out_width = OUT_WIDTH_38;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block3_conv2
struct config14_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 589824;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config14 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_38;
    static const unsigned in_width = OUT_WIDTH_38;
    static const unsigned n_chan = N_CHAN_38;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_14;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_14;
    static const unsigned out_width = OUT_WIDTH_14;
    static const unsigned reuse_factor = 589824;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config14_mult mult_config;
};
const ap_uint<config14::filt_height * config14::filt_width> config14::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block3_conv2_relu
struct relu_config15 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_14*OUT_WIDTH_14*N_FILT_14;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block3_conv3
struct config39 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_14;
    static const unsigned in_width = OUT_WIDTH_14;
    static const unsigned n_chan = N_FILT_14;
    static const unsigned out_height = OUT_HEIGHT_39;
    static const unsigned out_width = OUT_WIDTH_39;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block3_conv3
struct config16_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 589824;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config16 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_39;
    static const unsigned in_width = OUT_WIDTH_39;
    static const unsigned n_chan = N_CHAN_39;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_16;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_16;
    static const unsigned out_width = OUT_WIDTH_16;
    static const unsigned reuse_factor = 589824;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config16_mult mult_config;
};
const ap_uint<config16::filt_height * config16::filt_width> config16::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block3_conv3_relu
struct relu_config17 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_16*OUT_WIDTH_16*N_FILT_16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// block3_pool
struct config18 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_16;
    static const unsigned in_width = OUT_WIDTH_16;
    static const unsigned n_filt = N_FILT_18;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_18;

    static const unsigned out_height = OUT_HEIGHT_18;
    static const unsigned out_width = OUT_WIDTH_18;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 64;
    typedef ap_fixed<16,6> accum_t;
};

// zp2d_block4_conv1
struct config40 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_18;
    static const unsigned in_width = OUT_WIDTH_18;
    static const unsigned n_chan = N_FILT_18;
    static const unsigned out_height = OUT_HEIGHT_40;
    static const unsigned out_width = OUT_WIDTH_40;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block4_conv1
struct config19_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 1179648;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config19 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_40;
    static const unsigned in_width = OUT_WIDTH_40;
    static const unsigned n_chan = N_CHAN_40;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_19;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_19;
    static const unsigned out_width = OUT_WIDTH_19;
    static const unsigned reuse_factor = 1179648;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config19_mult mult_config;
};
const ap_uint<config19::filt_height * config19::filt_width> config19::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block4_conv1_relu
struct relu_config20 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_19*OUT_WIDTH_19*N_FILT_19;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block4_conv2
struct config41 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_19;
    static const unsigned in_width = OUT_WIDTH_19;
    static const unsigned n_chan = N_FILT_19;
    static const unsigned out_height = OUT_HEIGHT_41;
    static const unsigned out_width = OUT_WIDTH_41;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block4_conv2
struct config21_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2359296;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config21 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_41;
    static const unsigned in_width = OUT_WIDTH_41;
    static const unsigned n_chan = N_CHAN_41;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_21;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_21;
    static const unsigned out_width = OUT_WIDTH_21;
    static const unsigned reuse_factor = 2359296;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config21_mult mult_config;
};
const ap_uint<config21::filt_height * config21::filt_width> config21::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block4_conv2_relu
struct relu_config22 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_21*OUT_WIDTH_21*N_FILT_21;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block4_conv3
struct config42 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_21;
    static const unsigned in_width = OUT_WIDTH_21;
    static const unsigned n_chan = N_FILT_21;
    static const unsigned out_height = OUT_HEIGHT_42;
    static const unsigned out_width = OUT_WIDTH_42;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block4_conv3
struct config23_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2359296;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config23 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_42;
    static const unsigned in_width = OUT_WIDTH_42;
    static const unsigned n_chan = N_CHAN_42;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_23;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_23;
    static const unsigned out_width = OUT_WIDTH_23;
    static const unsigned reuse_factor = 2359296;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config23_mult mult_config;
};
const ap_uint<config23::filt_height * config23::filt_width> config23::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block4_conv3_relu
struct relu_config24 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_23*OUT_WIDTH_23*N_FILT_23;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// block4_pool
struct config25 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_23;
    static const unsigned in_width = OUT_WIDTH_23;
    static const unsigned n_filt = N_FILT_25;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_25;

    static const unsigned out_height = OUT_HEIGHT_25;
    static const unsigned out_width = OUT_WIDTH_25;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 64;
    typedef ap_fixed<16,6> accum_t;
};

// zp2d_block5_conv1
struct config43 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_25;
    static const unsigned in_width = OUT_WIDTH_25;
    static const unsigned n_chan = N_FILT_25;
    static const unsigned out_height = OUT_HEIGHT_43;
    static const unsigned out_width = OUT_WIDTH_43;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block5_conv1
struct config26_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2359296;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config26 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_43;
    static const unsigned in_width = OUT_WIDTH_43;
    static const unsigned n_chan = N_CHAN_43;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_26;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_26;
    static const unsigned out_width = OUT_WIDTH_26;
    static const unsigned reuse_factor = 2359296;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config26_mult mult_config;
};
const ap_uint<config26::filt_height * config26::filt_width> config26::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block5_conv1_relu
struct relu_config27 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_26*OUT_WIDTH_26*N_FILT_26;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block5_conv2
struct config44 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_26;
    static const unsigned in_width = OUT_WIDTH_26;
    static const unsigned n_chan = N_FILT_26;
    static const unsigned out_height = OUT_HEIGHT_44;
    static const unsigned out_width = OUT_WIDTH_44;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block5_conv2
struct config28_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2359296;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config28 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_44;
    static const unsigned in_width = OUT_WIDTH_44;
    static const unsigned n_chan = N_CHAN_44;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_28;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_28;
    static const unsigned out_width = OUT_WIDTH_28;
    static const unsigned reuse_factor = 2359296;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config28_mult mult_config;
};
const ap_uint<config28::filt_height * config28::filt_width> config28::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block5_conv2_relu
struct relu_config29 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_28*OUT_WIDTH_28*N_FILT_28;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_block5_conv3
struct config45 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_28;
    static const unsigned in_width = OUT_WIDTH_28;
    static const unsigned n_chan = N_FILT_28;
    static const unsigned out_height = OUT_HEIGHT_45;
    static const unsigned out_width = OUT_WIDTH_45;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// block5_conv3
struct config30_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2359296;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config30 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_45;
    static const unsigned in_width = OUT_WIDTH_45;
    static const unsigned n_chan = N_CHAN_45;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_30;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_30;
    static const unsigned out_width = OUT_WIDTH_30;
    static const unsigned reuse_factor = 2359296;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<16,6> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config30_mult mult_config;
};
const ap_uint<config30::filt_height * config30::filt_width> config30::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// block5_conv3_relu
struct relu_config31 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_30*OUT_WIDTH_30*N_FILT_30;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// block5_pool
struct config32 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_30;
    static const unsigned in_width = OUT_WIDTH_30;
    static const unsigned n_filt = N_FILT_32;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_32;

    static const unsigned out_height = OUT_HEIGHT_32;
    static const unsigned out_width = OUT_WIDTH_32;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 64;
    typedef ap_fixed<16,6> accum_t;
};


#endif
