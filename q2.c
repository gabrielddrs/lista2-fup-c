#include <stdio.h>

/*
2 - Faça um programa em C que receba o valor do salário de uma pessoa e o valor de um financiamento
pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá
escrever “Financiamento concedido"; senão, o programa deverá solicitar o salário de seu cônjuge e caso o
financiamento seja menor ou igual a 5 vezes a soma dos dois salários, o programa deverá escrever
“Financiamento concedido" e, caso contrário, escreverá “Financiamento Negado". Independente de conceder
ou não o financiamento, o programa escreverá depois a frase “Obrigado por nos consultar."
*/

int main(void) {

  float salario, salario_conjuge, financiamento;

  printf("Qual o seu salário?\n");
  scanf("%f", &salario);

  printf("Qual o valor do financiamento desejado?\n");
  scanf("%f", &financiamento);

  if (financiamento <= 5 * salario) {
    printf("Parabéns!!!\n");
    printf("Financiamento concedido.\n");
  } 
  else {
    printf("Qual o salário do seu conjuge?\n");
    scanf("%f", &salario_conjuge);

    if (financiamento <= 5 * (salario + salario_conjuge)) {
      printf("Parabéns!!!\n");
      printf("Financiamento concedido.\n");
    }

    else {
      printf("Financiamento negado.\n");
    };
  };

  printf("Obrigado por nos consultar.\n");

  return 0;
}