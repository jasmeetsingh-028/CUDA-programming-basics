#include <stdio.h>

__global__ void hello_from_gpu(){
    printf("Hello I am at thread: %d, y idx: %d and block: %d\n", threadIdx.x, threadIdx.y, blockIdx.x);
}

int main(){
    hello_from_gpu<<<2, 5>>>();  // 1 block and 5 threads // kernel executes once per thread, so this will print "Hello I am at thread: %d and block: %d" 5 times
    cudaDeviceSynchronize();  // Wait for the GPU to finish before exiting
    return 0;
}