#include <iostream>

using namespace std;

int main() {
  int  *v, *pv;
  
  v = new int[10];
  for (int i=0; i<10; i++)
      v[i] = i+1;
  
  pv = v;
  for (int i=0; i<10; i++)
      cout << *(pv + i) << endl;

  delete[] v;
  return 0;
}
