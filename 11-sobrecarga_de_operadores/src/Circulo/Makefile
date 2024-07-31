EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	CirculoMain.o Circulo.o
		@g++ CirculoMain.o Circulo.o -o ${EXECUTAVEL}

CirculoMain.o:	CirculoMain.cpp Circulo.hpp
		@g++ ${CFLAGS} CirculoMain.cpp

Circulo.o:	Circulo.cpp Circulo.hpp
		@g++ ${CFLAGS} Circulo.cpp

clean:
		@rm -f Circulo.o CirculoMain.o ${EXECUTAVEL}
