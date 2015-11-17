default: all

all:
	gcc -Wall hiddenLocals.c -o hiddenLocals
	gcc -Wall uninitialized.c -o uninitialized
	gcc -Wall uninitialized2.cpp -o uninitialized2
	
clean:
	rm hiddenLocals
	rm uninitialized
	rm uninitialized2


	
