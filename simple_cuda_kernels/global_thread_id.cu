#include <stdio.h>

__global__ void thread_id_kernel(){
    int id = blockIdx.x * blockDim.x + threadIdx.x; // Calculate the global thread ID starting from the index 0

    printf("Block: %d, Thread: %d, Global thread id:%d\n", blockIdx.x, threadIdx.x, id);  
 }

 int main(){

    thread_id_kernel<<<3, 5>>>(); // 2 blocks and 3 threads // kernel executes once per thread
    cudaDeviceSynchronize();  // Wait for the GPU to finish before exiting
    return 0;
}