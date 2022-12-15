#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 784
#define N_LAYER_2 100
#define N_LAYER_5 10

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<12,4> model_default_t;
typedef ap_fixed<6,1> input_t;
typedef ap_fixed<12,4> layer2_t;
typedef ap_fixed<6,1> weight2_t;
typedef ap_fixed<6,1> bias2_t;
typedef ap_fixed<6,1,AP_RND,AP_SAT> layer4_t;
typedef ap_fixed<12,4> layer5_t;
typedef ap_fixed<6,1> weight5_t;
typedef ap_fixed<6,1> bias5_t;
typedef ap_fixed<12,4> softmax_default_t;
typedef ap_fixed<12,4> result_t;

#endif
