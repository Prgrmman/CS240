GPP= g++ -std=c++11 
OBJECTS= Player.o Card.o Table.o Heap.o Deck.o



all: program2 $(OBJECTS)

run: program2
	./program2

program2: program2.cpp $(OBJECTS)
	$(GPP) program2.cpp $(OBJECTS) -o program2


# Object files of various classes

Player.o: Player.cpp Card.h
	$(GPP) -c Player.cpp -o Player.o

Card.o: Card.cpp Card.h
	$(GPP) -c Card.cpp -o Card.o

Heap.o: Heap.cpp Heap.h
	$(GPP) -c Heap.cpp -o Heap.o

Table.o: Table.cpp Table.h Player.h
	$(GPP) -c Table.cpp -o Table.o

Deck.o: Deck.cpp Card.h Deck.h
	$(GPP) -c Deck.cpp -o Deck.o


# for submission and cleaning
clean:
	-rm program2 $(OBJECTS) 

submit:
	zip program2.zip *
