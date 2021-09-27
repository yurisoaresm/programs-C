#include <stdio.h>
#define LINHAS 4 // LINHAS: 50 ALUNOS 
#define COLUNAS 2 // COLUNAS: 2 VARIÁVEIS: 1º e 2º Bimestres
int main(void) {
  float pauta[LINHAS][COLUNAS]; //Computação Gráfica: pauta[x][y][z]; // TABELA: MATRIZ 50 x 2 = 100 (dados armazenados)
	int i, j;
	float S1 = 0, S2 = 0, M1, M2;
	printf("DADOS DOS ALUNOS: \n");
	for (j = 0; j < COLUNAS; j++){
		printf("NOTAS DO %i BIMESTRE: \n",j + 1);
		for(i = 0; i < LINHAS; i++){
			do{
				printf("Nota [0, 10] do Aluno %i: ", i + 1);
				scanf("%f", &pauta[i][j]);
				if (pauta[i][j] < 0 || pauta[i][j] > 10)
					printf("ERRO: Digitação. Escolha novamente.\n");
			} while (pauta[i][j] < 0 || pauta[i][j] > 10);
			if (j == 0)
				S1 = S1 + pauta[i][j];
			else
				S2 = S2 + pauta[i][j];
		}
	}
	M1 = S1/LINHAS;
	M2 = S2/LINHAS;
	printf("Média do 1º bimestre: %.1f\n", M1);
	printf("Média do 2º bimestre: %.1f\n", M2);
  return 0;
}