
#include <stdio.h>

int main() {
    float homem, mulher;
    float soma1 = 0, soma2 = 0;
    float mediaGeral, mediaHomem, mediaMulher;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a altura do homem %d: ", i);
        scanf("%f", &homem);

        soma1 += homem;
    }

    for (int j = 1; j <= 5; j++) {
        printf("Digite a altura da mulher %d: ", j);
        scanf("%f", &mulher);

        soma2 += mulher;
    }

    mediaHomem = soma1 / 5.0;
    mediaMulher = soma2 / 5.0;
    mediaGeral = (soma1 + soma2) / 10.0;

    printf("\nMedia dos homens: %.2f\n", mediaHomem);
    printf("Media das mulheres: %.2f\n", mediaMulher);
    printf("Media geral: %.2f\n", mediaGeral);

    return 0;
}

