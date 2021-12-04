#include <stdio.h>
#include <math.h>
#define pi 3.14

float logaritmo(int N);

float logaritmo(int N){
  int i, divisor;
  
  for (i = 1; i <= N; i++){
    if (N % i == 0)
      divisor++;
  }
  
  if (divisor > 2) // N não é primo se tiver mais de 2 divisores
    return log(N)/log(pi);
  else 
    return log(pi)/log(N);
}

int main(void) {
  int N, count = 1;

  while (count <= 500){
    printf("Digite N: ");
    scanf("%i", &N);

    if (N < 0)
      printf("ERRO: N não pode ser negativo.\n");
    else{
      printf("O cálculo é: %.2f\n", logaritmo(N));
      count++;
    }
  }
  return 0;
}