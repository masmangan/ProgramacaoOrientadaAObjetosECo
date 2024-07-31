ALL =				const \
				exemplo1 \
				exemplo2 \
				exemplo3 \
				exercicio01

CFLAGS =			

all:				${ALL}

const:				const.cpp
				@g++ ${CFLAGS} -o const const.cpp

exemplo1:			exemplo1.cpp
				@g++ ${CFLAGS} -o exemplo1 exemplo1.cpp
				@./exemplo1 > exemplo1.output

exemplo2:			exemplo2.cpp
				@g++ ${CFLAGS} -o exemplo2 exemplo2.cpp
				@./exemplo2 > exemplo2.output

exemplo3:			exemplo3.cpp
				@g++ ${CFLAGS} -o exemplo3 exemplo3.cpp
				@./exemplo3 > exemplo3.output

exercicio01:			exercicio01.cpp
				@g++ ${CFLAGS} -o exercicio01 exercicio01.cpp

clean:
				@rm -f ${ALL}

