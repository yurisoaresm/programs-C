// Header
#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, delta, raiz, x1, x2;

  printf("Coeficiente a: ");
  scanf("%f", &a);

  if (a == 0)
    printf("Nao e' uma equacao 2 grau.\n");
  else{
    printf("Coeficente b: ");
    scanf("%f", &b);
    printf("Coeficente c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    printf("Delta: %.2f\n", delta);
    if (delta < 0)
      printf("Nao tem raizes reais.\n");
    else{
      raiz = sqrt(delta);
      printf("Raiz de delta: %.2f\n", raiz);
      x1 = (-b + raiz) / (2 * a);
      x2 = (-b - raiz) / (2 * a);
      printf("X': %.2f\n", x1);
      printf("x'': %.2f\n", x2);
    }
  }
  return 0;
}