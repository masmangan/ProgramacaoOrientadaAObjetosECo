PDF =	pucrs-ec-poo-unidade_01-revisao_sobre_linguagem_c-laminas.pdf \
	pucrs-ec-poo-unidade_01-comandos_basicos_do_unix-laminas.pdf

all:	$(PDF)

%.pdf:	%.tex
	@pdflatex -shell-escape $<
	@pdflatex -shell-escape $<

clean:
	@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
	@rm -rf _minted-*

