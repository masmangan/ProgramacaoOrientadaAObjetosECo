#include <iostream>

using namespace std;

class Base {
private:
  int info;
public:
  Base(int i = 0) {
    info = i;
    cout << "+ Base(" << info << ") criado..." << endl;
  }
  ~Base() {
    cout << "- Base(" << info << ") destruído..." << endl;
  }
  int obtemInfo() { return info; }
  void defineInfo(int i) { info = i; }
};

void funcao(Base &ob) {
  int i = ob.obtemInfo();
  cout << "funcao> ob.obtemInfo() = " << i << endl;
  ++i;
  ob.defineInfo(i);
  cout << "funcao> ob.obtemInfo() = " << i << endl;
}
	
int main() {
  Base o(10);
  cout << "main> o.obtemInfo() = " << o.obtemInfo() << endl;
  funcao(o);
  cout << "main> o.obtemInfo() = " << o.obtemInfo() << endl;
  return 0;
}
