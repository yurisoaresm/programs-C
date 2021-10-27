// Dado 2 notas de um aluno, informar a média
#include <stdio.h>

int main(void){
  float nota1, nota2, media;
  
  printf("Nota da primeira prova: ");
  scanf("%f", &nota1);
  
  printf("Nota da segunda prova: ");
  scanf("%f", &nota2);

  printf("\nMédia das notas: %.2f", (nota1+nota2)/2);
  return 0;
}