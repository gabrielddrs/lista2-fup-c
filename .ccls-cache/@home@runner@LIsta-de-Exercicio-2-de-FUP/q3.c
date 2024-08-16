#include <stdio.h>

/*

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
