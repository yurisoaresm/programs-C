#include <stdio.h>
#define T 10

int main(void) {
  int i, j;
  float matriz[T][T], maior = -999999999999999999;

  printf("Digite os elementos da matriz a seguir... (OBS: digite somente valores negativos; senão, o programa se reiniciará)\n\n");
  for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
      printf("Elemento da linha %i, coluna %i: ", i, j);
      scanf("%f", &matriz[i][j]);
      if (matriz[i][j] >= 0)
        printf("ERRO: O número deve ser negativo. Reinicie o programa.");
			else if (matriz[i][j] > maior){
          maior = matriz[i][j];
      }
		}
	}

  printf("\n MATRIZ:\n");
  for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			if (i >= j)
				printf("\t%f", matriz[i][j]);
      else 
        printf("\t %f", matriz[i][j] = 0);
		}
    printf("\n");
	}
  printf("O maior valor da matriz é: %f", maior);
  return 0;
}