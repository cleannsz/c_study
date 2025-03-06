#include <stdio.h>

int main(){

    int opcao;

    printf("Escolha uma opção:\n");
    printf("Opção 1 - VER O SALDO\n");
    printf("Opção 2 - FAZER DEPOSITO\n");
    printf("Opção 3 - FAZER SAQUE\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("SEU SALDO É DE R$1.000,00\n");
        break;
    case 2:
        printf("DEPÓSITO REALIZADO COM SUCESSO!\n");
        break;
    case 3:
        printf("SAQUE REALIZADO COM SUCESSO!\n");
        break;
    default:
        printf("OPÇÃO INVALIDA!");
        break;
    }

}