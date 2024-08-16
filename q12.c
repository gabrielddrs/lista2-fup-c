#include <stdio.h>

/*
12 - Faça um programa em C para calcular a conta final de um hóspede de um hotel fictício, considerando que:
• Devem ser lidos o tipo do apartamento utilizado (A, B, C ou D), o número de diárias utilizadas pelo
hóspede e o valor do consumo interno do hóspede;
• O valor da diária é determinado pela seguinte tabela:

• O valor total das diárias é calculado pela multiplicação do número de diárias utilizadas pelo valor da
diária;
• O subtotal é calculado pela soma do valor total das diárias e o valor do consumo interno;
• O valor da taxa de serviço equivale a 10% do subtotal;
• O total geral resulta da soma do subtotal com a taxa de serviço.
Escreva a conta final contendo: o tipo do apartamento, o número de diárias utilizadas, o valor unitário da
diária, o valor total das diárias, o valor do consumo interno, o subtotal, o valor da taxa de serviço e o total
geral.
*/

int main() {
    
    char tipo_apartamento;
    int numero_diarias;
    float consumo_interno;
    float valor_diaria, valor_total_diarias, subtotal, taxa_servico, total_geral;

    printf("Digite o tipo de apartamento (A, B, C ou D): ");
    scanf(" %c", &tipo_apartamento);

    printf("Digite o número de diárias utilizadas: ");
    scanf("%d", &numero_diarias);

    printf("Digite o valor do consumo interno: ");
    scanf("%f", &consumo_interno);

    switch (tipo_apartamento) {
        
        case 'A':
            valor_diaria = 150.00;
            break;
        
        case 'B':
            valor_diaria = 100.00;
            break;
        
        case 'C':
            valor_diaria = 75.00;
            break;
        
        case 'D':
            valor_diaria = 175.00;
            break;
        
        default:
            printf("Tipo de apartamento inválido.\n");
            break;
    }

    valor_total_diarias = valor_diaria * numero_diarias;
    subtotal = valor_total_diarias + consumo_interno;
    taxa_servico = 0.10 * subtotal;
    total_geral = subtotal + taxa_servico;

    printf("\nConta Final:\n");
    printf("=====================================================\n");
    printf("Tipo de Apartamento: %c\n", tipo_apartamento);
    printf("Número de Diárias: %d\n", numero_diarias);
    printf("Valor Unitário da Diária: R$ %.2f\n", valor_diaria);
    printf("Valor Total das Diárias: R$ %.2f\n", valor_total_diarias);
    printf("Valor do Consumo Interno: R$ %.2f\n", consumo_interno);
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Taxa de Serviço (10%%): R$ %.2f\n", taxa_servico);
    printf("Total Geral: R$ %.2f\n", total_geral);
    printf("=====================================================\n");

    return 0;
}
