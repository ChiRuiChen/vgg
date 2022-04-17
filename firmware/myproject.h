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

#ifndef MYPROJECT_H_
#define MYPROJECT_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "hls_stream.h"

#include "defines.h"

// Prototype of top level function for C-synthesis
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
);

#endif
