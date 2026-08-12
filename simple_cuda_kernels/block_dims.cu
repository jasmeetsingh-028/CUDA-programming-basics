#include <stdio.h>

__global__ void hello_from_gpu(){
    printf("Hello I am at thread: %d and block: %d and number of threads in the block: %d\n", threadIdx.x, blockIdx.x, blockDim.x);
}

int main(){
    hello_from_gpu<<<2, 5>>>();  // 2 blocks and 5 threads // kernel executes once per thread, so this will print "Hello I am at thread: %d and block: %d" 5 times
    cudaDeviceSynchronize();  // Wait for the GPU to finish before exiting
    return 0;
}

