#include <stdio.h>

/*
1 - Uma pessoa, ao realizar uma compra em um supermercado, recebe um número da sorte para concorrer a um
prêmio no final do mês. O cálculo do número da sorte é feito da seguinte forma:
• Caso a compra seja inferior a R$500,00 o número da sorte = 5000 - Valor a compra * Idade
• Caso a compra seja superior a R$500,00 o número da sorte = 50000 - Valor a compra * Idade
• Caso a compra seja igual a R$500,00 o número da sorte = Idade * Idade
Faça um programa em C que receba o Valor Total da Compra e o Ano de Nascimento e informe ao usuário
qual foi seu número da sorte.
*/

#define ANO_ATUAL 2024

int main(void) {

    float valor_compra;
    int ano_nascimento, idade, numero_sorte;

    printf("Qual o valor da compra?\n");
    scanf("%f", &valor_compra);

    printf("Qual o seu ano de nascimento?\n");
    scanf("%d", &ano_nascimento);

    idade = ANO_ATUAL - ano_nascimento;

    if (valor_compra < 500) {
        numero_sorte = (5000 - valor_compra) * idade; // Casting para int

        printf("Obrigado pela preferência!\n");
        printf("Você gastou R$ %.2f\n", valor_compra);
        printf("Seu número da sorte é %d\n", numero_sorte);
    } 
    else if (valor_compra > 500) {
        numero_sorte = (50000 - valor_compra) * idade; // Casting para int

        printf("Obrigado pela preferência!\n");
        printf("Você gastou R$ %.2f\n", valor_compra);
        printf("Seu número da sorte é %d\n", numero_sorte);
    } 
    else {
        numero_sorte = idade * idade;

        printf("Obrigado pela preferência!\n");
        printf("Você gastou R$ %.2f\n", valor_compra);
        printf("Seu número da sorte é %d\n", numero_sorte);
    }

    return 0;
}
