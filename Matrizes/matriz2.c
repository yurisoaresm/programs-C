/*
	------------- MATRIZ -------------
	Matriz diagonal principal												: i == j
	Matriz inversa diagonal (diagonal secundária)		: i + j == T - 1
	Matriz triangular inferior											: i >= j
	Matriz triangular superior											: i <= j
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define T 4
int main(void) {
	int matriz[T][T]; 
	int i, j;

	srand(time(NULL));

	// Diagonal principal
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			if (i == j)
				matriz[i][j] = rand() % 90 + 10;
			else 
				matriz[i][j] = 0;
		}
	}

	printf("MATRIZ[%i][%i] DIAGONAL PRINCIPAL:\n", T, T);
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			printf("\t%i", matriz[i][j]);
		}
		printf("\n");
	}

	// Diagonal secundária
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			if (i + j == T - 1)
				matriz[i][j] = rand() % 90 + 10;
			else 
				matriz[i][j] = 0;
		}
	}

	printf("MATRIZ[%i][%i] DIAGONAL SECUNDÁRIA:\n", T, T);
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			printf("\t%i", matriz[i][j]);
		}
		printf("\n");
	}

	// Triangular inferior
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			if (i >= j)
				matriz[i][j] = rand() % 90 + 10;
			else 
				matriz[i][j] = 0;
		}
	}

	printf("MATRIZ[%i][%i] TRIANGULAR INFERIOR:\n", T, T);
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			printf("\t%i", matriz[i][j]);
		}
		printf("\n");
	}

	// Triangular superior
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			if (i <= j)
				matriz[i][j] = rand() % 90 + 10;
			else 
				matriz[i][j] = 0;
		}
	}

	printf("MATRIZ[%i][%i] TRIANGULAR SUPERIOR:\n", T, T);
	for (i = 0; i < T; i++){
		for (j = 0; j < T; j++){
			printf("\t%i", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}