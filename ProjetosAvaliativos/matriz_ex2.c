#include <stdio.h>
#define T 10

int main(void) {
  int i, j;
  float matriz[T][T], maior = -999999999999999999;

  printf("Digite os elementos da matriz a seguir. (OBS: digite apenas números reais NÃO POSITIVOS)\n\n");
  for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
      if (i >= j){
        printf("Informe o elemento da linha %i, coluna %i: ", i, j);
        scanf("%f", &matriz[i][j]);
        while (matriz[i][j] >= 0){
          printf("ERRO: O número deve ser negativo.\n");
          printf("Informe o elemento da linha %i, coluna %i: ", i, j);
          scanf("%f", &matriz[i][j]);
        }
      }
      else
        matriz[i][j] = 0;

      if (matriz[i][j] > maior)
        maior = matriz[i][j];
		}
	}

  printf("\n MATRIZ:\n");
  for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
				printf("\t%.2f", matriz[i][j]);
		}
    printf("\n");
	}
  printf("O maior elemento da matriz é: %.2f", maior);
  return 0;
}