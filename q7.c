#include <stdio.h>

/*
7 - Os funcionários de uma empresa receberam um aumento de salário: Técnicos 50%, Gerentes 30% e demais
20%. Escreva um programa em C que receba como entrada o salário atual e a função, e apresente o novo
salário após o aumento.
*/

int main(void) {

  float salario;
  int cargo;

  printf("Qual o seu salário?\n");
  scanf("%f", &salario);

  printf("Qual o seu cargo?\n");
  printf("1 - Técnico\n");
  printf("2 - Gerente\n");
  printf("3 - Outro\n");
  scanf("%d", &cargo);

  switch(cargo) {
    case 1:
      printf("O seu salário agora será de R$ %.2f\n", salario * 1.5);
      break;

    case 2:
      printf("O seu salário agora será de R$ %.2f\n", salario * 1.3);
      break;
    
    case 3:
      printf("O seu salário agora será de R$ %.2f\n", salario * 1.2);
      break;
    
    default:
      printf("Cargo inválido.\n");
  }
  
  return 0;
}