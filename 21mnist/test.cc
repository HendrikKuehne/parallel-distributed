#include<arm_neon.h>
#include<iostream>
#include"include/tensor.h"

#define realv float32x2_t

int main(){
//    tensor<float,2,2,2,2> dings;
//
//    dings.init_const(2,0);
//
//    dings.print();
//
//    realv vec1 = dings.V(0,0,0,0);
//    realv vec2 = vdup_n_f32(2);
//
//    for(int i=0;i<2;i++){std::cout << vec1[i] << std::endl;}
//
//    vec1 = vadd_f32(vec1,vec2);
//
//    int i = 2;
//    double b = (double)i;
//
//    for(int i=0;i<2;i++){std::cout << vec1[i] << std::endl;}
//
//    dings.V(0,0,0,0) = vec2;
//
//    dings.print();

    realv vec1 = vdup_n_f32(0);
    realv vec2 = vdup_n_f32(2);
    realv vec3 = vdup_n_f32(3);

    vec3 = vfma_f32(vec3,vec2,vec3);

    for(int i=0;i<2;i++){std::cout << vec3[i] << std::endl;}

    return 0;
}