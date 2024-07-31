ALL =				exercicio1 \
				exercicio2 \
				exercicio3

CFLAGS =			-std=c++11

all:				${ALL}

exercicio1:			exercicio1.cpp Turma.cpp Turma.hpp
				@g++ ${CFLAGS} -o exercicio1 exercicio1.cpp Turma.cpp

exercicio2:			exercicio2.cpp Turma.cpp Turma.hpp
				@g++ ${CFLAGS} -o exercicio2 exercicio2.cpp Turma.cpp

exercicio3:			exercicio3.cpp
				@g++ ${CFLAGS} -o exercicio3 exercicio3.cpp

clean:
				@rm -f ${ALL}
