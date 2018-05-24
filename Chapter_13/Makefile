SRC=Listing_12.9
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	@#g++ $(FLAGS) -g -o $(TAR) $(SRC).cpp
	@#./$(TAR)
	g++ -g -o Listing_13.16 Listing_13.15.cpp Listing_13.16.cpp -lm
	./Listing_13.16

perl:
	perl $(SRC).pl

exec:
	./Listing_12.12

temp:
	g++ -g -c test_of_extern_c.cpp
