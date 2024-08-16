#include <stdio.h>

/*
9 - Considerando o sistema de avaliação das médias colocado a seguir, faça um programa em C que avalie a
média de um aluno, o seu conceito correspondente e escreva a mensagem: “APROVADO" se o conceito for
A, B, ou C e “REPROVADO" se o conceito for D ou E.
*/


int main(void) {
  
    float media;
    char conceito;

    printf("Digite a média do aluno: ");
    scanf("%f", &media);

    if (media >= 9.0) {
      conceito = 'A';
    } 
    
    else if (media >= 7.5) {
      conceito = 'B';
    } 
    
    else if (media >= 6.0) {
      conceito = 'C';
    } 
      
    else if (media >= 4.0) {
      conceito = 'D';
    } 
      
    else {
      conceito = 'E';
    }

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
      printf("Aprovado\n");
    }

    else {
      printf("Reprovado\n");
    }

    return 0;
}
