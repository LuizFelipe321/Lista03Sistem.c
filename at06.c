#include <stdio.h>

int main() {
    double salario = 0;
    int anos_estudo = 0;
    
    // Variáveis para acumular os totais e contagens
    double soma_salario = 0;
    int soma_anos_estudo = 0;
    int total_habitantes = 0;
    
    double maior_salario = 0;
    int pessoas_salario_ate_5k = 0;
    int pessoas_estudo_15_ou_mais = 0;

    printf("--- Pesquisa de Habitantes: Cidade Melhor de Minas ---\n");
    printf("(Para encerrar o programa, digite um salario negativo)\n\n");

    while (1) {
        printf("Digite o salario do habitante: R$ ");
        scanf("%lf", &salario);

        // Critério de parada: salário negativo
        if (salario < 0) {
            break;
        }

        printf("Digite a quantidade de anos de estudo: ");
        scanf("%d", &anos_estudo);
        printf("--------------------------------------------------\n");

        // Atualiza os acumuladores gerais
        soma_salario += salario;
        soma_anos_estudo += anos_estudo;
        total_habitantes++;

        // 3. Verifica o maior salário
        if (salario > maior_salario) {
            maior_salario = salario;
        }

        // 4. Conta pessoas com salário até R$ 5000,00
        if (salario <= 5000.00) {
            pessoas_salario_ate_5k++;
        }

        // 5. Conta pessoas com 15 ou mais anos de estudo
        if (anos_estudo >= 15) {
            pessoas_estudo_15_ou_mais++;
        }
    }

    // Exibe os resultados apenas se houver pelo menos um habitante cadastrado
    if (total_habitantes > 0) {
        double media_salario = soma_salario / total_habitantes;
        double media_anos_estudo = (double)soma_anos_estudo / total_habitantes;
        double perc_salario_5k = ((double)pessoas_salario_ate_5k / total_habitantes) * 100;
        double perc_estudo_15 = ((double)pessoas_estudo_15_ou_mais / total_habitantes) * 100;

        printf("\n========= RESULTADO DA PESQUISA =========\n");
        printf("1. Media do salario da populacao: R$ %.2f\n", media_salario);
        printf("2. Media de anos de estudo: %.1f anos\n", media_anos_estudo);
        printf("3. Maior salario encontrado: R$ %.2f\n", maior_salario);
        printf("4. Percentual de pessoas com salario ate R$5000,00: %.2f%%\n", perc_salario_5k);
        printf("5. Percentual de pessoas con 15 ou mais anos de estudo: %.2f%%\n", perc_estudo_15);
        printf("=========================================\n");
    } else {
        printf("\nNenhum dado valido foi inserido.\n");
    }

    return 0;
}
