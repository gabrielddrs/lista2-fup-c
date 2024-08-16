#include <stdio.h>

/*
8 - Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor de compra for
menor que R$ 20,00; caso contrário, o lucro será de 30%. Elabore um programa em C que leia o valor de
compra do produto e imprima seu valor de venda.
*/

int main(void) {

  float valor_produto;

  printf("Qual o valor do produto?\n");
  scanf("%f", &valor_produto);

  if (valor_produto < 20) {
    printf("O valor de venda deverá ser de R$ %.2f\n", valor_produto * 1.45);
  }

  else {
    printf("O valor de venda deverá ser de R$ %.2f\n", valor_produto * 1.30);
  };
  
  return 0;
}