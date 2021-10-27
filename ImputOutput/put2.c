#include <stdio.h>

int main(void){
  char c;
  
  printf("Digite um caracter: ");
  scanf("%c", &c);

  printf("%o - %d - %x", c, c, c);
  
  return 0;
}