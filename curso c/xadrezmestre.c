#include <stdio.h>

void moverTorre(int casas) {
    printf("Torre vai andar %d casas para direita neste código a seguir:\n", casas);
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
}

void moverBispo(int casas) {
    printf("Bispo vai andar %d casas na diagonal superior direita neste código a seguir:\n", casas);
    for (int i = 0; i < casas; i++) {
        printf("Diagonal Superior Direita\n");
    }
}

void moverRainha(int casas) {
    printf("Rainha vai andar %d casas para esquerda neste código a seguir:\n", casas);
    for (int i = 0; i < casas; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);

    int movimentocompleto = 1;
    printf("Movimento do cavalo em L para direita:\n");

    while (movimentocompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    
    return 0;
}
