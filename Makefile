CC = g++
CFLAGS = -g -std=c++11 -Wall
INSTALLPATH = ./
EXECUTABLE = jespgen

all: jespgen

jespgen: main.o parse.o
	$(CC) $(CFLAGS) main.o parse.o -o $(EXECUTABLE)

main.o: main.cpp parse.h
	$(CC) $(CFLAGS) -c main.cpp

parse.o: parse.cpp parse.h
	$(CC) $(CFLAGS) -c parse.cpp


install:
	cp ./$(EXECUTABLE) $(INSTALLPATH)

uninstall:
	rm ./$(EXECUTABLE) $(INSTALLPATH)

clean:
	rm -rf *.o $(EXECUTABLE)
