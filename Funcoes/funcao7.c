// BACKEND
#include <stdio.h>
#include <math.h>

// PROTOTIPO
void cubo1(float L, float *area, float *volume);
float cubo2(float L, float *volume);
float cubo3(float L, float *area);

// FUNCOES
void cubo1(float L, float *area, float *volume){

	*area = 6 * pow(L,2);
	*volume = pow(L, 3);
}
float cubo2(float L, float *volume){
 float area;

 area = 6 * pow(L, 2);
 *volume = pow(L, 3);

 return area;
}

float cubo3(float L, float *area){
  *area = pow(L, 2);
  return pow(L, 3);
}

int main(void) {
	float L, area, volume;

	while(1){
		printf("LADO L: "); scanf("%f", &L);
		if (L <= 0){
			printf("ERRO: ESCOLHA NOVAMENTE.\n");
			break;
		}
		else{
			//cubo1(L, &area, &volume);
			//area = cubo2(L, &volume);
			volume = cubo3(L, &area);
			printf("AREA: %f\n", area);
			printf("VOLUME: %f\n", volume);

		}
	}

	return 0;
}