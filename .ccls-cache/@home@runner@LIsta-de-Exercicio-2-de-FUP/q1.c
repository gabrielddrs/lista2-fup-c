#include <stdio.h>

/*

*/

#define ANO_ATUAL 2024

int main(void) {

    float valor_compra;
    int ano_nascimento, idade, numero_sorte;
    int resultado_scanf;

    printf("Qual o valor da compra?\n");
    resultado_scanf = scanf("%f", &valor_compra);
    if (resultado_scanf != 1) {
        printf("Erro ao ler o valor da compra.\n");
        return 1; // Sai do programa com um código de erro
    }

    printf("Qual o seu ano de nascimento?\n");
    resultado_scanf = scanf("%d", &ano_nascimento);
    if (resultado_scanf != 1) {
        printf("Erro ao ler o ano de nascimento.\n");
        return 1; // Sai do programa com um código de erro
    }

    idade = ANO_ATUAL - ano_nascimento;

    if (valor_compra < 500) {
        numero_sorte = 5000 - (int)(valor_compra * idade); // Casting para int

        printf("Obrigado pela preferência!\n");
        printf("Você gastou R$ %.2f\n", valor_compra);
        printf("Seu número da sorte é %d\n", numero_sorte);
    } 
    else if (valor_compra > 500) {
        numero_sorte = 50000 - (int)(valor_compra * idade); // Casting para int

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
