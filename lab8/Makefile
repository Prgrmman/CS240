GPP= g++ -std=c++11 -O3

all: lab8 Sort.o

run: all
	./lab8

lab8: lab8.cpp Sort.o Heap.o
	$(GPP) lab8.cpp Sort.o Heap.o -o lab8 

# Objects
Sort.o: Sort.cpp Sort.h Heap.h
	$(GPP) -c Sort.cpp -o Sort.o

Heap.o: Heap.cpp Heap.h
	$(GPP) -c Heap.cpp -o Heap.o

clean:
	-rm lab8 *.o

submit:
	zip lab8 Heap.* Sort.* Makefile readme
