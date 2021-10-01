/*
Escrever um algoritmo que faça a modelagem de uma Tabela (ACADEMIA):
-> COLUNA 0: MATRÍCULA
-> COLUNA 1: MASSA
-> COLUNA 2: ALTURA

Ler e preencher os dados dos alunos. Após isso, fazer:

-> Exibir na tela: MATRÍCULAS + Quantidade de alunos saudáveis por IMC.
IMC [18.5, 25.0] = MASSA / (ALTURA*ALTURA)
IMC = acadmia[i][1] / pow(academia[i][2]), 2) 
*/
#include <stdio.h>
#include <math.h>
#define LINHAS 1000 // ALUNOS
#define COLUNAS 3   // DADOS
int main(void) {
  float academia[LINHAS][COLUNAS];
	int i, j;
	for(i = 0; i < LINHAS; i++){
		printf("ALUNO %i:", i + 1);
		for(j = 0; j < COLUNAS; j++){
			if (j == 0)
				printf("Matrícula: ");
			else if (j == 1)
				printf("Massa: ");
			else if (j == 2)
				printf("Altura: ");
			scanf("%f", &academia[i][j]);
		}
		

  return 0;
}