/* 
  ------------- MATRIZ -------------
  Matrizes: A, B, C de ordem 4 x 3;
  A e B: recebe números inteiros pares pertencentes a [2, 100];
  C: recebe 1 (se A for múltipo B) ou 0 (não for múltiplo).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int A[4][3], B[4][3], C[4][3];
  int i, j;

  srand(time(NULL));

  for (i = 0; i < 4; i++){
    for (j = 0; j < 3; j++){
      do{
        A[i][j] = 2 + rand() % 99;
      } while (A[i][j] % 2 != 0);

      do{
         B[i][j] = 2 + rand() % 99;
      } while (B[i][j] % 2 != 0);

      if (A[i][j] % B[i][j] == 0)
        C[i][j] = 1;
      
      else
        C[i][j] = 0;
    }
  }

  printf("Matriz A:\n");
  for (i = 0; i < 4; i++){
    for (j = 0; j < 3; j++){
      printf("\t%i", A[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz B:\n");
  for (i = 0; i < 4; i++){
    for (j = 0; j < 3; j++){
      printf("\t%i", B[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz C:\n");
  for (i = 0; i < 4; i++){
    for (j = 0; j < 3; j++){
      printf("\t%i", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
