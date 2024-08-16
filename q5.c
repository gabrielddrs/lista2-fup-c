#include <stdio.h>

/*
5 - Faça um programa em C que leia um número inteiro e informe se ele é divisível por 10, por 5, por 2, ou se
não é divisível por nenhum deles.
*/

int main(void) {

  int a;

  printf("Informe um número inteiro:\n");
  scanf("%d", &a);

  if (a % 10 == 0) {
    printf("O número é divisível por 10, 5 e 2.\n");
  }

  else if (a % 5 == 0) {
    printf("O número é divisível por 5.\n");
  }

  else if (a % 2 == 0) {
    printf("O número é divisível por 2.\n");
  }

  else {
    printf("O número não é divisível por 10, 5 ou 2.\n");
  };
  
  return 0;
}