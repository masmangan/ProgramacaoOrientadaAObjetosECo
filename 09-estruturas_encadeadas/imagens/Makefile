PNG =	exercicio1.png
	
EPS =	

all:	$(EPS) $(PNG)

%.eps:	%.gv
	@dot -Teps $< > $@

%.png:	%.gv
	@dot -Tpng -Gdpi=300 $< > $@

clean:
	@rm -f $(EPS) $(PNG) *.pdf
