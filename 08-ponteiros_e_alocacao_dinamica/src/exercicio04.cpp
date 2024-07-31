#include <iostream>
using namespace std;

void imprimeVetorInt (int *v, int tam){
  for (int i=0; i<tam; i++)
      cout << *(v+i) << endl;
}

void imprimeVetorDouble (double *v, int tam){
  for (int i=0; i<tam; i++)
      cout << *(v+i) << endl;
}

int main() {
  int    vi[5] = {2, 3, 4, 5, 6};
  double vd[6] = {2.2, 3.3, 4.4, 5.5, 6.6, 7.7};

  imprimeVetorInt(vi, sizeof(vi)/sizeof(int));
  imprimeVetorDouble(vd, sizeof(vd)/sizeof(double));

  return 0;
}
