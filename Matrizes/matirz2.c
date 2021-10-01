/*
MATRIZ DIAGONAL = i==j
MATRIZ INVERSA DIAGONAL = i + j == T - 1
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define T 4
int main(void) {
  int matriz[T][T]; // MATRIZ DIAGONAL
	int i, j;
	srand(time(NULL));
	for(i = 0; i < T; i++){
		for(j = 0; j < T; j++){
			if (i == j)
				matriz[i][j] = rand() % 90 + 10;
			else 
			matriz[i][j] = 0;
		}
	}
	printf("MATRIZ[%i][%i]:\n", T, T);
	for (i = 0; i < T; i++){
		for(j = 0; j < T; j++){
			printf("\t%i", matriz[i][j]);
		}
		printf("\n");
	}
  return 0;
}