# Makefile (Roland Teodorowitsch; 9 set. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	main.o Pneu.o Motor.o Automovel.o
		@g++ main.o Automovel.o Pneu.o Motor.o -o ${EXECUTAVEL}

main.o:		main.cpp Motor.hpp Pneu.hpp Automovel.hpp
		@g++ ${CFLAGS} main.cpp

Automovel.o:	Automovel.cpp Automovel.hpp Motor.hpp Pneu.hpp
		@g++ ${CFLAGS} Automovel.cpp

Pneu.o:		Pneu.cpp Pneu.hpp
		@g++ ${CFLAGS} Pneu.cpp

Motor.o:	Motor.cpp Motor.hpp
		@g++ ${CFLAGS} Motor.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f Automovel.o Pneu.o Motor.o main.o ${EXECUTAVEL}
