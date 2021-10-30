#include <stdio.h>
/* 
 * Conjunção (E / AND) -> &&
 * 0 0 - 0 false
 * 1 0 - 0 false
 * 0 1 - 0 false
 * 1 1 - 1 true
 * 
 * Disjunção (OU / OR) -> ||
 * 0 0 - 0 false
 * 1 0 - 1 true
 * 0 1 - 1 true
 * 1 1 - 1 true
 */ 
int main(void){
  int a = 5, b = 5, c = 8;

  printf("%d\n", a == b);
  printf("%d\n", a != b);
  printf("%d\n", a == c);
  printf("%d\n", a == b && a == c);
  printf("%d\n", a == b || a == c);
  printf("%d\n", !(a == b));
  printf("%d\n", !(a == b) && a == 10 || c == 8);
  printf("%d\n", !(32 <= a) && a*b == 5*5);
  return 0;
}