#include <stdio.h>
#include "validacao.h"
int obterOpcaoValida(int min, int max) {
    int opcao;
    while (1) {
        printf("Opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Por favor, insira um numero.\n");
            while (getchar() != '\n'); // Limpar buffer de entrada
        } else if (opcao < min || opcao > max) {
            printf("Opcao invalida. Por favor, escolha uma opcao entre %d e %d.\n", min, max);
        } else {
            break;
        }
    }
    return opcao;
}

float obterValorFloat() {
    float valor;
    char c;
    while (1) {
        printf("Digite o valor: ");
        if (scanf("%f", &valor) != 1) {
            printf("Entrada invalida. Por favor, insira um valor numerico.\n");
            while ((c = getchar()) != '\n' && c != EOF); // Limpar buffer de entrada
        } else {
            while ((c = getchar()) != '\n' && c != EOF); // Limpar buffer de entrada
            break;
        }
    }
    return valor;
}