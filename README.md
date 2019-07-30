LC-3 cross-platfrom virtual machine.

How to run 2048 game on Windows:

1. Compile code using gcc.
	gcc -o main.exe source/lc3-vm.c source/lc3-vm.h source/main.c
2. Run program.
main.exe 2048.obj

--------------------

How to run on Linux:

1. Compile code using gcc.
	gcc -o main source/*.c source/*.h
2. Run program.
./main 2048.obj


