# Makefile (Roland Teodorowitsch; 21 out. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	main.o ListaSimplesmenteEncadeada.o
		@g++ main.o ListaSimplesmenteEncadeada.o -o ${EXECUTAVEL}

main.o:		main.cpp ListaSimplesmenteEncadeada.hpp
		@g++ ${CFLAGS} main.cpp

ListaSimplesmenteEncadeada.o:	ListaSimplesmenteEncadeada.cpp ListaSimplesmenteEncadeada.hpp
		@g++ ${CFLAGS} ListaSimplesmenteEncadeada.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f ListaSimplesmenteEncadeada.o main.o ${EXECUTAVEL}
