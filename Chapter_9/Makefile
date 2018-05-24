SRC=Listing_9.10
FLAGS=-std=c++11
TAR=$(SRC)
LIB=m

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	@#Listing_9.11~Listing_9.13
	g++ -o Listing_9.13 Listing_9.12.cpp Listing_9.13.cpp -lm
	./Listing_9.13
#g++ $(FLAGS) -g -o $(TAR) $(SRC).cpp -l$(LIB)
#./$(TAR)
#Listing_9.5~Listing_9.6
#g++ -o Listing_9.7 Listing_9.7.cpp Listing_9.8.cpp -lm
#./Listing_9.7
#Listing_9.5~Listing_9.6
#g++ -o Listing_9.5 Listing_9.5.cpp Listing_9.6.cpp -lm
#./Listing_9.5
#Listing_9.1~Listing_9.3
#g++ -o Listing_9.3 -I . Listing_9.2.cpp Listing_9.3.cpp -lm
#./Listing_9.3
#g++ $(FLAGS) -g -o $(TAR) $(SRC).cpp -l$(LIB)
#./$(TAR)

perl:
	perl $(SRC).pl

exec:
	./$(SRC)

temp:
	g++ -g -c test_of_extern_c.cpp
