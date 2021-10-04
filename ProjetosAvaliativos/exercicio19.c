// Exibir os termos (e seus índices) maiores que um valor n (float) escolhido pelo usuário.


#include<stdio.h>
#include <Windows.h>

#define SIZE 100
int main(int argc, char const *argv[]){
    SetConsoleOutputCP(65001);
    int vetor[SIZE], i;
    float n;
    
    for(i = 0; i < SIZE; i++){
        printf("Digite %iº número: ", i + 1);
        scanf("%i", &vetor[i]);
        while (vetor[i] < 0){
            printf("ERRO: o número deve ser positivo. Digite novamente: ");
            scanf("%i", &vetor[i]);
        }
    }
    printf("\nAgora, digite um valor real n: ");
    scanf("%f", &n);

    printf("\nOs números armazenandos no vetor maiores que n são: ");
    for(i = 0; i < SIZE; i++){
        if (vetor[i] > n)
            printf("%i (índice %i) ", vetor[i], i);
    }
    return 0;
}