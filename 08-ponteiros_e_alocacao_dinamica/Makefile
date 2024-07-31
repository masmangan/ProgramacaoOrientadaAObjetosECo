PDF =	\
	pucrs-ec-poo-unidade_11-ponteiros_e_alocacao_dinamica-laminas.pdf

all:	$(PDF) src.zip

%.pdf:	%.tex
	@pdflatex -shell-escape $<
	@pdflatex -shell-escape $<

src.zip:	src/exemplo01.cpp src/exemplo02.cpp src/exemplo03.cpp src/exemplo04.cpp src/exemplo05.cpp \
		src/exemplo06.cpp src/matriz_dinamica.cpp src/exercicio02-template.cpp
		@zip -r src.zip src/exemplo01.cpp src/exemplo02.cpp src/exemplo03.cpp src/exemplo04.cpp src/exemplo05.cpp \
				src/exemplo06.cpp src/matriz_dinamica.cpp src/exercicio02-template.cpp

clean:
	@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
	@rm -rf _minted-*

