PDF =		\
		pucrs-ec-poo-unidade_05-streams_e_arquivos_em_c++-laminas.pdf

all:		$(PDF) src.zip

%.pdf:		%.tex
		@pdflatex -shell-escape $<
		@pdflatex -shell-escape $<

src.zip:	src/Aluno.cpp src/Aluno.hpp src/chamada.cpp src/chamada.txt src/stringstream1.cpp src/stringstream2.cpp \
		src/escrita.cpp	src/leitura.cpp
		@zip -r src.zip src/Aluno.cpp src/Aluno.hpp src/chamada.cpp src/chamada.txt \
				src/stringstream1.cpp src/stringstream2.cpp src/escrita.cpp src/leitura.cpp

clean:
		@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
		@rm -rf _minted-*
