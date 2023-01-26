#include<arm_neon.h>
#include<iostream>
#include"include/tensor.h"

int main(){
    tensor<float,2,2,2,2> dings;

    dings.init_const(2,0);

    dings.print();

    float32x2_t vec1 = dings.V(0,0,0,0);
    float32x2_t vec2 = vdup_n_f32(2);

    for(int i=0;i<2;i++){std::cout << vec1[i] << std::endl;}

    vec1 = vadd_f32(vec1,vec2);

    int i = 2;
    double b = (double)i;

    for(int i=0;i<2;i++){std::cout << vec1[i] << std::endl;}

    dings.V(0,0,0,0) = vec2;

    dings.print();

    return 0;
}