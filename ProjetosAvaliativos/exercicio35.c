// Exiba a matrícula dos atletas que ficaram abaixo da META da prova. A META da prova deste ano é 88.7 minutos. Declarar a META como constante com o comando #define.

#include<stdio.h>
#include <Windows.h>

#define SIZE 25000
#define META 88.7
int main(int argc, char const *argv[]){
    SetConsoleOutputCP(65001);
    float tempoCorrida[SIZE];
    int matricula[SIZE], i;

    for (i = 0; i < SIZE; i++){
        printf("Digite o número da matrícula do %iº atleta: ", i + 1);
        scanf("%i", &matricula[i]);
        printf("Digite agora o tempo de corrida do %iº atleta (em minutos): ", i + 1);
        scanf("%f", &tempoCorrida[i]);
    }

    printf("\nAtletas que ficaram ABAIXO da meta (88.7 min) da prova: ");
    for (i = 0; i < SIZE; i++){
        if (tempoCorrida[i] < META)
            printf("\nAtleta: %i", matricula[i]);
    }
    return 0;
}