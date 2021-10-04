#include<stdio.h>
#include <Windows.h>

#define SIZE 100
int main(int argc, char const *argv[]){
    SetConsoleOutputCP(65001);
    char string[SIZE];
    int i, quantidade = 0;
    printf("Digite uma frase abaixo:\n");
    scanf("\n%[^\n]", string);

    while (string[i] != '\0'){
        if (string[i] == 'U' && string[i+1] == 'V' && string[i+2] == 'V')
            quantidade++;
        i++;
    }
    if (quantidade == 0)
        printf("Os caracteres UVV não estão consecutivamente no vetor.");
    else if (quantidade == 1)
        printf("Os caracteres UVV aparecem consecutivamente %i vez no vetor.", quantidade);
    else
        printf("Os caracteres UVV aparecem consecutivamente %i vezes no vetor.", quantidade);
    return 0;
}