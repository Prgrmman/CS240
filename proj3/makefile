GPP=g++ -std=c++11

all: program3 

run: program3
	./program3

program3: program3.cpp City.o Map.o
	$(GPP) program3.cpp City.o Map.o -o program3

tester: tester.cpp Map.o City.o
	$(GPP) tester.cpp Map.o City.o -o tester

City.o: City.cpp City.h
	$(GPP) -c City.cpp -o City.o

Map.o: Map.cpp Map.h City.h
	$(GPP) -c  Map.cpp -o Map.o

clean:
	-rm *.o program3

submit:
	zip program3 City.cpp City.h Map.cpp Map.h program3.cpp townlist3.txt makefile readme

