SRC=Listing_9.10
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	g++ -std=c++11 -g -o main string2.cpp main.cpp -lm
	./main

perl:
	perl $(SRC).pl

exec:
	./$(SRC)

temp:
	g++ -g -c test_of_extern_c.cpp
