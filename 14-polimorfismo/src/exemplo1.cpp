class Base {
public:
  void func1();
};

class Derivada : public Base {
public:
  void func2();
};

int main(){
  Base base, *pBase;
  Derivada derivada, *pDerivada;

  base = derivada;         // copia a parte Base de derivada para base
  derivada = base;         // ERRO!
  pBase = &base;           // ok
  pBase = &derivada;       // ok, pBase aponta para objeto da classe Derivada
  pBase = pDerivada;       // ok
  pDerivada = &base;       // ERRO!
  pDerivada = &derivada;   // ok
  pDerivada = pBase;       // ERRO!

  return 0;
}

