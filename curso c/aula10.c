#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, media;

    printf("Gerenciamento de Estudantes\n");
    printf("1. Calcular media\n");
    printf("2. Verificar status\n");
    printf("3. Sair");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
          // Entrada de notas
          printf("Digite a primeira nota: ");
          scanf("%f", &nota1);
          printf("Digite a segunda nota: ");
          scanf("%f", &nota2);
    
          // Cálculo da média
          media = (nota1 + nota2) / 2;
          printf("A média do estudante é: %.2f\n", media);
          break;
        case 2:
          // Determinação do status com base na média
          printf("Digite a média do estudante: ");
          scanf("%f", &media);
    
          if (media >= 7.0) {
            printf("Status: Aprovado\n");
          } else if (media >= 5.0) {
            printf("Status: Recuperação\n");
          } else {
            printf("Status: Reprovado\n");
          }
          break;
        case 3:
          printf("Saindo...\n");
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
      }
   
      return 0;
}