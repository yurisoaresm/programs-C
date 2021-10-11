/*
SIMPLES: Escrever um algoritmo em C que leia de uma mercadoria:
-> Preço (R$)
-> Quantidade (Unidades)
-> Reajuste (%): Desconto
exiba o total a pagar. 
Entretanto, se (IF: simples) o total a pagar for superior a R$ 1000.00 
dê um desconto ao cliente.
*/
#include <stdio.h>

int main(void) {
    float preco, reajuste, TB, TL;
    int quantidade;

    printf("Preço: R$ ");
    scanf("%f", &preco);
    printf("Quantidade (Unid.): ");
    scanf("%i", &quantidade);

    TB = preco * quantidade;
    printf("Total a pagar (sem desconto): R$ %.2f\n", TB);
    if (TB > 1000.00)
    {
        printf("Reajuste (%%):");
        scanf("%f", &reajuste);
        TL = TB * (1 - reajuste / 100);
        printf("Total a pagar (com desconto): R$ %.2f\n", TL);
    }
    return 0;
}