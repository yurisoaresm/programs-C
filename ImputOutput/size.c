#include <stdio.h>

int main(void){
  char c, c_max = 127, c_min = -128; // 1 char = 8 bits, mas bit mais significativo define o sinal, portanto o valor max de c será 2^7 - 1= 127.
  unsigned char uc_min = 0, uc_max = 255; // 1 char = 8 bits => 2^8 - 1 = 255 valor max em decimal representado por 8 bits. 
  int i;
  float f;
  double d;
  char array[3] = {'A','B','C'};

  printf("O tamanho de c (char) é %zu bytes e %zu bits.\n", sizeof c, sizeof c *8);

  printf("O tamanho de i (inteiro) é %zu bytes e %zu bits.\n", sizeof i, sizeof i *8);

  printf("O tamanho de f (float) é %zu bytes e %zu bits.\n", sizeof f, sizeof f *8);

  printf("O tamanho de d (double) é %zu bytes e %zu bits.\n", sizeof d, sizeof d *8);
  
  printf("O valor de c: min %d / max: %d \n", c_min, c_max);
  printf("O valor de uc min %d / max: %d \n", uc_min, uc_max);

  // array = tamnhado do tipo *tamanho posicoes
  printf("O tamanho do array é %zu bytes.\n", sizeof array); 

  return 0;
}