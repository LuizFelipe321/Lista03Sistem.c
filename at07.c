#include <stdio.h>

int main() {
    int total_numeros = 5; // Define quantos números serão lidos
    int numero;
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;

    printf("Digite %d numeros separados por espaco: ", total_numeros);

    // O laço for repete a leitura a quantidade de vezes definida
    for (int i = 0; i < total_numeros; i++) {
        scanf("%d", &numero); // Lê um número por vez da linha

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}
