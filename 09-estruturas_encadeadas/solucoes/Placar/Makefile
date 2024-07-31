# Makefile (Roland Teodorowitsch; 23 out. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	main.o Resultado.o Placar.o
		@g++ main.o Resultado.o Placar.o -o ${EXECUTAVEL}

main.o:		main.cpp Resultado.hpp Placar.hpp
		@g++ ${CFLAGS} main.cpp

Resultado.o:	Resultado.cpp Resultado.hpp
		@g++ ${CFLAGS} Resultado.cpp

Placar.o:	Placar.cpp Placar.hpp Resultado.hpp
		@g++ ${CFLAGS} Placar.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f Placar.o Resultado.o main.o ${EXECUTAVEL}
