CC = g++
CFLAGS = -c #-DDEBUG
EXEC = app

all:				${EXEC}

${EXEC}:			app.o Professor.o Aluno.o Pessoa.o
				@${CC} -o ${EXEC} app.o Professor.o Aluno.o Pessoa.o

app.o:				app.cpp Pessoa.hpp Aluno.hpp Professor.hpp
				@${CC} ${CFLAGS} app.cpp

Pessoa.o:			Pessoa.cpp Pessoa.hpp
				@${CC} ${CFLAGS} Pessoa.cpp

Aluno.o:			Aluno.cpp Aluno.hpp
				@${CC} ${CFLAGS} Aluno.cpp

Aluno.hpp:			Pessoa.hpp

Professor.o:			Professor.cpp Professor.hpp
				@${CC} ${CFLAGS} Professor.cpp

Professor.hpp:			Pessoa.hpp

clean:
				@rm -rf *.o ${EXEC}
