#include <stdio.h> 

int contagem(int *v1, int t1, int *v2, int t2) { 
  int res = 0, i, j, igual; 

  if (t1 > t2) 
     return 0; 
  for (i=0; i<=t2-t1; ++i) { 
      igual = 1; 
      for (j=0; j<t1; ++j) { 
          if (v1[j] != v2[j+i]) { 
             igual = 0; 
             break;
          } 
      }
      if (igual) {
          printf("%d\n",i);
         ++res;
      }
  } 
  return res; 
} 

int main() { 
  int tam_A, A[500], tam_B, B[500], i; 

  // printf("Tamanho Vetor A: "); 
  scanf("%d",&tam_A); 
  // printf("Vetor A: "); 
  for (i=0; i<tam_A;++i) { 
      // printf("A[%d]: ",i); 
      scanf("%d",&A[i]); 
  } 
  // printf("Tamanho Vetor B: "); 
  scanf("%d",&tam_B); 
  // printf("Vetor B: "); 
  for (i=0; i<tam_B;++i) { 
      // printf("B[%d]: ",i); 
      scanf("%d",&B[i]); 
  }
  
  printf("CONTAGEM = %d\n",contagem(A,tam_A,B,tam_B)); 
  return 0; 
}
    
