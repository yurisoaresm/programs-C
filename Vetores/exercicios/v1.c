#include <stdio.h>
#include <Windows.h>;
#define T 3		// Definir tamanho do conjunto (vetor)
int main(void) {
	SetConsoleOutputCP(65001);
 	int vetor[T], i, somaMult = 0, quantidade = 0;
	printf("Digite 10 números inteiros positivos.\n");
	for (i = 0; i < T; i++){
		printf("%i°: ", i +1);
		scanf("%i", &vetor[i]);
	}
	printf("\nNúmeros digitados: ");
	for (i = 0; i < T; i++){
		printf("%i ", vetor[i]);
	}
	// Múltiplos de 3
	printf("\n\nMúltiplos de 3: ");
	for (i = 0; i < T; i++){
		if (vetor[i] % 3 == 0)
			printf("%i (índice %i) ", vetor[i], i);
	}
	// Ímpares e múltiplos de 7
	printf("\n\nÍmpares e múltiplos de 7: ");
	for (i = 0; i < T; i++){
		if (vetor[i] % 2 != 0 && vetor[i] % 7 == 0)
			printf("%i (índice %i) ", vetor[i], i);
	}
	// Soma dos múltiplos de 3 e 4
	printf("\n\nSoma dos múltiplos de 3 e 4: ");
	for (i = 0; i < T; i++){
		if (vetor[i] % 3 == 0 && vetor[i] % 4 == 0)
			somaMult += vetor[i];
	}
	printf("%i ", somaMult);
	// Média da soma dos termos múltiplos de 2 e 5
	somaMult = 0;
	printf("\n\nMédia da soma dos múltiplos de 2 e 5: ");
	for (i = 0; i < T; i++){
		if (vetor[i] % 2 == 0 && vetor[i] % 5 == 0){
			somaMult += vetor[i];
			quantidade++;
		}
	}
	printf("%i ", somaMult/quantidade);
  return 0;
}