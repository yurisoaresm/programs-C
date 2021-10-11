#include <stdio.h>
#include <Windows.h>;
#define T 10		// Definir tamanho do conjunto (vetor)
int main(void) {
	SetConsoleOutputCP(65001);
 	int vetor[T], i, somaMult = 0, soma = 0, quantidade = 0, n;

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
	printf("%i ", (float)somaMult/quantidade);
	
	// Soma termos múltiplos de 3 ou 5
	somaMult = 0;
	printf("\n\nSoma termos múltiplos de 3 ou 5: ");
	for (i = 0; i < T; i++){
		if (vetor[i] % 3 == 0 || vetor[i] % 5 == 0){
			somaMult += vetor[i];
		}
	}
	printf("%i", somaMult);

	// Exibir na tela os termos maiores que a média da soma dos termos que estão nos índices 0 e 4
	printf("\n\nNúmero(s) maiore(s) que a média da soma dos termos no índice 0 (%i) e 4 (%i): ", vetor[0], vetor[4]);
	for (i = 0; i < T; i++){
		if (vetor[i] > (vetor[0] + vetor[4])/2.0)
			printf("%i ", vetor[i]);
	}
	printf("\nMédia da soma: %.1f",(vetor[0] + vetor[4])/2.0);

	// Exibir a soma dos termos ímpares imediatamente sucessores dos termos armazenados
	printf("\n\nSoma dos termos ímpares imediatamente sucessores dos números armazenados: ");
	for (i = 0; i < T; i++){
		if ((vetor[i] + 1) % 2 != 0)
			soma += vetor[i] + 1;
	}
	printf("%i", soma);

	// Exibir a quantidade de termos maiores que a média da soma do 2°, 4° e 7° termo do vetor
	printf("\n\nNúmero(s) maiore(s) que a média da soma do 2°, 4° e 7° termo: ");
	for (i = 0; i < T; i++){
		if (vetor[i] > (vetor[1] + vetor[3] + vetor[6])/3.0)
			printf("%i ", vetor[i]);
	}
	printf("\nMédia da soma: %.1f", (vetor[1] + vetor[3] + vetor[6])/3.0);

	// Exibir a média dos termos múltiplos de um n (n >= 2) escolhido pelo usuário
	printf("\n\nMédia dos múltiplos de n (n >= 2): digite o valor de n primeiro: ");
	do{
		scanf("%i", &n);
		if (n < 2)
			printf("ERRO: n não é maior ou igual a 2. Digite novamente: ");	
	} while (n < 2);

	printf("n = %i\n", n);
	somaMult = 0;
	quantidade = 0;
	for (i = 0; i < T; i++){
		if (vetor[i] % n == 0){
			somaMult += vetor[i];
			quantidade++;
		}
	}
	printf("Média dos múltiplos de n: %i", somaMult/quantidade);

	// Exibir na tela a quantidade de vezes que aparece o número 3
	printf("\n\nQuantidade de vezes que aparece o número 3: ");
	quantidade = 0;
	for (i = 0; i < T; i++){
		if (vetor[i] == 3){
			quantidade++;
		}
	}
	printf("%i", quantidade);

	// Exibir a quantidade de vezes que aparece os números 3 e 6 consecutivamente no vetor
	printf("\n\nQuantidade de vezes que aparece o número 3 e 6 consecutivamente: ");
	quantidade = 0;
	for (i = 0; i < T; i++){
		if (vetor[i] == 3 && vetor[i + 1] == 6){
			quantidade++;
		}
	}
	printf("%i", quantidade);
  return 0;
}