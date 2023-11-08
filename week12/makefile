run: main
	./main

main: main.o City.o
	g++ -std=c++17 -o main City.o main.o

City.o: City.cpp City.h
	g++ -std=c++17 -c City.cpp

main.o: main.cpp City.h
	g++ -std=c++17 -c main.cpp

.PHONY: run

