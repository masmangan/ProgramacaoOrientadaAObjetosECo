#include<iostream>
#include<string>

using namespace std;

class Televisao{
    private:
      int potencia;
      int canal;

    public:
      Televisao();
			~Televisao();
			void aumentaVolume();
			void diminuiVolume();
			void aumentaCanal();
			void diminuiCanal();
			void setCanal(int canal);
			int getVolume();
			int getCanal();
};