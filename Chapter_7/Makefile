SRC=Listing_7.19
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	g++ $(FLAGS) -g -o $(TAR) $(SRC).cpp -l$(LIB)
	./$(TAR)

perl:
	perl $(SRC).pl

exec:
	./$(SRC)
