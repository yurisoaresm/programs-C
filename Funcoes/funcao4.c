// BACK END
#include <stdio.h>
#include <math.h>

// Protótipos:
int Primo(int N);

// função:
int Primo(int N){
  int contador;
  if (N <= 3)
    return 1;
    for (contador = 2; contador <=ceil(sqrt(N)); contador++){
      if (N % contador == 0)
        return 0;
    }
    return 1;
}


// FRONT END
int main(void){
  int contador, N;
  printf("Valor de N (N >= 1): "); scanf("%i", &N);
  if (N <= 0)
    printf("ERRO de escolha.\n");
  else{
    printf("Números primos entre [1, %i] são: \n", N);
    for (contador = 1; contador <= N; contador++){
      if (Primo(contador))
        printf("Número primo: %i\n", contador);
    }
  }
  return 0;
}