#include <stdio.h>

/*

*/

int main(void) {

  int a, b, c;

  printf("Digite o número A:\n");
  scanf("%d", &a);

  printf("Digite o número B:\n");
  scanf("%d", &b);

  if (a == b) {
    c = a + b;

    printf("%d\n", c);
  }

  else {
    c = a * b;

    printf("%d\n", c);
  }
  
  return 0;
}