EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	PontoMain.o Ponto.o
		@g++ PontoMain.o Ponto.o -o ${EXECUTAVEL}

PontoMain.o:	PontoMain.cpp Ponto.hpp
		@g++ ${CFLAGS} PontoMain.cpp

Ponto.o:	Ponto.cpp Ponto.hpp
		@g++ ${CFLAGS} Ponto.cpp

clean:
		@rm -f Ponto.o PontoMain.o ${EXECUTAVEL}
