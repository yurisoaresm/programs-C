/*
RELATÓRIO:
LETRA B: Quantidade Absolutos + Relativos (%)
de alunos acima (e inclusive) + abaixo 
da média da própria turma.
*/
#include <stdio.h>
#define TAMANHO 6  // ALUNOS (ESTÁTICAS): 100
int main(void) {
  float semestral[TAMANHO], SOMA = 0, MEDIA;
  int i = 0;                               // VALOR INICIAL
  int ACIMA = 0, ABAIXO = 0; 
  while(i < TAMANHO){                      // VALOR FINAL
    printf("Nota [0, 10] do aluno %i: ", i + 1);
    scanf("%f", &semestral[i]);
    // tratamento de erro
    if (semestral[i] < 0 || semestral[i] > 10)
      printf("ERRO: Digitação. Escolha de novo.\n");
    else{
      SOMA += semestral[i];
			i++;
    }
  }
	MEDIA = SOMA/TAMANHO;
	i=0;
	while(i < TAMANHO){
		if (semestral[i] < MEDIA)
			ABAIXO++;
		else
			ACIMA++;
		i++;
	}      
	printf("MÉDIA DA TURMA: %.1f\n", MEDIA);
	printf("Alunos ACIMA da média da turma: %i = %.1f%%\n", ACIMA, ACIMA*100.0/TAMANHO);
	printf("Alunos ABAIXO da média da turma: %i = %.1f%%", ABAIXO, ABAIXO*100.0/TAMANHO);
  
  return 0;
}