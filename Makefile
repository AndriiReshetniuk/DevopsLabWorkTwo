all: Calculation

Calculation: main.o Calculation.o
	g++ -g -Wall main.o Calculation.o -o Calculation.elf

main.o: main.cpp
	g++ -g -Wall -c main.cpp

Calculation.o: Calculation.cpp Calculation.h
	g++ -g -Wall -c Calculation.cpp

clean:
	rm -rf -v *.o
	rm -rf -v *.gch
