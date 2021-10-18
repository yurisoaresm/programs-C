// problem: https://www.urionlinejudge.com.br/judge/pt/problems/view/1143

int main(int argc, char const *argv[]){
  int N, i;

  printf("Digite N: ");
  scanf("%i", &N);
  while (N <= 1 || N >= 1000) {
    printf("ERRO: 1 <= N <= 1000. Digite novamente: ");
    scanf("%i", &N);
  } 

  printf("\n");
  for (i = 1; i <= N; i++){
    printf("%i %i %i\n", i, i*i, i*i*i);
  }
  return 0;
}
