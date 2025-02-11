#include <stdio.h>

int main() {

    int n1, n2;
    int soma, subtracao, multiplicaçao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicaçao = n1 * n2;
    divisao = n1 / n2;

    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", subtracao);
    printf("A multiplicação dos números é: %d\n", multiplicaçao);
    printf(" A divisão dos números é: %d", divisao);

}
