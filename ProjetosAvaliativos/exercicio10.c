// Exibir na tela a quantidade de vezes que aparece o número 3.

#include<stdio.h>

#define SIZE 100
int main(int argc, char const *argv[]){
    int vetor[SIZE];
    int i, contador = 0;
    
    for(i = 0; i < SIZE; i++){
        printf("Digite %iº número: ", i + 1);
        scanf("%i", &vetor[i]);
        while (vetor[i] < 0){
            printf("ERRO: o número deve ser positivo. Digite novamente: ");
            scanf("%i", &vetor[i]);
        }
    }

    printf("\nQuantidade de vezes que aparece o 3: ");
    for(i = 0; i < SIZE; i++){
        if (vetor[i] == 3)
            contador++;
    }
    if (contador == 1)
        printf("%i vez", contador);
    else
        printf("%i vezes.", contador);
    return 0;
}