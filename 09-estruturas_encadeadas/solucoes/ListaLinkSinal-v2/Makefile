# Makefile (Roland Teodorowitsch; 21 out. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	main.o ListaLinkSinal.o
		@g++ main.o ListaLinkSinal.o -o ${EXECUTAVEL}

main.o:		main.cpp ListaLinkSinal.hpp
		@g++ ${CFLAGS} main.cpp

ListaLinkSinal.o:	ListaLinkSinal.cpp ListaLinkSinal.hpp
		@g++ ${CFLAGS} ListaLinkSinal.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f ListaLinkSinal.o main.o ${EXECUTAVEL}
