#include <stdio.h>

/*

*/

int main(void) {

  float salario;

  printf("Qual o seu salário?\n");
  scanf("%f", &salario);

  if (salario <= 600) {
    printf("Você está isento do desconto referente ao INSS.\n");
  }

  else if (salario > 600 && salario <= 1200) {
    printf("O desconto referente ao INSS será de 20%%.\n");
    printf("Salário agora será de R$ %.2f\n", salario * 0.8);
  }

  else if (salario > 1200 && salario <= 2000) {
    printf("O desconto referente ao INSS será de 25%%.\n");
    printf("Salário agora será de R$ %.2f\n", salario * 0.75);
  }

  else {
    printf("O desconto referente ao INSS será de 30%%.\n");
    printf("Salário agora será de R$ %.2f\n", salario * 0.7);
  }
  
  return 0;
}