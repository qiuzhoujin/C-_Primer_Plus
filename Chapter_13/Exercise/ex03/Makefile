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
	g++ -g -o main main.cpp dma.cpp
	./main

perl:
	perl $(SRC).pl

exec:
	./Listing_12.12

temp:
	g++ -g -c test_of_extern_c.cpp
