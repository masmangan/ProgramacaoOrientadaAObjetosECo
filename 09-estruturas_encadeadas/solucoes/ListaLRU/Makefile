# Makefile (Roland Teodorowitsch; 20 maio 2020)
CC=g++
CFLAGS=-c -std=c++11

all:		app

app:		main.o ListaLRU.o
		@$(CC) main.o ListaLRU.o -o app

main.o:		main.cpp ListaLRU.hpp
		@$(CC) $(CFLAGS) main.cpp

ListaLRU.o:	ListaLRU.cpp ListaLRU.hpp
		@$(CC) $(CFLAGS) ListaLRU.cpp

clean:
		@rm -rf *.o app
