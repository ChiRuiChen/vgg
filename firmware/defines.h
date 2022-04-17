#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 128
#define N_INPUT_2_1 128
#define N_INPUT_3_1 3
#define OUT_HEIGHT_33 130
#define OUT_WIDTH_33 130
#define N_CHAN_33 3
#define OUT_HEIGHT_2 128
#define OUT_WIDTH_2 128
#define N_FILT_2 64
#define OUT_HEIGHT_34 130
#define OUT_WIDTH_34 130
#define N_CHAN_34 64
#define OUT_HEIGHT_4 128
#define OUT_WIDTH_4 128
#define N_FILT_4 64
#define OUT_HEIGHT_6 64
#define OUT_WIDTH_6 64
#define N_FILT_6 64
#define OUT_HEIGHT_35 66
#define OUT_WIDTH_35 66
#define N_CHAN_35 64
#define OUT_HEIGHT_7 64
#define OUT_WIDTH_7 64
#define N_FILT_7 128
#define OUT_HEIGHT_36 66
#define OUT_WIDTH_36 66
#define N_CHAN_36 128
#define OUT_HEIGHT_9 64
#define OUT_WIDTH_9 64
#define N_FILT_9 128
#define OUT_HEIGHT_11 32
#define OUT_WIDTH_11 32
#define N_FILT_11 128
#define OUT_HEIGHT_37 34
#define OUT_WIDTH_37 34
#define N_CHAN_37 128
#define OUT_HEIGHT_12 32
#define OUT_WIDTH_12 32
#define N_FILT_12 256
#define OUT_HEIGHT_38 34
#define OUT_WIDTH_38 34
#define N_CHAN_38 256
#define OUT_HEIGHT_14 32
#define OUT_WIDTH_14 32
#define N_FILT_14 256
#define OUT_HEIGHT_39 34
#define OUT_WIDTH_39 34
#define N_CHAN_39 256
#define OUT_HEIGHT_16 32
#define OUT_WIDTH_16 32
#define N_FILT_16 256
#define OUT_HEIGHT_18 16
#define OUT_WIDTH_18 16
#define N_FILT_18 256
#define OUT_HEIGHT_40 18
#define OUT_WIDTH_40 18
#define N_CHAN_40 256
#define OUT_HEIGHT_19 16
#define OUT_WIDTH_19 16
#define N_FILT_19 512
#define OUT_HEIGHT_41 18
#define OUT_WIDTH_41 18
#define N_CHAN_41 512
#define OUT_HEIGHT_21 16
#define OUT_WIDTH_21 16
#define N_FILT_21 512
#define OUT_HEIGHT_42 18
#define OUT_WIDTH_42 18
#define N_CHAN_42 512
#define OUT_HEIGHT_23 16
#define OUT_WIDTH_23 16
#define N_FILT_23 512
#define OUT_HEIGHT_25 8
#define OUT_WIDTH_25 8
#define N_FILT_25 512
#define OUT_HEIGHT_43 10
#define OUT_WIDTH_43 10
#define N_CHAN_43 512
#define OUT_HEIGHT_26 8
#define OUT_WIDTH_26 8
#define N_FILT_26 512
#define OUT_HEIGHT_44 10
#define OUT_WIDTH_44 10
#define N_CHAN_44 512
#define OUT_HEIGHT_28 8
#define OUT_WIDTH_28 8
#define N_FILT_28 512
#define OUT_HEIGHT_45 10
#define OUT_WIDTH_45 10
#define N_CHAN_45 512
#define OUT_HEIGHT_30 8
#define OUT_WIDTH_30 8
#define N_FILT_30 512
#define OUT_HEIGHT_32 4
#define OUT_WIDTH_32 4
#define N_FILT_32 512

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> input_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> layer33_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer2_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer3_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer34_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer4_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer5_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer6_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer35_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer7_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer8_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer36_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer9_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer10_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer11_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer37_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer12_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer13_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer38_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer14_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer15_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer39_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer16_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer17_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer18_t;
typedef nnet::array<ap_fixed<16,6>, 256*1> layer40_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer19_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer20_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer41_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer21_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer22_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer42_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer23_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer24_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer25_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer43_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer26_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer27_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer44_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer28_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer29_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer45_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer30_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> layer31_t;
typedef nnet::array<ap_fixed<16,6>, 512*1> result_t;

#endif
