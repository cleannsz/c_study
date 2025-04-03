#include <stdio.h>

int main() {
    
    printf("Torre vai andar 5 casas para direita neste codigo a seguir: \n");

    for(int i = 0; i <5; i++) {

        printf("Direita\n");

    }
    printf("Bispo vai andar 5 casas na diagonal superior direita neste codigo a seguir: \n");

    for(int i = 0; i <5; i++) {

        printf("Diagona Superior Direita\n");

    }
    printf("Rainha vai andar 8 casas para esquerda neste codigo a seguir: \n");

    for(int i = 0; i <8; i++) {

        printf("Esquerda\n");

    }

    int movimentocompleto = 1;
    printf("Movimento do cavalo em L para direita: \n");

    while (movimentocompleto--)
    {
        for(int i = 0; i<=2; i++){
            printf("Cima");
        }
        printf("Direita");
    }
    
    
}