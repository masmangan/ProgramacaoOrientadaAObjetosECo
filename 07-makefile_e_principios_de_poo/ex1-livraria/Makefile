# Makefile (Roland Teodorowitsch; 16 set. 2020)

CC=g++
CFLAGS=-c -std=c++11

all:		app

app:		main.o ProdutoComPaginasEAno.o ProdutoComPaginas.o Produto.o Promocao.o
		@${CC} main.o ProdutoComPaginasEAno.o ProdutoComPaginas.o Produto.o Promocao.o -o app

main.o:		main.cpp Promocao.hpp Produto.hpp ProdutoComPaginas.hpp ProdutoComPaginasEAno.hpp
		@${CC} ${CFLAGS} main.cpp

ProdutoComPaginasEAno.o:	ProdutoComPaginasEAno.cpp ProdutoComPaginasEAno.hpp ProdutoComPaginas.hpp Produto.hpp Promocao.hpp
		@${CC} ${CFLAGS} ProdutoComPaginasEAno.cpp

ProdutoComPaginas.o:	ProdutoComPaginas.cpp ProdutoComPaginas.hpp Produto.hpp Promocao.hpp
		@${CC} ${CFLAGS} ProdutoComPaginas.cpp

Produto.o:	Produto.cpp Produto.hpp Promocao.hpp
		@${CC} ${CFLAGS} Produto.cpp

Promocao.o:	Promocao.cpp Promocao.hpp
		@${CC} ${CFLAGS} Promocao.cpp

clean:
		rm -rf *.o app
