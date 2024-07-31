// Contador.hpp (Roland Teodorowitsch; 23 mar. 2021)

#ifndef _CONTADOR_HPP_
#define _CONTADOR_HPP_
class Contador {
	private:
		int valor;
	public:
		Contador(int v = 0);
		~Contador();
		int obtemValor();
		void incrementa();
		void defineValor(int v);
};
#endif
