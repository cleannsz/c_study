#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMin = 1000;

    printf("Coloque a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Coloque a umidade: \n");
    scanf("%f", &umidade);

    printf("Digite o estoque; \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("Temperatura alta! \n");
    }
    else {
        printf("Temperatura dentro dos parametros!\n");
    }

    if(umidade > 50){
        printf("Umidade elevada!\n");
    }
    else{
        printf("Umidade esta toleravel\n");
    }

    if(estoque < estoqueMin){
        printf("Estoque abaixo do minimo\n");
    }
    else {
        printf("Estoque normal\n");
    }
}