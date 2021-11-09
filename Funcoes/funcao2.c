#include <stdio.h>
#include <math.h>

int main(void) {
  int n, contador;
  float fn;

  printf("Valor de n (n > 0): ");
  scanf("%i", &n);
  
  // Tratamento de erro:
  if (n <= 0)
    printf("Erro no valor de n: ");
  else {
    printf("Funcao: f(n) entre [1, %i]: \n", n);
    for (contador = 1; contador <= n; contador++) {
      fn = ceil( pow(3, contador) - pow(2, contador) ) / (pow(contador , 1.0 / 5) );
      printf("f(%i) = %.0f\n", contador, fn);
    }
  }
  return 0;
}