#include <stdio.h>

/*

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