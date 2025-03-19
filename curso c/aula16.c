#include <stdio.h>

int main() {

    int num, i;

    printf("Digite um número para saber a tabuada dele: \n");
    scanf("%d", &num);

    for(i = 0; i <=10; i++) {

        printf("%d x %d = %d\n", num, i, num * i);

    }

}