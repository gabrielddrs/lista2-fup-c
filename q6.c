#include <stdio.h>

/*
6 - O IMC - Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação
sobre a condição de peso de uma pessoa adulta. Entetanto, a NHANES II survey (National Health and Nutrition
Examination Survey) indica a utilização de um critério diferenciado para homens e mulheres. A fórmula é
IMC = peso / ( altura )2. Elabore um programa em C que leia o peso, a altura de um adulto e o sexo (M ou F),
e mostre sua condição (junto com o IMC calculado) de acordo com os critérios da NHANES II
*/

int main(void) {

    float peso, altura, imc;
    char sexo;

    printf("Qual o seu sexo? (M ou F)\n");
    scanf(" %c", &sexo);

    printf("Qual a sua altura? (em metros)\n");
    scanf("%f", &altura);

    printf("Qual o seu peso? (em kg)\n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (sexo == 'M' || sexo == 'm') { 

        if (imc < 19.1) {
            printf("Você está abaixo do peso\n");
        } 
        else if (imc >= 19.1 && imc <= 25.8) {
          printf("Você está com peso normal\n");
        } 
        else if (imc > 25.8 && imc <= 27.3) {
          printf("Você está marginalmente acima do peso\n");
        } 
        else if (imc > 27.3 && imc <= 32.3) {
          printf("Você está acima do peso ideal\n");
        } 
        else {
          printf("Você está obeso\n");
        }

    } 
    
    else if (sexo == 'F' || sexo == 'f') {

        if (imc < 20.7) {
          printf("Você está abaixo do peso\n");
        } 
          
        else if (imc >= 20.7 && imc <= 26.4) {
          printf("Você está com peso normal\n");
        } 
          
        else if (imc > 26.4 && imc <= 27.8) {
          printf("Você está marginalmente acima do peso\n");
        } 
        
        else if (imc > 27.8 && imc <= 31.1) {
          printf("Você está acima do peso ideal\n");
        } 
        else {
          printf("Você está obesa\n");
        }

    } 
    
    else {
        printf("Sexo inválido. Por favor, digite 'M' ou 'F'.\n");
    }

    return 0;
}
