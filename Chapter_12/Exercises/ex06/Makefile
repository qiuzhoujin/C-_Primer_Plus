SRC=Listing_12.9
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	g++ -g -o Listing_12.12 Listing_12.11.cpp Listing_12.12.cpp -lm
	./Listing_12.12

perl:
	perl $(SRC).pl

exec:
	./Listing_12.12

temp:
	g++ -g -c test_of_extern_c.cpp
