SHELL = /bin/sh

OBJS =  main.o Entity.o
CFLAG = -Wall -g

main: $(OBJS)
	${CXX} ${CFLAGS} -o $@ $(OBJS)

main.o: main.cpp Entity.h
	${CXX} -c main.cpp

Entity.o: Entity.cpp Entity.h
	${CXX} -c Entity.cpp

clean:
	-rm main *.o