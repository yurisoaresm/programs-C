#include <stdio.h>
#include <Windows.h>;
#define T 3
int main(void) {
	SetConsoleOutputCP(65001);
 	int vetor[T], i;
	printf("Digite 10 números inteiros positivos.\n");
	for (i = 0; i < T; i++){
		printf("%i°: ", i +1);
		scanf("%i", &vetor[i]);
	}
	printf("\nNúmeros digitados: ");
	for (i = 0; i < T; i++){
		printf("%i ", vetor[i]);
	}
	// MÚLTIPLOS DE 3
	printf("\nMúltiplos de 3: ");
	for (i = 0; i < T; i++){
		if (vetor[i] % 3 == 0){
			printf("%i ", vetor[i]);
		}
	}
  return 0;
}