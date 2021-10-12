/*
Descobrir a senha da porta mágica, de 1 a 100. Com isso:

-> O guerreiro tem 7 chances antes da morte;
-> O oráculo diz uma DICA; se o número escolhido pelo guerreiro é:

    -> Maior que o Segredo da porta ou 
    -> Menor que o Segredo da porta.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
	int Segredo, opcao, chances, chute;
	srand (time(NULL));
	do{
		Segredo = rand() % 100 + 1;
		printf("MENU DO JOGO: \n");
		printf("Escolha: 1 (Jogar) ou 0 (Sair): ");
		printf("Sua opção: ");
		scanf("%i", &opcao);
		if (opcao == 0)
			printf("\nFIM DO JOGO. \n");
		else if (opcao != 1)
			printf("Erro de opção. Escolha de novo.\n\n");
		else{
			chances = 0;
			while (chances < 7){
				printf("%i° chance: escolha um número de 1 e 100: ", chances + 1);
				scanf("%i", &chute);
				if (chute < 1 || chute > 100)
					printf("Eu disse um número de 1 a 100.\n\n");
				else if (chute == Segredo){
					printf("Você acertou a Senha da Porta Mágica. Parabéns!\n\n");
					chances = 8;
				} else{
					if (chute < Segredo){
						printf("Esse número é MENOR que o Segredo da Porta.\n\n");
						chances++;
					} else{
						printf("Esse número é MAIOR que o Segredo da Porta.\n\n");
						chances++;
					}
				}
			}
			if (chances == 7){
				printf("Suas chances acabaram. Morra, infeliz!\n");
				printf("A Senha era %i \n\n", Segredo);
			} 
		}
	} while(opcao != 0);
	return 0;
}
