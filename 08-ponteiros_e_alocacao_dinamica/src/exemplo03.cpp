#include <iostream>

int main() {
  int vetor[10]= {1,2,3,4,5,6,7,8,9,10};
  std::cout << vetor << std::endl;
  std::cout << &vetor[0] << std::endl;
  std::cout << *vetor << std::endl;
  return 0;
}
