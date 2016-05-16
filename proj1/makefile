all: program1.o MovieChart.o User.o
	g++ -g program1.o MovieChart.o User.o -o program1



test: all
	./program1
debug: all
	gdb ./program1
val: all
	valgrind ./program1

program1.o: program1.cpp MovieChart.h LinkedList.h
	g++ -c -g  program1.cpp -o program1.o


MovieChart.o: MovieChart.cpp MovieChart.h LinkedList.h
	g++ -c -g  MovieChart.cpp -o MovieChart.o
User.o: User.cpp User.h LinkedList.h
	g++ -c -g User.cpp -o User.o

clean:
	-rm *.o program1

