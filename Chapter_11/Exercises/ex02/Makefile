SRC=Listing_9.10
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	@#Listing_11.13~Listing_11.15
	g++ -g -o Listing_11.15 Listing_11.14.cpp Listing_11.15.cpp -lm
	./Listing_11.15

perl:
	perl $(SRC).pl

exec:
	./$(SRC)

temp:
	g++ -g -c test_of_extern_c.cpp
