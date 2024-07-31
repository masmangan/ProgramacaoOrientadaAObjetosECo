#include<iostream>
#include<string>

using namespace std;

class Relogio{
    private:
      int hora;
      int min;
			int seg;

    public:
      Relogio();
			~Relogio();
			void setHora(int hora, int min, int seg);
			void getHora(int *hora, int *min, int *seg);
			void avancar();
};