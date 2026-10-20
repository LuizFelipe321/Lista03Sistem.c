#include <stdio.h>


/*Escreva um programa que recebe um número do usuário e imprime na tela todos os número
de n até 1. Utilize a estrutura de repetição while.*/

int main(){
    int i=1, n;

    printf("Escreva um valor n\n");
    scanf("%d", &n);

    while(n > 0){

        printf("Valor de n: %d\n", n);
        n--;
    }

    return 0;
}
