SRC=Listing_9.10
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	g++ -std=c++11 -g -o main Listing_10.8.cpp Listing_10.9.cpp -lm
	./main

perl:
	perl $(SRC).pl

exec:
	./$(SRC)

temp:
	g++ -g -c test_of_extern_c.cpp
