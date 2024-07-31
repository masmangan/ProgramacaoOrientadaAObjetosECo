PDF =		\
		pucrs-ec-poo-unidade_08-sobrecarga_de_operadores-laminas.pdf

all:		$(PDF) src.zip

%.pdf:		%.tex
		@pdflatex -shell-escape $<
		@pdflatex -shell-escape $<

src.zip:	src/Ponto/Makefile src/Ponto/Ponto.hpp src/Ponto/Ponto.cpp src/Ponto/PontoMain.cpp
		@zip -r src.zip src/Ponto/Makefile src/Ponto/Ponto.hpp src/Ponto/Ponto.cpp src/Ponto/PontoMain.cpp

clean:
		@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
		@rm -rf _minted-*
		@rm -f src.zip
