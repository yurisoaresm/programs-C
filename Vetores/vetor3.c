/*
RELATÓRIO:
LETRA A: Quantidade Absolutos + Relativos (%)
APROVADOS (A):    [7.0, 10.0]
PROVA FINAL (PF): [3.0, 7.0[
REPROVADAS (R):   [0.0, 3.0[
*/
#include <stdio.h>
#define TAMANHO 6 // ALUNOS (ESTÁTICAS): 100
int main(void) {
  float semestral[TAMANHO];
	int i = 0;                                  // VALOR INICIAL
	int A = 0, PF = 0, R = 0;
	while (i < TAMANHO){                        // VALOR FINAL
		printf("Nota [0, 10] do aluno %i: ", i + 1);
		scanf("%f", &semestral[i]);
		// tratamento de erro
		if (semestral[i] < 0 || semestral[i] > 10)
			printf("ERRO: Digitação. Escolha de novo.\n");
		else{
			if (semestral[i] >= 7.0) // APROVADOS
				A++;
			else if (semestral[i] >= 3.0) // PROVA FINAL
				PF++;
			else // REPROVADAS
				R++;
			i++;
		}	
	}
	printf("RELATÓRIO:\n");
	printf("APROVADOS: %i = %.1f%% \n", A, A*100.0/TAMANHO);
    printf("PROVA FINAL: %i = %.1f%% \n", PF, PF*100.0/TAMANHO);
	printf("REPROVADOS: %i = %.1f%% \n", R, R*100.0/TAMANHO);
	return 0;
}