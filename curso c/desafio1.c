#include <stdio.h>

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
    int pontos_carta1 = 0, pontos_carta2 = 0;

    printf("Digite o estado da carta 1: ");
    scanf("%29s", carta1.estado);
    printf("Digite o código da carta 1: ");
    scanf("%9s", carta1.codigo);
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

    printf("Digite o estado da carta 2: ");
    scanf("%29s", carta2.estado);
    printf("Digite o código da carta 2: ");
    scanf("%9s", carta2.codigo);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%29s", carta2.nome);
    printf("Digite a população da carta 2: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área da carta 2: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    printf("\n=== X1 ENTRE AS CARTAS ===\n");

    if (carta1.populacao > carta2.populacao) {
        printf("Vitória em População: %s\n", carta1.nome);
        pontos_carta1++;
    } else {
        printf("Vitória em População: %s\n", carta2.nome);
        pontos_carta2++;
    }

    if (carta1.densidade_populacional > carta2.densidade_populacional) {
        printf("Vitória em Densidade Populacional: %s\n", carta1.nome);
        pontos_carta1++;
    } else {
        printf("Vitória em Densidade Populacional: %s\n", carta2.nome);
        pontos_carta2++;
    }

    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("Vitória em PIB per capita: %s\n", carta1.nome);
        pontos_carta1++;
    } else {
        printf("Vitória em PIB per capita: %s\n", carta2.nome);
        pontos_carta2++;
    }

    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("Vitória em Pontos Turísticos: %s\n", carta1.nome);
        pontos_carta1++;
    } else {
        printf("Vitória em Pontos Turísticos: %s\n", carta2.nome);
        pontos_carta2++;
    }

    printf("\n=== RESULTADO FINAL ===\n");
    if (pontos_carta1 > pontos_carta2) {
        printf("%s venceu o X1 por %d a %d!\n", carta1.nome, pontos_carta1, pontos_carta2);
    } else if (pontos_carta2 > pontos_carta1) {
        printf("%s venceu o X1 por %d a %d!\n", carta2.nome, pontos_carta2, pontos_carta1);
    } else {
        printf("Empate! Ambas as cartas terminaram com %d pontos.\n", pontos_carta1);
    }

    return 0;
}
