#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 10
#define C 3

int main(void) {
  int i, j, num, matriz[L][C]; // coluna 0 = cara, coluna 1 = coroa, coluna 3 = desvio
  int count = 1, desvioMaior = -999999999;
  srand(time(NULL));

  for(i = 0; i < L; i++){ 
    for(j = 0; j < C; j++){
      matriz[i][j] = 0;
    }
  }

  while (count <= 1000){
    for (i = 0; i < L; i++ ){ 
      num = rand() % 2;
      if (num == 0){
        matriz[i][0]++;
      }
      else  
        matriz[i][1]++;
    }
    count++;
  }

  for(i = 0; i < L; i++){ 
    matriz[i][2] = matriz[i][0] - 500;
    if (matriz[i][2] < 0)
      matriz[i][2] = matriz[i][2]*(-1);

    if (matriz[i][2] > desvioMaior)
      desvioMaior = matriz[i][2];
  }

  printf("\tCARA\tCOROA\tDESVIO\n");
  for(i = 0; i < L; i++){ 
    for(j = 0; j < C; j++){
      printf("\t%i", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}