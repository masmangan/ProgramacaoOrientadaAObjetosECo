ALL =				exemplo01 \
				exemplo02 \
				exemplo03 \
				exemplo04 \
				exemplo05 \
				exemplo06 \
				matriz_dinamica \
				exercicio01 \
				exercicio02 \
				exercicio02-template \
				exercicio03 \
				exercicio04 \
				exercicio05 \
				exercicio06

CFLAGS =			-std=c++11

all:				${ALL}

%:  				%.cpp
			        @g++ ${CFLAGS} -o $@ $<

#executavel:			fonte.cpp
#				@g++ ${CFLAGS} -o executavel fonte.cpp

clean:
				@rm -f ${ALL}
