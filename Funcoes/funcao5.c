// BACK END
#include <stdio.h>

// Protótipos:
float Calcular_IMC(float M, float A);
float Calcular_RCQ(float MC, float MQ);

// Funções
float Calcular_IMC(float M, float A){
  // M: massa
  // A: altura
  return M / (A * A);
}

float Calcular_RCQ(float MC, float MQ){
  // MC: medida cintura
  // MQ: medida quadril 
  // RCQ: relação cintura-quadril
  return MC / MQ * 100;
}

// FRONT END
int main(void) {
  float M, A, MC, MQ;
  int MENU = 1;
  do{
    printf("MENU: \n");
    printf("Escolha 1: Calcular IMC / RCQ\n");
    printf("Escolha 0: sair\n");
    printf("Sua escolha: "); scanf("%i", &MENU);
    if (MENU == 0)
      break;
    else {
      while (1){
      printf("Massa:"); scanf("%f", &M);
      printf("Altura:"); scanf("%f", &A);
      printf("Medida cintura:"); scanf("%f", &MC);
      printf("Medida quadril:"); scanf("%f", &MQ);
      if (M > 0 && A > 0 && MC > 0 && MQ > 0)
        break;
      else
        printf("Escolha novamente.\n");
      }
      printf("Seu IMC: %.1f\n", Calcular_IMC(M, A));
      printf("Seu RCQ: %.1f\n", Calcular_RCQ(MC, MQ));
    }
  } while(MENU);
  return 0;
}