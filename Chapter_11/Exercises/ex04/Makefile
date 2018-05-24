SRC=Listing_9.10
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	g++ -g -o Listing_11.12 Listing_11.11.cpp Listing_11.12.cpp -lm
	./Listing_11.12

perl:
	perl $(SRC).pl

exec:
	./$(SRC)

temp:
	g++ -g -c test_of_extern_c.cpp
