/*
Objetivo: criar uma forca (jogo);
Tema: Frutas;
Método: gerar vetor tamanho >= 5 com palavras aleatórias para serem adivinhadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 5
#define COLUNA 12
int main (void){
  char palavras[LINHA][COLUNA] = {{"babaco"},
                                 {"abacaxi"},
                                 {"acerola"}, 
                                 {"jabuticaba"},
                                 {"caju"}};
  int sort, numLetras = 0, flag = 0, acertos = 0, i = 0;
  char chances[numLetras], n;
  srand(time(NULL));
  sort = rand() % 5;

  printf("Vamos jogar uma FORCA !\n");
  printf("CONTEXTO: você possui 10 chances. Ao encerrar suas chances sem completar a palavra você é eliminado.\n");
  printf("TEMA: o tema é FRUTAS\n\n");

  do{
    numLetras = 0;
    while (palavras[sort][numLetras] != '\0'){
      if (n == palavras[sort][numLetras]){
        printf("%c ", palavras[sort][numLetras]);
        chances[numLetras] = palavras[sort][numLetras];
        acertos++;
      }
      else if (chances[numLetras] == palavras[sort][numLetras])
        printf("%c ", chances[numLetras]);
      else
        printf("_ ");

      numLetras++;
    }

  printf("\nDigite uma letra: ");
  scanf("\n%c", &n);
  i++;
  } while(acertos != numLetras - 1 && i != 10);

  if (acertos == numLetras - 1)
    printf("VOCÊ ACERTOU A PALAVRA! PARABÉNS!");
  else {
    printf("\n   |\n   |\n   O\n  /|\\\n  / \\");
    printf("\nRIP.");
  }
   
}