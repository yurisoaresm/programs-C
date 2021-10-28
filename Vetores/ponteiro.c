#include <stdio.h>

int main(void){
  int c[3]; 
  float f[4];
  
  printf("O tamanho de c: %zu bytes.\n", sizeof c); // 3*4bytes
  printf("O tamanho de f: %zu bytes.\n", sizeof f); // 4*4bytes
  printf("A quantidade de elementos de c: %zu\n", sizeof c / sizeof c[0]);
  printf("A quantidade de elementos de f: %zu\n", sizeof f / sizeof f[0]);

  c[0] = 'A'; 
  c[1] = 0x42; 
  c[2] = 67; 

  printf("O elemento 0 de c: %d\n", c[0]);
  printf("O elemento 1 de c: %d\n", c[1]);
  printf("O elemento 2 de c: %d\n", c[2]);
  printf("O elemento 5 de c: %d (lixo)\n", c[5]); // valor aleatório na memória ("lixo")

  printf("O endereço do array c em memória: %p\n", &c); // é o mesmo do primeiro valor do array
  printf("O endereço do primeiro elemento do array c em memória: %p\n", &c[0]);
  printf("O endereço do segundo elemento do array na memória: %p (anterior + 4 bytes)\n", &c[1]); 
  printf("\nEndereço de f[0] na memória: %p\n", &f[0]);
  printf("Endereço de f[1] na memória: %\p\n", &f[1]);
  printf("Endereço de f[2] na memória: %\p\n", &f[2]);
  printf("Endereço de f[3] na memória: %\p\n", &f[3]);
  

  return 0;
}