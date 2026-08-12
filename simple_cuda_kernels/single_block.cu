#include <stdio.h>

__global__ void hello_from_gpu(){
    printf("Hello World from GPU!\n");
}

int main(){
    hello_from_gpu<<<1, 5>>>();  // 1 block and 5 threads // kernel executes once per thread, so this will print "Hello World from GPU!" 5 times
    cudaDeviceSynchronize();  // Wait for the GPU to finish before exiting
    return 0;
}