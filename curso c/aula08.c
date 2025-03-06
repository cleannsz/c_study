#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao;
    int numerosecreto, palpite;

    printf("Menu principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10 + 1;
        printf("Advinhe o número secreto de 1 a 10: \n");
        scanf("%d", &palpite);
        if(numerosecreto == palpite){
            printf("Parabéns, você acertou!\n");
        } else{
            printf("Você errou! O número certo era %d\n", numerosecreto);
            }
        break;
    case 2:
        printf("Regras do Jogo:\n");
        printf("1. Escolha uma opção no menu.\n");
        printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
        printf("3. O jogo termina quando você escolhe 'Sair'.\n");
    break;
    case 3:
        printf("Ok... Saindo...\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

}