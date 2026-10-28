#include <stdio.h>

int main() {
    int total_numeros = 5; // Define quantos números serão lidos
    int numero;
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;

    printf("Digite %d numeros separados por espaco: ", total_numeros);

    for (int i = 0; i < total_numeros; i++) {
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    // Calcula os percentuais convertendo temporariamente para float
    float perc_positivos = ((float)positivos / total_numeros) * 100;
    float perc_negativos = ((float)negativos / total_numeros) * 100;
    float perc_zeros = ((float)zeros / total_numeros) * 100;

    // Exibe a quantidade e o percentual de cada um
    printf("Positivos: %d (%.2f%%)\n", positivos, perc_positivos);
    printf("Negativos: %d (%.2f%%)\n", negativos, perc_negativos);
    printf("Zeros: %d (%.2f%%)\n", zeros, perc_zeros);

    return 0;
}
