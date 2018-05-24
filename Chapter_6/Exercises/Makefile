SRC=ex09
FLAGS=-std=c++11
TAR=$(SRC)

C:
	gcc $(FLAGS) -g -o $(TAR) $(SRC).c
	./$(TAR)

cpp:
	g++ $(FLAGS) -g -o $(TAR) $(SRC).cpp -lsupc++
	./$(TAR)

perl:
	perl $(SRC).pl

exec:
	./$(SRC)
