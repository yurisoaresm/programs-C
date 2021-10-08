// Faça um programa que preencha uma Matriz M (3x2) com valores inteiros aleatórios: 0 ou 1. Crie e exiba na tela a Matriz Trasposta MT (2x3) da Matriz preenchida aleatoriamente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main(int argc, char const *argv[]){
    SetConsoleOutputCP(65001);
    int M[3][2], MT[2][3];
    int i, j, l, c;
    srand(time(NULL));

    for (i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            M[i][j] = rand() % 2;
        }
    }

    printf("Matriz gerada aleatoriamente: \n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            MT[j][i] = M[i][j];
            printf("%i ",M[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz transposta da anterior: \n");
    for (i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%i ",MT[i][j]);
        }
        printf("\n");
    }
    return 0;
}