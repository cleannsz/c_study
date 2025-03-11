#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJ, escolhaPC;
    srand(time(0));

    printf("Jokenpô\n");
    printf("Escolha uma opção\n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &escolhaJ);

    escolhaPC = rand() % 3 + 1;

    switch (escolhaJ)
    {
    case 1:
        printf("Jogador: PEDRA - \n");
        break;
    case 2:
        printf("Jogador: PAPEL - \n");
        break;
    case 3:
        printf("Jogador: TESOURA - \n");
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    switch (escolhaPC)
    {
    case 1:
        printf("Computador: PEDRA - \n");
        break;
    case 2:
        printf("Computador: PAPEL - \n");
        break;
    case 3:
        printf("Computador: TESOURA - \n");
        break;
    }

    if(escolhaJ == escolhaPC){
        printf("EMPATE ###");
    }else if ((escolhaJ == 1) && (escolhaPC == 3) ||
                (escolhaJ == 2) && (escolhaPC == 1) ||
                (escolhaJ == 3) && (escolhaPC == 2))
    {
        printf("Jogador GANHOU!!!");
    } else{
        printf("Você PERDEU!!!");
    }
}