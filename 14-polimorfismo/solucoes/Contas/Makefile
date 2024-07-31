# Makefile (Roland Teodorowitsch; 2 nov. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:			${EXECUTAVEL}

${EXECUTAVEL}:		main.o Conta.o Transacao.o ContaComum.o ContaPoupanca.o ContaLimite.o
			@g++ main.o Conta.o Transacao.o ContaComum.o ContaPoupanca.o ContaLimite.o -o ${EXECUTAVEL}

main.o:			main.cpp Conta.hpp ContaComum.hpp ContaPoupanca.hpp ContaLimite.hpp
			@g++ ${CFLAGS} main.cpp

Transacao.o:		Transacao.cpp Transacao.hpp
			@g++ ${CFLAGS} Transacao.cpp

Conta.o:		Conta.cpp Conta.hpp Transacao.hpp
			@g++ ${CFLAGS} Conta.cpp

ContaComum.o:		ContaComum.cpp ContaComum.hpp Conta.hpp
			@g++ ${CFLAGS} ContaComum.cpp

ContaPoupanca.o:	ContaPoupanca.cpp ContaPoupanca.hpp Conta.hpp
			@g++ ${CFLAGS} ContaPoupanca.cpp

ContaLimite.o:		ContaLimite.cpp ContaLimite.hpp Conta.hpp
			@g++ ${CFLAGS} ContaLimite.cpp

run:			${EXECUTAVEL}
			@./${EXECUTAVEL}

clean:
			@rm -f Transacao.o Conta.o ContaComum.o ContaPoupanca.o ContaLimite.o main.o ${EXECUTAVEL}

