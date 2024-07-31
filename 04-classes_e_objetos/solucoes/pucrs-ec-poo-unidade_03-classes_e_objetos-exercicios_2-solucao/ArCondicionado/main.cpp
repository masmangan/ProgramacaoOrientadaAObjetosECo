/* Arquivo: main.cpp (Roland Teodorowitsch; 25 mar. 2019)
 
   Implemente um condicionador de ar. O condicionador possui 10 potências diferentes. Cada
   unidade da potência do condicionador diminui a temperatura do ambiente em 1.8 oC. A variação
   que o condicionador consegue causar está no intervalo [0 oC - 18 oC], ou seja, zero graus de
   variação quando desligado e dezoito graus de variação quando ligado na potência máxima.
   Através de um sensor, o condicionador é informado da temperatura externa. Dada essa
   temperatura e a potência selecionada, o condicionador calcula e retorna a temperatura do
   ambiente.
   No programa principal, crie dois condicionadores. Informe duas temperaturas externas
   diferentes para cada um (Exemplo: 25 oC e 31 oC), ajuste o segundo em potência máxima (10) e o
   primeiro em potência média (5). Finalmente, exiba a temperatura resultante de cada ambiente.

 */

#include <iostream>
#include "ArCondicionado.h"

using namespace std;

int main() {
  int i;

  ArCondicionado a1;
  a1.defineTempExt(25.0);
  for (i=0;i<5;++i)
      a1.aumentaPotencia();
  cout << "Temperartura resultante no ambiente 1: " << a1.obtemTemperatura() << endl;

  ArCondicionado a2;
  a2.defineTempExt(31.0);
  for (i=0;i<10;++i)
      a2.aumentaPotencia();
  cout << "Temperartura resultante no ambiente 1: " << a2.obtemTemperatura() << endl;

  return 0;
}

