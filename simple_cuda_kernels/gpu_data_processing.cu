#include <stdio.h>

__global__ void addOne(int *data){
    int id = blockIdx.x * blockDim.x + threadIdx.x;
    data[id] += 1;
}

int main(){
    int hostData[5] = {3,5,7,9,11};
    int *deviceData;

    cudaMalloc(&deviceData, 5 * sizeof(int)); // Allocate memory on the GPU for 5 integers

    cudaMemcpy(deviceData, hostData, 5 * sizeof(int), cudaMemcpyHostToDevice); // Copy data from host to device

    addOne<<<1, 5>>>(deviceData); // Launch kernel with 1 block and 5 threads
    // adding 1 to each element of the array on the GPU

    cudaDeviceSynchronize(); // Wait for the GPU to finish before copying data back

    cudaMemcpy(hostData, deviceData, 5 * sizeof(int), cudaMemcpyDeviceToHost); // Copy data back from device to host

    for (int i = 0; i < 5; i++) {
        printf("%d ", hostData[i]); // Print the updated values
    }
    printf("\n");

    cudaFree(deviceData); // Free the allocated memory on the GPU
    return 0;


}