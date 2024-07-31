#include <iostream>
using namespace std;
int main(){
  int *v = new int[10];  // 'v' é um ponteiro para uma área que tem 10 inteiros
  v[0] = 10;
  for (int i=1; i<10; ++i)
      v[i] = v[i-1] + 1;
  for (int i = 0; i < 10; i++)
      cout << "v[" << i << "]: " << v[i] << endl;
  cout << "Endereço de 'v': " << v << endl; // imprime o endereço da área alocada para 'v'
  delete [] v;
  return 0;
}

