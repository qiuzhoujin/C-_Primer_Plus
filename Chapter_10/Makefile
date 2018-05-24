SRC=Listing_9.10
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	@#Listing_10.7~Listing_10.9
	g++ -o Listing_10.12 Listing_10.11.cpp Listing_10.12.cpp -lm
	./Listing_10.12
#Listing_10.7~Listing_10.9
#g++ -o Listing_10.9 Listing_10.9.cpp Listing_10.8.cpp -lm
#./Listing_10.9
#Listing_10.4~Listing_10.6
#g++ -o Listing_10.6 Listing_10.5.cpp Listing_10.6.cpp -lm
#./Listing_10.6
#g++ $(FLAGS) -g -o $(TAR) $(SRC).cpp -l$(LIB)
#./$(TAR)

perl:
	perl $(SRC).pl

exec:
	./$(SRC)

temp:
	g++ -g -c test_of_extern_c.cpp
