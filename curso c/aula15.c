#include <stdio.h>

int main() {

    int num;

    do
    {   
        printf("Digite um número par para sair do programa: \n");
        scanf("%d", &num);
        
        if(num % 2 == 0) {
            printf("%d é par! Fim do programa", num);
        }else {
            printf("%d é ímpar!", num);
        }
        
    } while (num % 2 != 0);
    
    return 0;

}