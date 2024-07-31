#include <iostream>

int main() {
  int x;
  int *ptr;
  ptr = &x;
  std::cout << "O endereco de x é: " << ptr << std::endl;
  return 0;
}

