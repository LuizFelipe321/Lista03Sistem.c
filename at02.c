/*Escreva um programa que recebe um número do usuário e imprime na tela todos os número
de n até 1. Utilize a estrutura de repetição for.*/

    #include <stdio.h>

    int main(){

    int n;

    printf("Escreva o valor n:\n");
    scanf("%d", &n);

    for(int i=1; n>0; n--){

      printf("Valor de n: %d\n", n);
    }

    return 0;
    }
