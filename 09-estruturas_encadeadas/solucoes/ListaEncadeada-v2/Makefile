CC = g++
CFLAGS = -c

all: prog

prog: main.o ListaEncadeada.o Pessoa.o
	$(CC) main.o ListaEncadeada.o Pessoa.o -o prog

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

ListaEncadeada.o: ListaEncadeada.cpp
	$(CC) $(CFLAGS) ListaEncadeada.cpp

Pessoa.o: Pessoa.cpp
	$(CC) $(CFLAGS) Pessoa.cpp

clean:
	rm -rf *.o prog