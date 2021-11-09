#include <stdio.h>

// BACK END : ESCOPO LOCAL
// Protótipos:
int fatorial(int n);

// Funções:
int fatorial(int n){
  int FAT = 1, contador;

  if (n <= 1)
    return 1;
  else{
    for (contador = 2; contador <= n; contador++)
      FAT = FAT * contador;
    return FAT;
  }
}

// FRONT END : ESCOPO GLOBAL
int main(void) {
  int n, FAT, contador;

  printf("Valor de n (n >= 0): ");
  scanf("%i", &n);
  // Tratamento de erro e exceção
  if (n < 0)
    printf("ERRO no valor de n.\n");
  else{
    printf("Funcao fatorial: f(n) entre [0, %i]: \n", n);
    for (contador = 0; contador <= n; contador++){
      FAT = fatorial(contador);
      printf("Fatorial[%i]: %i\n", contador, FAT);
    }
  }
  return 0;
}