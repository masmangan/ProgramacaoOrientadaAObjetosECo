#include <iostream>

// using namespaces std; ==> evitaria o uso de std:: no resto do programa
using std::cout	; // agora basta usar cout, mas ainda eh preciso usar std::endl

void funcao() { cout << "funcao()" << std::endl; }

namespace escopo1 {
  void funcao() { cout << "funcao() do escopo1" << std::endl; }
}

namespace escopo2 {
  void funcao() { cout << "funcao() do escopo2" << std::endl; }
  namespace escopo3 {
    void funcao() { cout << "funcao() do escopo3 [interno de escopo2]" << std::endl; }
  }
}

int main() {
  funcao();
  escopo1::funcao();
  escopo2::funcao();
  escopo2::escopo3::funcao();
  return 0;	
}
