#include <stdio.h>

int fibonacci(int n) {
  if (n <= 1)
    return 0;
  if (n == 2)
    return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int pares = 0, impares = 0, zeros = 0;
    while (1) {
        int n, fib;
        scanf("%d",&n);
        if (n <= 0)
            break;
        fib = fibonacci(n);
        // printf("> %d\n",fib);
        if (fib % 2 == 1)
            ++impares;
        else {
            ++pares;
            if (fib == 0)
                zeros++;
        }
    }
    printf("pares = %d\n", pares);
    printf("impares = %d\n", impares);
    printf("zeros = %d\n", zeros);
    return 0;
}
