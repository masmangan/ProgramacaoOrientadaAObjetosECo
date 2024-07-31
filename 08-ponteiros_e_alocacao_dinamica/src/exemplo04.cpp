#include <iostream>
int main() {
  int numeros[10]= {1,2,3,4,5,6,7,8,9,0};
  int *pnum = numeros;
  std::cout << *(pnum + 5) << std::endl;    // 6
  std::cout << pnum[5] << std::endl;        // 6
  std::cout << *(numeros + 5) << std::endl; // 6
  std::cout << numeros[5] << std::endl;     // 6
  return 0;
}
