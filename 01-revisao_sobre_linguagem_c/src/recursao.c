#include <stdio.h>

/* Fatorial(n) = n . (n-1) . (n-2) .  ...  . 3 . 2 . 1
 *
 * Fatorial(n) = n . Fatorial(n-1)
 * Fatorial(1) = 1
 * Fatorial(0) = 1
 *
 * Fatorial(5) = 5 . Fatorial(4)
 *                   4 . Fatorial(3)
 *                       3 . Fatorial(2)
 *                           2 . Fatorial(1)
 *                               1
 */

int fatorial(int n) {
	int i, res = 1;
	for (i=2; i<=n; ++i)
		res = res * i;
	return res;
}

int fatorialRec(int n) {
	if (n <= 1)
		return 1;
	return n * fatorialRec(n-1);
}

void minhaFuncao(int n) {
	int i;
	for (i=1; i<=n; ++i)
		printf(" %d", i);
	printf("\n");
}

void minhaFuncaoRec(int n) {
	if (n < 1)
		return;
	minhaFuncaoRec(n-1);
	printf(" %d",n);
}

int fibonacci(int n) {
	if (n == 3)
		printf("*\n");
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}
/*

   fibonacci(5) = fibonacci(4)                                + fibonacci(3)
                  fibonacci(3)              + fibonacci(2)      fibonacci(2)+fibonacci(1)
		  fibonacci(2)+fibonacci(1)   1                 1            0
                  1            0
 
 */

int main() {
	int n = 5;
	printf("%d! = %d\n",n,fatorial(n));
	printf("%d! = %d\n",n,fatorialRec(n));

	minhaFuncao(10);
	minhaFuncaoRec(10);
	printf("\n\n");

	printf("%d\n",fibonacci(5));

	return 0;
}

