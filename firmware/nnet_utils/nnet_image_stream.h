#ifndef NNET_IMAGE_STREAM_H_
#define NNET_IMAGE_STREAM_H_

#include "nnet_common.h"
#include "hls_stream.h"

namespace nnet {

template<class data_T, typename CONFIG_T>
void resize_nearest_me(
    hls::stream<data_T> &image,
    hls::stream<data_T> &resized
) {
    assert(CONFIG_T::new_height % CONFIG_T::height == 0);
    assert(CONFIG_T::new_width % CONFIG_T::width == 0);
    constexpr unsigned ratio_height = CONFIG_T::new_height / CONFIG_T::height;
    constexpr unsigned ratio_width = CONFIG_T::new_width / CONFIG_T::width;
    constexpr unsigned ii = ratio_height * ratio_width;
    
        
    for (unsigned h = 0; h < CONFIG_T::height; h++) {
    #pragma HLS PIPELINE
    
          data_T data_in_row[CONFIG_T::width][CONFIG_T::n_chan];
          
          
              for (unsigned i = 0; i < CONFIG_T::width; i++) {
                  
                  for (unsigned j = 0; j < CONFIG_T::n_chan; j++) {
                      #pragma HLS UNROLL
                          data_T  in_data = image.read();
                  
                      
                      data_in_row[i][j] = in_data;
                  }
              }
              
              for (unsigned i = 0; i <ratio_height; i++) {
                    for (unsigned l = 0; l < CONFIG_T::width; l++) {
                          for (unsigned j = 0; j < ratio_width; j++) {
                          #pragma HLS UNROLL
                            for (unsigned k = 0; k < CONFIG_T::n_chan; k++) {
                            data_T out_data;
                            #pragma HLS DATA_PACK variable=out_data
                            
                            #pragma HLS UNROLL
                            out_data[k] = data_in_row[l][k];
                                          
                             
                             resized.write(out_data);   
                             }
                          }
                    
                    }
              }
                                
    }
}



template<class data_T, typename CONFIG_T>
void resize_nearest(
    hls::stream<data_T> &image,
    hls::stream<data_T> &resized
) {
    assert(CONFIG_T::new_height % CONFIG_T::height == 0);
    assert(CONFIG_T::new_width % CONFIG_T::width == 0);
    constexpr unsigned ratio_height = CONFIG_T::new_height / CONFIG_T::height;
    constexpr unsigned ratio_width = CONFIG_T::new_width / CONFIG_T::width;
    constexpr unsigned ii = ratio_height * ratio_width;
    
        
    for (unsigned h = 0; h < CONFIG_T::height; h++) {
    #pragma HLS PIPELINE
    
          data_T data_in_row[CONFIG_T::width];
          
          
              for (unsigned i = 0; i < CONFIG_T::width; i++) {
                  
                  
                  data_T  in_data = image.read();
                  for (unsigned j = 0; j < CONFIG_T::n_chan; j++) {
                      #pragma HLS UNROLL
                      
                      data_in_row[i][j] = in_data[j];
                  }
              }
              
              for (unsigned i = 0; i <ratio_height; i++) {
                    for (unsigned l = 0; l < CONFIG_T::width; l++) {
                          for (unsigned j = 0; j < ratio_width; j++) {
                          #pragma HLS UNROLL
                        
                            data_T out_data;
                            #pragma HLS DATA_PACK variable=out_data
                            for (unsigned k = 0; k < CONFIG_T::n_chan; k++) {
                            #pragma HLS UNROLL
                            out_data[k] = data_in_row[l][k];
                                          
                             }
                             resized.write(out_data);   
                          }
                    
                    }
              }
                                
    }
}

}

#endif
