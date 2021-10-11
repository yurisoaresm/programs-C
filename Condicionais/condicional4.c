/*
Escrever um algoritmo que leia a quantidade de
dinheiro (espécie) e a moeda:
-> REAL (R) ou DOLAR (D) ou EURO (E)
fazendo as conversões entre elas.
SABENDO QUE: R$ 6.17 US$ 1.18 € 1

Transformar entre unidades: REGRA DE 3

DOLAR           REAL
1.18             6.17
quantidade    conversao      

conversao * 1.18 = 6.17 * quantidade
conversao = quantidade * 6.17 / 1.18
conversao = quantidade * 5.22
*/
#include <stdio.h>
#define MINIMO 100.00

int main(void) {
    float quantidade, conversao;
    char moeda;

    printf("Quantidade de dinheiro: ");
    scanf("%f", &quantidade);

    if (quantidade < MINIMO)
        printf("Erro: quantidade minima: %.2f unidades", MINIMO);
    else{
        printf("Escolha (REAL (R) ou DOLAR (D) ou EURO (E)): ");
        scanf("%c", &moeda);

		switch (moeda){
			case 'R': case 'r': 
				conversao = 0.1912 * quantidade;
				printf("DOLAR: US$ %.2f", conversao);
				conversao = quantidade / 6.17;
				printf("EURO : € %.2f", conversao);
			break;

			case 'E': case 'e':
				conversao = quantidade * 6.17;
				printf("REAL: R$ %.2f", conversao);
				conversao = quantidade * 1.18;
				printf("DOLAR: US$ %.2f", conversao);
			break;

			case 'D': case 'd':
				conversao = quantidade / 1.18;
				printf("EURO: € %.2f", conversao);
				conversao = quantidade * 5.22;
				printf("REAL: R$ %.2f", conversao);
			break;
            
			default:
				printf("Moeda incorreta.");
		}
    }
    return 0;
}