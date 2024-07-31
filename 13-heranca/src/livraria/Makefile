CC = g++
CFLAGS = -c #-DDEBUG
EXEC = app

all:				${EXEC}

${EXEC}:			app.o Promocao.o Produto.o ProdutoComPaginas.o ProdutoComPaginasEAno.o
				@${CC} -o ${EXEC} app.o Promocao.o Produto.o ProdutoComPaginas.o ProdutoComPaginasEAno.o

app.o:				app.cpp Produto.hpp ProdutoComPaginas.hpp ProdutoComPaginasEAno.hpp
				@${CC} ${CFLAGS} app.cpp

Promocao.o:			Promocao.cpp Promocao.hpp
				@${CC} ${CFLAGS} Promocao.cpp

Produto.o:			Produto.cpp Produto.hpp Promocao.hpp
				@${CC} ${CFLAGS} Produto.cpp

ProdutoComPaginas.o:		ProdutoComPaginas.cpp ProdutoComPaginas.hpp
				@${CC} ${CFLAGS} ProdutoComPaginas.cpp

ProdutoComPaginasEAno.o:	ProdutoComPaginasEAno.cpp ProdutoComPaginasEAno.hpp
				@${CC} ${CFLAGS} ProdutoComPaginasEAno.cpp

clean:
				@rm -rf *.o ${EXEC}
