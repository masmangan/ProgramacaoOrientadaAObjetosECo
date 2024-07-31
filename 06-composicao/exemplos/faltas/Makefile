# Makefile (Roland; 4 abr. 2023)

CFLAGS=-std=c++11 -c

all:		faltas-v1 faltas-v2

faltas-v1:	faltas-v1.o Aluno.o 
		@g++ -o faltas-v1 faltas-v1.o Aluno.o

faltas-v1.o:	faltas-v1.cpp Aluno.hpp
		@g++ ${CFLAGS} faltas-v1.cpp

Aluno.o:	Aluno.cpp Aluno.hpp
		@g++ ${CFLAGS} Aluno.cpp

faltas-v2:	faltas-v2.o Aluno.o Turma.o
		@g++ -o faltas-v2 faltas-v2.o Aluno.o Turma.o

faltas-v2.o:	faltas-v2.cpp Turma.hpp
		@g++ ${CFLAGS} faltas-v2.cpp

Turma.o:	Turma.cpp Turma.hpp Aluno.hpp
		@g++ ${CFLAGS} Turma.cpp

clean:
		@rm -f *.o faltas-v1 faltas-v2	


