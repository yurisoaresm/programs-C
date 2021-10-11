/*
Escrever um algoritmo que testa a senha do usuário.
Será uma senha:
-> FORTE: Se a senha for impar e não multipla de 13;
-> Caso contrário: FRACA
OBS: Aceitar somente valores de 4 digitos e não repetidos.
- Exemplo: 2427, d1 = 2, d2 = 4, d3 = 2, d4 = 7
*/
#include <stdio.h>

int main(void) {
	int senha, d1, d2, d3, d4;
	printf("Entre com um número de 4 dígitos (sem repetir): ");
	scanf("%i", &senha);
	if (senha <= 999 || senha > 9999)
		printf("Erro: a senha deve possuir 4 dígitos.\n");
	else{
		d1 = senha / 1000; 							// 2427 / 1000 = 2
		d2 = senha % 1000 / 100; 				// 2427 % 1000 = 427 / 100 = 4 
		d3 = senha % 1000 % 100 / 10; 	// 2427 % 1000 = 427 % 100 = 27 / 10 = 2
		d4 = senha % 1000 % 100 % 10; 	// 2427 % 1000 = 427 % 100 = 27 % 10 = 7
		if ((d1 != d2 && d1 != d3 && d1 != d4) && (d2 != d3 && d2 != d4) && (d3 != d4)){
			if (senha % 2 != 0 && senha % 13 != 0)
				printf("Senha: forte.");
			else 
				printf("Senha: fraca.");
		}
		else 
		printf("Erro: Senha não pode ter números repetidos");
	}
  return 0;
}