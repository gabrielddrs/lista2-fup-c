#include <stdio.h>

/*
11 - Numa loja de eletrodomésticos, as compras têm um preço à vista, ou acréscimo de 10% para pagamentos
em 2 vezes, ou ainda, acréscimo de 20% para pagamento em 3 vezes. Desenvolva um programa em C que
peça para o usuário entrar com o valor da compra a vista e o número de parcelas desejada (1, 2 ou 3). Para
parcelas acima de 3, considerar pagamento em 3 vezes, e para parcelas inferiores a 1, considerar à vista. Ao
final, o programa deverá imprimir o número de parcelas, o valor de cada parcela considerando as informações
acima e o valor total a ser pago.
*/

int main() {
  
    float valor_compra, valor_total, valor_parcela;
    int parcelas;

    printf("Digite o valor da compra à vista:\n");
    scanf("%f", &valor_compra);

    printf("Digite o número de parcelas desejado (1, 2 ou 3):\n");
    scanf("%d", &parcelas);

    if (parcelas < 1) {
      parcelas = 1;
      valor_total = valor_compra;
    } 
    
    else if (parcelas == 1) {
      valor_total = valor_compra;
    } 
    
    else if (parcelas == 2) {
      valor_total = valor_compra * 1.10; 
    } 
    
    else if (parcelas == 3) {
      valor_total = valor_compra * 1.20; 
    } 
    
    else {
      parcelas = 3;
      valor_total = valor_compra * 1.20;
    };

    valor_parcela = valor_total / parcelas;

    printf("Número de parcelas: %d\n", parcelas);
    printf("Valor de cada parcela: R$ %.2f\n", valor_parcela);
    printf("Valor total a ser pago: R$ %.2f\n", valor_total);

    return 0;
}
