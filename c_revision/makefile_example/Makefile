.PHONY: 01 02 clean
# phony is used to declare targets that are not files, so that make will always execute the commands associated with them, even if a file with the same name exists.

GCC = gcc
NVCC = nvcc

# = used for defining varibles
# := is used for defining variables that are evaluated immediately, so that the value of the variable is fixed at the time of definition.

# command to compile and run cuda file: nvcc -o 01_cuda 01_cuda.cu && ./01_cuda

01: 01.c
	@$(GCC) -o 01 01.c
	@./01

# make the cuda binary and run it

02: 01_cuda.cu
	@$(NVCC) -o 01_cuda 01_cuda.cu
	@./01_cuda

# create object file for 01.c

obj01:
	@$(GCC) -c 01.c -o 01.o


# compile and run the obect file

executeObj01: obj01
	@$(GCC) 01.o -o 01
	@./01


# clean: remove the binary files

clean:
	@rm -f 01 01_cuda 01.o

# make 01 will make binary for 01.c
# format: target: prerequisites
#         bash command
#		  another bash command

#$(GCC) is referencing the variable GCC which is defined above as gcc

# compiles to object file