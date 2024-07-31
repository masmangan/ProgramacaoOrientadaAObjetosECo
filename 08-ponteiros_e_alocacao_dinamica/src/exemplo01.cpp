#include <iostream>

int main(){
  int x, *ptr;
  x = 5;
  ptr = &x;
  std::cout << "x    = " << x << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;
  *ptr = 10;
  std::cout << "x    = " << x << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;
  return 0;
}
