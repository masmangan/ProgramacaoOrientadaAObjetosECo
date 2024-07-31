#include <iostream>

using namespace std;

struct S {
  int atrib1;
private:
  int atrib2;
public:
  S(int par1, int par2) { atrib1 = par1; atrib2 = par2; }
  int obtemAtrib1() { return atrib1; }
  int obtemAtrib2() { return atrib2; }
};

class C {
  int atrib1;
private:
  int atrib2;
public:
  C(int par1, int par2) { atrib1 = par1; atrib2 = par2; }
  int obtemAtrib1() { return atrib1; }
  int obtemAtrib2() { return atrib2; }
};

int main() {
  S s(1,2);
  cout << "s.obtemAtrib1() = " << s.obtemAtrib1() << endl;
  cout << "s.obtemAtrib2() = " << s.obtemAtrib2() << endl;
  s.atrib1 = 3;
  // s.atrib2 = 4; // ERRO
  cout << "s.atrib1 = " << s.atrib1 << endl;
  // cout << "s.atrib2 = " << s.atrib2 << endl; // ERRO

  C c(5,6);
  cout << "c.obtemAtrib1() = " << c.obtemAtrib1() << endl;
  cout << "c.obtemAtrib2() = " << c.obtemAtrib2() << endl;
  // c.atrib1 = 3; // ERRO
  // c.atrib2 = 4; // ERRO
  // cout << "c.atrib1 = " << c.atrib1 << endl; // ERRO
  // cout << "c.atrib2 = " << c.atrib2 << endl; // ERRO

  return 0;	
}
