CFLAGS = -c -std=c++11 #-DDEBUG

all:		main.o Pessoa.o Aluno.o Professor.o Recurso.o Turma.o
		g++ -o app main.o Pessoa.o Aluno.o Professor.o Recurso.o Turma.o
		./app > app.out

main.o:		main.cpp Aluno.hpp Professor.hpp
		g++ ${CFLAGS} main.cpp

Pessoa.o:	Pessoa.cpp Pessoa.hpp
		g++ ${CFLAGS} Pessoa.cpp

Aluno.o:	Aluno.cpp Aluno.hpp Pessoa.hpp
		g++ ${CFLAGS} Aluno.cpp

Professor.o:	Professor.cpp Professor.hpp Pessoa.hpp
		g++ ${CFLAGS} Professor.cpp

Recursos.o:	Recurso.cpp Recurso.hpp
		g++ ${CFLAGS} Recurso.cpp

Turma.o:	Turma.cpp Turma.hpp Aluno.hpp Professor.hpp Recurso.hpp
		g++ ${CFLAGS} Turma.cpp

clean:
		rm -f main.o Pessoa.o Aluno.o Professor.o Recurso.o Turma.o app
