CC=g++
CFlags=-Wall -O0 -std=c++11
Sources=main.cpp UI.cpp graphics.cpp plane.cpp map.cpp
Objects=UI.o graphics.o plane.o map.o main.o
all:
	g++ $(CFlags) $(Sources) 
