#include <stdio.h>

int main() {

    int idade;
    float altura;
    char nome[20];

    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Digite sua altura: ");
    scanf(" %f", &altura);
    printf("Digite seu nome: ");
    scanf(" %s", &nome);
    printf("Sua idade é %d, sua altura é %f\n", idade, altura, nome);
    printf("Seu nome é %s\n", nome);
}