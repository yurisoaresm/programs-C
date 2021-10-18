// árvore de natal

int main(int argc, char const *argv[]){
  int N, i;

  do{
    printf("Digite um inteiro ímpar e entre 1 e 100: ");
    scanf("%i", &N);
    printf("\n");
  } while (N <= 2 || N >= 100 && N % 2 == 0);

  for (i = 1; i <= N; i+2){
    
  }
  printf("*");

  return 0;
}