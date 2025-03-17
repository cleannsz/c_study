#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int numJ, numPC, result;
    char comparacao;

    srand(time(0));
    numPC = rand() % 100 + 1;

    printf("Bem vindo ao jogo Maior, Menor ou Igual! Escolha o tipo de comparação e o seu número.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a sua opção: \n");
    scanf("%c", &comparacao);

    printf("Agora digite o seu número de 0 a 100: \n");
    scanf("%d", &numJ);

    switch (comparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior\n");
        result = numJ > numPC ? 1 : 0;
        printf("O número do computador é: %d e o seu %d\n", numPC, numJ);
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor\n");
        result = numJ < numPC ? 1 : 0;
        printf("O número do computador é: %d e o seu %d\n", numPC, numJ);
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual\n");
        result = numJ == numPC ? 1 : 0;
        printf("O número do computador é: %d e o seu %d\n", numPC, numJ);
        break;
    default:
        printf("Opção Inválida!");
        break;
    }

    if(result == 1){
        printf("Você venceu!");
    }else {
        printf("Você perdeu!");
    }
}