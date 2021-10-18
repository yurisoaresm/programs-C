//Exibir na tela a posição e a soma dos termos menores que betha^2.

#include<stdio.h>

#define SIZE 100
#define BETHA 7.54
int main(int argc, char const *argv[]){
    int vetor[SIZE];
    int i, somaElem = 0;
    
    for(i = 0; i < SIZE; i++){
        printf("Digite %iº número: ", i + 1);
        scanf("%i", &vetor[i]);
        while (vetor[i] < 0){
            printf("ERRO: o número deve ser positivo. Digite novamente: ");
            scanf("%i", &vetor[i]);
        }
    }
    
    printf("\nNúmeros menores que BETHA^2: ");
    for(i = 0; i < SIZE; i++){
        if (vetor[i] < BETHA*BETHA){
            printf("\n%i (posição %i) ", vetor[i], i + 1);
            somaElem += vetor[i];
        }
    }
    printf("\nSoma desses números: %i", somaElem);
    return 0;
}