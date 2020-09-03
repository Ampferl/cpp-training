SHELL = /bin/sh

OBJS =  main.o Entity.o
CFLAG = -Wall -g
CC = g++

main: main.o Entity.o
	${CC} ${CFLAGS} -o $@ $(OBJS)

main.o: main.cpp Entity.h
	${CC} -c main.cpp

Entity.o: Entity.cpp Entity.h
	${CC} -c Entity.cpp

clean:
	-rm main *.o