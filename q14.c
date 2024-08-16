#include <stdio.h>

/*
14 - Faça um programa em C que leia dois números inteiros, e que solicite ao usuário qual a operação deseja
realizar entre esses números. Caso o usuário digitar o caractere “*” será realizada uma multiplicação, caso seja
digitado o caractere “/” será realizada uma divisão, caso seja digitado o caractere “+” será realizado uma
adição, e caso seja digitado o caractere “-“ será realizada uma subtração.
*/

int main() {
  
  int n1, n2;
  char operacao;
  float resultado; 

  printf("Digite o primeiro número inteiro:\n");
  scanf("%d", &n1);

  printf("Digite o segundo número inteiro:\n");
  scanf("%d", &n2);

  printf("Digite a operação desejada (+, -, *, /): ");
  scanf(" %c", &operacao);

  switch (operacao) {
    
    case '+':
      resultado = n1 + n2;
      printf("Resultado da adição: %d\n", (int)resultado);
      break;
      
    case '-':
      resultado = n1 - n2;
      printf("Resultado da subtração: %d\n", (int)resultado);
      break;
      
    case '*':
      resultado = n1 * n2;
      printf("Resultado da multiplicação: %d\n", (int)resultado);
      break;
      
    case '/':
      resultado = n1 / n2;
      printf("Resultado da divisão: %.2f\n", resultado);
      break;
    
    default:
      printf("Operação inválida.\n");
      break;
    }

    return 0;
}
