parallel-distributed
=============

I implemented parallelization using `SIMD` to accelerate training and prediction using this code.
Currently, changes are implemented in `tensor.h` (extracting `SIMD` vectors from tensors), `convolution.h`
and `linear.h` (forward and backward pass are vectorized). These features are available on Arm and x86
platforms; the compiler chooses the corresponding code to compile automatically. I worked on this project
during my attendance of the lecture "Parallel and Distributed Programming" by Prof. Kenjiro Taura.

For a detailed explanation of the project by Prof. Taura and how to implement parallelism, see
`21mnist/README.md`.