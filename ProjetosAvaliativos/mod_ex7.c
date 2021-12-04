#include <stdio.h>

int anoBissexto(int ano);

int anoBissexto(int ano){
  if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
    return 1;
  else
    return 0;
}

int main(void) {
  int ano, count = 1;

  while (count <= 100){
    printf("Digite um ano para e veja se é bissexto: ");
    scanf("%i", &ano);
    if (ano < 0)
      printf("ERRO: o ano não pode ser negativo.\n");
    else{
      if(anoBissexto(ano))
        printf("O ano %i É bissexto.\n", ano);
      else
        printf("O ano %i NÃO É bissexto.\n", ano);
      count++;
    }

  }
  
  return 0;
}