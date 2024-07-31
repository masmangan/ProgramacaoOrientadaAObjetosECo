#include "binario.h"

ostream& operator<< (ostream &out, binario &b){
  out << b.getValue();
  return out;
}

int main(){
  binario b1, b2, b3;

  b1="1010";
  cout << b1 << endl;

  b2=23;
  cout << b2 << endl;

  b3 = b2 + b1;
  cout << b3 << " (int) " << (int)b3 << endl;

  return 0;
}