#include <stdio.h>

/*
3. Em cada apartamento do edifício X só pode existir no máximo um animal de estimação (um gato, um
papagaio ou um cão). Neste edifício, cada apartamento paga R$350,00 de condomínio mais uma taxa extra
caso possua um animal de estimação. A taxa é cobrada da seguinte forma: R$50,00 se tiver um cão, R$12,00
se tiver um papagaio e R$30,00 se tiver um gato. Caso o apartamento não tenha nenhum animal de estimação
tem uma redução de R$20,00 no valor de seu condomínio. Considerando essas informações, desenvolva um
programa em C que pergunte o tipo de animal de estimação que o morador possui e ao final exiba o valor que
este deve pagar de condomínio. Faça um menu de opções para que o morador possa selecionar qual tipo de
animal de estimação (por exemplo, 1 - Gato, 2 - Papagaio, 3 - Cão, 4 ou qualquer outro valor - Nenhum).
*/

int main() {
  
    int opcao;
    float valor_condominio = 350.00; 
    float valor_total;

    printf("Escolha o tipo de animal de estimação:\n");
    printf("1 - Gato\n");
    printf("2 - Papagaio\n");
    printf("3 - Cão\n");
    printf("4 - Nenhum\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
      
      case 1:
        valor_total = valor_condominio + 30.00; 
        break;
      
      case 2:
        valor_total = valor_condominio + 12.00; 
        break;
      
      case 3:
        valor_total = valor_condominio + 50.00; 
        break;
      
      case 4:
        valor_total = valor_condominio - 20.00; 
        break;
      
      default:
        valor_total = valor_condominio - 20.00; 
        break;
    }

    printf("Valor total do condomínio: R$ %.2f\n", valor_total);

    return 0;
}
