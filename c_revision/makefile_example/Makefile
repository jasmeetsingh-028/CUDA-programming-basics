.PHONY: 01 02 clean
# phony is used to declare targets that are not files, so that make will always execute the commands associated with them, even if a file with the same name exists.
# suppose if you have a file named clean in the directory, and you run make clean, make will not execute the commands associated with the clean target because it thinks that the target is up to date. 
# By declaring clean as a phony target, you ensure that make will always execute the commands associated with it, regardless of whether a file named clean exists or not.


GCC = gcc
NVCC = nvcc

# = used for defining varibles (recursive assignment)
# := is used for defining variables that are evaluated immediately, so that the value of the variable is fixed at the time of definition. (simple assignment)

# command to compile and run cuda file: nvcc -o 01_cuda 01_cuda.cu && ./01_cuda

01: 01.c  # confim that 01.c exists before running the command
	@$(GCC) -o 01 01.c
	@./01

# make the cuda binary and run it
# @ symbol makes sure that the command is not printed to the terminal when executed

# nvcc is the nvidia cuda compiler 

02: 01_cuda.cu 
	@$(NVCC) -o 01_cuda 01_cuda.cu 
	@./01_cuda

# create object file for 01.c

obj01:
	@$(GCC) -c 01.c -o 01.o


# compile and run the obect file
# calls the obj01 first to make sure the object file is created before compiling and running it 

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


# GDB debugger for c and cpp

## some important gdb commands:
# run: run the program
# break: set a breakpoint at a specific line or function	
# disable: disable a breakpointq
# enable: enable a breakpoint
# next or n: step over to the next line of code
# nexti or ni: step over to the next instruction
# step or s: step into a function
# stepi or si: step into an instruction
# print or p: print the value of a variable
# quit or q: exit gdb