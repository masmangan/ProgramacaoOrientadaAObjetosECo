# Makefile (Roland Teodorowitsch; 21 out. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	ListaSimplesmenteEncadeada.o
		@g++ ListaSimplesmenteEncadeada.o -o ${EXECUTAVEL}

ListaSimplesmenteEncadeada.o:	ListaSimplesmenteEncadeada.cpp
		@g++ ${CFLAGS} ListaSimplesmenteEncadeada.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f ListaSimplesmenteEncadeada.o main.o ${EXECUTAVEL}
