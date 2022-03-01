/*
  Algoritmo que lê e-mail.
  De forma simples, é valido um EMAIL que:
  REGRA 1: conter o caractere '@';
  REGRA 2: conter no mínimo um caractere '.' após o caractere '@';

  EXEMPLO:
  F U L A N O @ A B C .   B   R   \0
  0 1 2 3 4 5 6 7 8 9 10  11  12  13
              ?
              index_arroba
                      ?
                      index_ponto

*/
#include <stdio.h>
#define TAM 100

int main(void) {
  char EMAIL[TAM];
  int i, index_arroba, index_ponto, opcao;

  while (1){
    // RESETAR AS VARIÁVEIS:
    i = 0, index_arroba = -1;
    printf("MENU:\n");
    printf("[1]: Validar email ou [0]: SAIR\n");
    scanf("%i", &opcao);
    if (opcao == 0)
      break;
    printf("INSIRA EMAIL AQUI: ");
    scanf("\n%[^\n]", EMAIL);

    // CARACTERE DE CONTROLE: '\0' = FINAL DA STRING
    while(EMAIL[i] != '\0'){    
      if(EMAIL[i] == '@'){
        index_arroba = i;          // REFERÊNCIA QL: i
        break;
      }
      i++;
    }
    if (index_arroba == -1)
      printf("EMAIL Invalido: Não conté o @!\n");
    else{
      index_ponto = index_arroba;  // REFERÊNCIA index_ponto: index_arroba
      i = index_ponto + 1;

      // PESQUISA SEQUENCIAL DE DADOS
      while(EMAIL[i] != '\0'){
        if(EMAIL[i] == '.'){
            index_ponto = i;
            break;
        }
        i++;
      }
      
      if(index_ponto != index_arroba)
        printf("ESTE É UM EMAIL VALIDO!");
      else
        printf("EMAIL Invalido!");
    }
  }
  return 0;
}