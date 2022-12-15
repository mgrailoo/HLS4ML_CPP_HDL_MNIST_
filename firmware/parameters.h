#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_large.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w5.h"
#include "weights/b5.h"

//hls-fpga-machine-learning insert layer-config
struct config2 : nnet::dense_config {
    static const unsigned n_in = N_INPUT_1_1;
    static const unsigned n_out = N_LAYER_2;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 7840;
    static const unsigned n_zeros = 75586;
    static const unsigned n_nonzeros = 2814;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<12,4> accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    typedef ap_uint<1> index_t;
};

struct relu_config4 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
};

struct config5 : nnet::dense_config {
    static const unsigned n_in = N_LAYER_2;
    static const unsigned n_out = N_LAYER_5;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 500;
    static const unsigned n_zeros = 383;
    static const unsigned n_nonzeros = 617;
    static const bool store_weights_in_bram = false;
    typedef ap_fixed<12,4> accum_t;
    typedef bias5_t bias_t;
    typedef weight5_t weight_t;
    typedef ap_uint<1> index_t;
};

struct softmax_config7 : nnet::activ_config {
    static const unsigned n_in = N_LAYER_5;
    static const unsigned table_size = 64;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::latency;
    typedef ap_fixed<12,8> exp_table_t;
    typedef ap_fixed<12,4> inv_table_t;
};


#endif
