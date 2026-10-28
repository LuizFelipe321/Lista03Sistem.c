#include <stdio.h>

int main() {
    int N, copia_N;
    int contador = 0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    
    // Verificação para garantir que o número é positivo
    if (N < 0) {
        printf("Por favor, digite apenas numeros positivos.\n");
    } else {
        // Salvamos uma cópia de N caso precise usar o valor original depois
        copia_N = N; 
        
        // Caso especial se o número digitado for 0
        if (copia_N == 0) {
            contador = 1;
        } else {
            // Loop que divide o número por 10 até ele virar 0
            while (copia_N > 0) {
                copia_N = copia_N / 10; // Remove o último dígito
                contador++;             // Soma 1 na quantidade de dígitos
            }
        }
        
        // Exibe a saída esperada
        printf("%d\n", contador);
    }
    
    return 0;
}
