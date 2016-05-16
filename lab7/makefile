all:lab7


lab7: BSTree.o lab7.o
	g++ -std=c++11 -g lab7.o BSTree.o -o lab7
test:all
	./lab7
lab7.o: lab7.cpp BSTree.h
	g++ -std=c++11 -g -c lab7.cpp -o lab7.o;

BSTree.o: BSTree.cpp BSTree.h
	g++ -std=c++11 -g -c BSTree.cpp -o BSTree.o

clean:
	-rm *.o lab7

submit:
	zip lab7.zip *	
