/*Desenvolva um algoritmo que leia um valor n entre 0 e 9 e escreva na tela a tabuada
correspondente do número. Para o número 4 por exemplo, seria printado:
4 x 0 = 0
4 x 1 = 4
4 x 2 = 8
...
Utilize a estrutura e repetição for*/

#include <stdio.h>

    int main(){
    int n, multiplicacao;

    printf("Digite o valor de n\n");
    scanf("%d", &n);
    if( n > 0 && n < 9){

        for(int i= 0; i <= 9; i++){
        multiplicacao = n * i;

        printf("\nMultiplicacao de %d * %d = %d", n, i, multiplicacao);

        }
        } else{
            printf("Escreva um valor aceitavel entre 0 e 9");
        }

    return 0;
    }
