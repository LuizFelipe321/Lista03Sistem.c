/*Escreva um algoritmo que declare um número fixo entre 1 e 20 e peça para o usuário adivinhar
qual é. A cada palpite o programa diz se o número foi mais alto ou mais baixo que o número
correto. Utilize a estrutura e repetição do-while.*/

#include <stdio.h>
#define N 10
    int main(){
        int valor;
        if(valor >= 0){
            do{
                printf("Adivinhe um numero de 1 a 20: \n");
                scanf("%d", &valor);

                if (valor < N){
                    printf("Valor Inferior a N\n");
                }

                else if(valor > N){
                    printf("Valor superior a N\n");
                } else {
                    printf("\nPARABENS VOCE ACERTOU!!!");
                }

            }while(valor != N);

            return 0;
        }
    }

