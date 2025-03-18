#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Carta {
    char estado[30];
    char codigo[10];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;
    int escolha1, escolha2;
    int pontos_jogador = 0, pontos_computador = 0;

    printf("Digite o estado da carta 1: ");
    scanf("%29s", carta1.estado);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%29s", carta1.nome);
    printf("Digite a população da carta 1: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área da carta 1: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    srand(time(NULL));
    carta2.populacao = rand() % 5000000 + 100000;
    carta2.area = (rand() % 1000000) / 10.0 + 5000.0;
    carta2.pib = (rand() % 500000) / 10.0 + 5000.0;
    carta2.pontos_turisticos = rand() % 50 + 1;
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    
    printf("\n=== Escolha duas categorias para comparar ===\n");
    printf("1 - População\n2 - Densidade Populacional\n3 - PIB per Capita\n4 - Pontos Turísticos\n");
    
    printf("Escolha a primeira categoria: ");
    scanf("%d", &escolha1);
    printf("Escolha a segunda categoria: ");
    scanf("%d", &escolha2);

    for (int i = 0; i < 2; i++) {
        int escolha = (i == 0) ? escolha1 : escolha2;
        switch (escolha) {
            case 1:
                if (carta1.populacao > carta2.populacao) pontos_jogador++;
                else if (carta1.populacao < carta2.populacao) pontos_computador++;
                break;
            case 2:
                if (carta1.densidade_populacional > carta2.densidade_populacional) pontos_jogador++;
                else if (carta1.densidade_populacional < carta2.densidade_populacional) pontos_computador++;
                break;
            case 3:
                if (carta1.pib_per_capita > carta2.pib_per_capita) pontos_jogador++;
                else if (carta1.pib_per_capita < carta2.pib_per_capita) pontos_computador++;
                break;
            case 4:
                if (carta1.pontos_turisticos > carta2.pontos_turisticos) pontos_jogador++;
                else if (carta1.pontos_turisticos < carta2.pontos_turisticos) pontos_computador++;
                break;
            default:
                printf("Escolha inválida!\n");
                i--; // Volta uma iteração para o jogador escolher novamente
                break;
        }
    }
    
    printf("\n=== RESULTADO FINAL ===\n");
    if (pontos_jogador == 2) {
        printf("Você venceu as duas comparações! Vitória total!\n");
    } else if (pontos_jogador == 1) {
        printf("Cada um venceu uma comparação. Empate!\n");
    } else {
        printf("O computador venceu as duas comparações. Derrota!\n");
    }

    return 0;
}
