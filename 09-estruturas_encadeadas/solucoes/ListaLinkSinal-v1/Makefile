# Makefile (Roland Teodorowitsch; 21 out. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	ListaLinkSinal.o
		@g++ ListaLinkSinal.o -o ${EXECUTAVEL}

ListaLinkSinal.o:	ListaLinkSinal.cpp
		@g++ ${CFLAGS} ListaLinkSinal.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f ListaLinkSinal.o main.o ${EXECUTAVEL}
