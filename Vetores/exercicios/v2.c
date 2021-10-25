/*Escreva um algoritmo em C que preencha um vetor com 80 símbolos (char). Após o preenchimento, exiba na tela: a Quantidade de termos, em porcentagem, que são vogais e NÃO são vogais. */
#include <stdio.h>
#define SIZE 10

int main(void){
  char characters[SIZE];
  int i, vowels = 0;

  for(i = 0; i < SIZE; i++){
    printf("\nDigite %dº caracter: ", i + 1);
    scanf("\n%c", &characters[i]);
  }

  for (i = 0; i < SIZE; i++){
    if (characters[i] == 'a' || characters[i] == 'e' || characters[i] == 'i' || characters[i] == 'o' || characters[i] == 'u')
      vowels++;
  }

  printf("Quantidade de vogais: %.2f %%", vowels*100.0/SIZE);
  printf("\nQuantidade de não vogais: %.2f %%", (SIZE-vowels)*100.0/SIZE);

  return 0;
}

