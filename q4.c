#include <stdio.h>

/*
4 - Faça um programa em C que leia dois valores inteiros A e B. Se os valores forem iguais, o programa deverá
somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos deve-se atribuir o
resultado para uma variável C e mostrar seu conteúdo na tela.
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