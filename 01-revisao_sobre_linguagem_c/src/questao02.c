#include <stdio.h>

int fibonacci(int n) {
  printf("A\n");
  if (n==5)
      printf("B\n");
  if (n <= 1)
    return 0;
  if (n == 2)
    return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int f = fibonacci(8);
    return 0;
}
