all:
	g++ main.cpp src/*.cpp -I includes -o bin/ski

debug:
	g++ main.cpp src/*.cpp -I includes -o bin/ski -g
