// árvore de natal
// Condição: N é impar e 1 < N < 100
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
  int N, i = 1, spaces = 1;
  char string[N];

  do{
    printf("Digite um inteiro ímpar e entre 1 e 100: ");
    scanf("%i", &N);
    printf("\n");
  } while (N <= 2 || N >= 100 || N % 2 == 0);

  for (i = 1; i <= N; i += 2){
    if (i == 1){
      while (spaces <= (N + 1)/2 - i){
        printf(" ");
        spaces++;
      }
    }
    printf("*");
    spaces = 1;
  }

  return 0;
}