#include <stdio.h>

/*
13 - Sabe-se que a direção de uma determinada escolinha faz a distribuição de seus alunos de acordo com as
idades dos mesmos. Dessa forma, os alunos são distribuídos nas seguintes turmas de acordo com a
classificação a seguir:

Desenvolva um programa em C que leia a idade de uma única criança e informe em qual turma a mesma irá
ter aulas. O programa deve se preocupar em responder para o usuário que a escolinha não possui turmas para
a criança caso a mesma tenha menos que 4 anos ou mais que 10 anos.
*/

int main() {

    int idade;

    printf("Digite a idade da criança:\n");
    scanf("%d", &idade);

    if (idade >= 4 && idade <= 5) {
      printf("A criança irá para a Turma A.\n");
    } 

    else if (idade >= 6 && idade <= 8) {
      printf("A criança irá para a Turma B.\n");
    } 

    else if (idade >= 9 && idade <= 10) {
      printf("A criança irá para a Turma C.\n");
    } 

    else {
      printf("A escolinha não possui turmas para a idade informada.\n");
    }

    return 0;
}
