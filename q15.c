#include <stdio.h>

/*
15 - Faça um programa em C que leia um número inteiro entre 1 e 12 e imprima o mês correspondente. Caso
seja digitado um valor fora desse intervalo, deverá ser exibida uma mensagem informando que não existe mês
com esse número.
*/

int main(void) {
  
    int mes;

    printf("Digite um número entre 1 e 12:\n");
    scanf("%d", &mes);

    switch(mes) {
      
        case 1:
            printf("Janeiro\n");
            break;
      
        case 2:
            printf("Fevereiro\n");
            break;
      
        case 3:
            printf("Março\n");
            break;
      
        case 4:
            printf("Abril\n");
            break;
      
        case 5:
            printf("Maio\n");
            break;
      
        case 6:
            printf("Junho\n");
            break;
      
        case 7:
            printf("Julho\n");
            break;
      
        case 8:
            printf("Agosto\n");
            break;
      
        case 9:
            printf("Setembro\n");
            break;
      
        case 10:
            printf("Outubro\n");
            break;
      
        case 11:
            printf("Novembro\n");
            break;
      
        case 12:
            printf("Dezembro\n");
            break;
      
        default:
            printf("Mês inválido.\n");
            break;
    };

    return 0;
}
