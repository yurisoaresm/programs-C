// Exibir na tela os termos (e seus respectivos índices) ÍMPARES e múltiplos de 7.


#include<stdio.h>
#include <Windows.h>

#define SIZE 100
int main(int argc, char const *argv[]){
    SetConsoleOutputCP(65001);
    int vetor[SIZE];
    int i;
    
    for(i = 0; i < SIZE; i++){
        printf("Digite %iº número: ", i + 1);
        scanf("%i", &vetor[i]);
        while (vetor[i] < 0){
            printf("ERRO: o número deve ser positivo. Digite novamente: ");
            scanf("%i", &vetor[i]);
        }
    }

    printf("\nOs números ímpares e múltiplos de 7 armazenados foram:\n");
    for(i = 0; i < SIZE; i++){
        if (vetor[i] % 2 != 0 &&  vetor[i] % 7 == 0)
            printf("%i (índice %i)\n", vetor[i], i);
    }
    return 0;
}
