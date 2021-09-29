/* 
SENHAS DE 3 DÍGITOS
*/

#include <stdio.h>
#include <stdlib.h>
#define CLIENTES 10
#define MAX 999
#define MIN 100
#include <time.h>

int main(void) {
	int senhas[CLIENTES], indice, fracas = 0, fortes = 0, menor = 999999999, maior = -999999999;
	srand(time(NULL));
	for(indice = 0; indice < CLIENTES; indice++){
		// RAND: [MÍN, MÁX]: [100, 999]
		senhas[indice] = rand() % (MAX - MIN - 1) + MIN;
	}
	printf("Sugestão de senhas: \n");
	for (indice = 0; indice < CLIENTES; indice++){
			printf("Senha %i: %i\n", indice + 1, senhas[indice]);
	}
	// Relatório: Informação
	// LETRA A: Senhas fracas e fortes (ímpares E NÃO múltiplas de 17): Absolutos / Relativos (%)
	for (indice = 0; indice < CLIENTES; indice++){
		if (senhas[indice] % 2 != 0 && senhas[indice] % 17 != 0)
			fortes++;
		else
			fracas++;
	}
	printf("\nSenhas Fracas: %i = %.1f %%\n", fracas, fracas*100.0/(fracas + fortes));
	printf("Senhas Fortes: %i = %.1f %%\n", fortes, fortes*100.0/(fracas + fortes));

	// LETRA B: Menor / Maior senha sorteada do vetor
	for (indice = 0; indice < CLIENTES; indice++){
		if (senhas[indice] < menor)
			menor = senhas[indice];
		else if (senhas[indice] > maior)
			maior = senhas[indice];
	}
	printf("\nMaior senha: %i\n", maior);
	printf("Menor senha: %i", menor);
  return 0;
}