PDF =	\
	pucrs-ec-poo-unidade_07-makefile_e_principios_de_poo-laminas.pdf

all:	$(PDF)

%.pdf:	%.tex
	@pdflatex -shell-escape $<
	@pdflatex -shell-escape $<

clean:
	@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
	@rm -rf _minted-*

