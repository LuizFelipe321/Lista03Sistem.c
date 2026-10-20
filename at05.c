#include <stdio.h>

/*Escreva um programa que leia a altura de 5 homens e 5 mulheres, e imprima a média de altura
masculina, feminina e geral.*/

    int main(){

    int homem, mulher, soma1=0, soma2=0;
    float mediaGeral, mediaHomem, mediaMulher;

    for(int i=1; i <= 5; i++){
        printf("Altura do homem: %d Quantidade: %d", homem, i);

        soma1 += homem;
        mediaHomem = soma1 / 5;
    }

    for(int j=1; j <= 5; j++){
        printf("Altura da mulher: %d Quantidade: %d", mulher, j);

        soma2 += mulher;
        mediaMulher = soma2 / 5;
    }

    mediaGeral = (soma1 + soma2) / 10;

    printf("Media de homens: %f\n Media de mulheres: %f\n Media Geral: %f\n", mediaHomem, mediaMulher, mediaGeral);

    return 0;

    }
