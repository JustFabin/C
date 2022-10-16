#include <stdio.h>

int main()
{
  int a, b, c, d, e, f;
  printf("Insira 6 valores: \n");
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
  printf("\nValores inseridos: %d,%d,%d,%d,%d,%d.\n", a,b,c,d,e,f);
  printf("\nValores inversos: %d,%d,%d,%d,%d,%d.\n", f,e,d,c,b,a);
  return 0;
}
