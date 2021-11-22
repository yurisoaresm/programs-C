// Manipulação de ponteiros
#include <stdio.h>

int main(void) {
  int x = 5, y = 3;
  int *P1, *P2;
  int vetor[5] = {1, 2, 3, 4 , 5}, i;

  printf("Acesso direto: x = %i\n", x);
  printf("Acesso direto: y = %i\n", y);

  P1 = &x;
  P2 = &y;

  printf("Acesso indireto: x = %i\n", *P1);
  printf("Acesso indireto: y = %i\n", *P2);

  // Endereços:
  printf("Endereço direto: x = %p\n", &x);
  printf("Acesso indireto: x = %p\n", P1);
  printf("Endereço direto: y = %p\n", &y);
  printf("Acesso indireto: y = %p\n", P2);
  
  for (i = 0; i < 5; i++){
    printf("Acesso direto:   vetor[%i] = %i\n", i, vetor[i]);
    printf("Acesso indireto: vetor[%i] = %i\n", i, *(vetor + i));
    printf("Endereço direto: vetor[%i] = %p\n", i, vetor + i);
  }
  return 0;
}