CC = g++

all: hw09

alldb: debug

hw06: hw09.cpp hw09.h
	$(CC) hw09.cpp -o hw06