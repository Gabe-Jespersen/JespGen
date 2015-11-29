CC = g++
CFLAGS = -O2 -std=c++11 -Wall
INSTALLPATH = ./
EXECUTABLE = jespgen

all: jespgen

jespgen: main.o parse.o gaussian.o
	$(CC) $(CFLAGS) main.o parse.o gaussian.o -o $(EXECUTABLE)

main.o: main.cpp parse.h gaussian.h
	$(CC) $(CFLAGS) -c main.cpp

parse.o: parse.cpp parse.h
	$(CC) $(CFLAGS) -c parse.cpp

gaussian.o: gaussian.cpp gaussian.h
	$(CC) $(CFLAGS) -c gaussian.cpp


install:
	cp ./$(EXECUTABLE) $(INSTALLPATH)

uninstall:
	rm ./$(EXECUTABLE) $(INSTALLPATH)

clean:
	rm -rf *.o $(EXECUTABLE)
