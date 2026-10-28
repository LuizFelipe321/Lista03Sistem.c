#include <stdio.h>

int main() {
    int numero;
    long long fatorial = 1; // Usamos long long porque o fatorial cresce muito rápido

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else if (numero == 0) {
        printf("O fatorial de 0 eh: 1\n");
    } else {
        // Multiplica o resultado por todos os números de 1 até o número digitado
        for (int i = 1; i <= numero; i++) {
            fatorial = fatorial * i;
        }
        printf("O fatorial de %d e: %lld\n", numero, fatorial);
    }

    return 0;
}
