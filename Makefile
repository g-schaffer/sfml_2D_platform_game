build:
	g++ -std=c++2a -Wall -Wextra -Wpedantic main.cpp -o bin/main -lsfml-graphics -lsfml-window -lsfml-system
run:
	./bin/main