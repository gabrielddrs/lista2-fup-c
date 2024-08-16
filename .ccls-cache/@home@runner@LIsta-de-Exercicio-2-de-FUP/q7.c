#include <stdio.h>

/*

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