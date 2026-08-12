.PHONY: 01 02 clean
# phony is used to declare targets that are not files, so that make will always execute the commands associated with them, even if a file with the same name exists.
# suppose if you have a file named clean in the directory, and you run make clean, make will not execute the commands associated with the clean target because it thinks that the target is up to date. 
# By declaring clean as a phony target, you ensure that make will always execute the commands associated with it, regardless of whether a file named clean exists or not.


NVCC = nvcc

01: single_block.cu 
	@$(NVCC) -o 01_cuda single_block.cu 
	@./01_cuda

02: thread_idxing.cu 
	@$(NVCC) -o 02_cuda thread_idxing.cu 
	@./02_cuda

03: block_dims.cu 
	@$(NVCC) -o 03_cuda block_dims.cu 
	@./03_cuda

clean:
	@rm -f 01_cuda 02_cuda 03_cuda  