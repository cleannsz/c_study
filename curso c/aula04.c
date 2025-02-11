#include <stdio.h>

int main() {

    int nota1, nota2, nota3;
    int media;

    printf("--- Calcular media---");

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media das notas são: %d", media);
}