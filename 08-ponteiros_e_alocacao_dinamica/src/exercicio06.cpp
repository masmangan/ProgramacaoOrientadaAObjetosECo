#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) { cerr << "Quantidade inválida de argumentos!" << endl;  return 1; }
  int ini, inc, tam, param = atoi(argv[1]);
  double media, v[100], *ptr = v;

  srand(time(NULL));
  for (int i=0; i<100; ++i)
    *(ptr+i) = (rand() % 100)/10.0;

  if (param == 0)      { ini = 0; inc = 2; tam = 50; }   // PARES
  else if (param == 1) { ini = 1; inc = 2; tam = 50; }   // ÍMPARES
  else                 { ini = 0; inc = 1; tam = 100; }  // TODOS
  media=0.0;
  for (int i=ini; i<tam; ++i, ptr+=inc) // Atenção: ptr é modificado...
    media += *ptr;
  media /= tam;

  cout << fixed << setprecision(2) << media << endl;
  return 0;
}
