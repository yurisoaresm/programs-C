/*
  Problema: Criar um programa: Função + Protótipo que preencha e exiba uma matriz quadrada M 5X5 com valores aleatórios entre 1 e 9. Após o preenchimento, calcule e exiba dois vetores V1 e V2 formados a partir da média da soma dos elementos das respectivas linhas e colunas da Matriz M.

*/

// Arquivos inclusos 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Protótipo
void PreencheExibeMatriz();

// Funções
void PreencheExibeMatriz(){
  int i, j, matriz[5][5];
  float v1[] = {0, 0, 0, 0, 0}, v2[] = {0, 0, 0, 0, 0};

  srand(time(NULL));
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      matriz[i][j] = 1 + rand() % 9;
      printf("\t%i", matriz[i][j]);
      v1[i] += matriz[i][j];
    }
    printf("\n");
  }

  for(j = 0; j < 5; j++){
    for(i = 0; i < 5; i++){
      v2[j] += matriz[i][j];
    }
  }

  for (i = 0; i < 5; i++){
    printf("V1: %.2f", v1[i]/5);
    printf("\tV2: %.2f\n", v2[i]/5);
  }
}

int main(void) {
  PreencheExibeMatriz();
  return 0;
}