CC=g++
CFlags=-Wall -O0
Sources=main.cpp server.cpp
all: 
	$(CC) $(CFlags)  $(Sources)
