#include <stdio.h>
#include "conversoes.h"
#include "validacao.h"

// Function prototypes
void exibirMenu();
void menuTemperatura();
void menuComprimento();
void menuMassa();
void menuTonelada();
void salvarResultado(const char *conversao, float valor, float resultado);
void mostrarHistorico();
int obterOpcaoValida(int min, int max);
float obterValorFloat();

void exibirMenu() {
    printf("Escolha a conversao desejada:\n");
    printf("1. Conversoes de Temperatura\n");
    printf("2. Conversoes de Comprimento\n");
    printf("3. Conversoes de Massa\n");
    printf("4. Conversoes de Tonelada\n");
    printf("5. Mostrar Historico de Conversoes\n");
    printf("0. Sair\n");
}

void menuTemperatura() {
    printf("Escolha a conversao de temperatura:\n");
    printf("1. Celsius para Kelvin\n");
    printf("2. Kelvin para Celsius\n");
    printf("3. Celsius para Fahrenheit\n");
    printf("4. Fahrenheit para Celsius\n");
    printf("5. Fahrenheit para Kelvin\n");
    printf("6. Kelvin para Fahrenheit\n");
    printf("0. Voltar\n");
}

void menuComprimento() {
    printf("Escolha a conversao de comprimento:\n");
    printf("1. Km para Metros\n");
    printf("2. Km para Cm\n");
    printf("3. Km para Mm\n");
    printf("4. Km para Polegadas\n");
    printf("5. Km para Pes\n");
    printf("6. Km para Milhas\n");
    printf("7. Metros para Km\n");
    printf("8. Metros para Cm\n");
    printf("9. Metros para Mm\n");
    printf("10. Metros para Polegadas\n");
    printf("11. Metros para Pes\n");
    printf("12. Metros para Milhas\n");
    printf("0. Voltar\n");
}

void menuMassa() {
    printf("Escolha a conversao de massa:\n");
    printf("1. Kg para Gramas\n");
    printf("2. Kg para Toneladas Longas\n");
    printf("3. Kg para Oncas\n");
    printf("4. Kg para Libras\n");
    printf("5. Gramas para Kg\n");
    printf("6. Toneladas Longas para Kg\n");
    printf("7. Oncas para Kg\n");
    printf("8. Libras para Kg\n");
    printf("0. Voltar\n");
}

void menuTonelada() {
    printf("Escolha a conversao de tonelada:\n");
    printf("1. Toneladas para Kg\n");
    printf("2. Toneladas para Oncas\n");
    printf("3. Toneladas para Libras\n");
    printf("4. Kg para Toneladas\n");
    printf("5. Oncas para Toneladas\n");
    printf("6. Libras para Toneladas\n");
    printf("0. Voltar\n");
}

void salvarResultado(const char *conversao, float valor, float resultado) {
    FILE *file = fopen("C:\\conversoes.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    fprintf(file, "Conversao: %s | Valor: %.2f | Resultado: %.2f\n", conversao, valor, resultado);
    fclose(file);
}

void mostrarHistorico() {
    char linha[256];
    FILE *file = fopen("C:\\conversoes.txt", "r");
    if (file == NULL) {
        printf("Nao foi possivel abrir o arquivo de historico.\n");
        return;
    }

    printf("\nHistorico de Conversoes:\n");
    while (fgets(linha, sizeof(linha), file)) {
        printf("%s", linha);
    }
    fclose(file);
    printf("\n");
}

int main() {
    int opcao, subOpcao;
    float valor, resultado;
    const char *tipoConversao;

    while (1) {
        exibirMenu();
        opcao = obterOpcaoValida(0, 5);

        if (opcao == 0) {
            break;
        }

        switch (opcao) {
            case 1:
                menuTemperatura();
                subOpcao = obterOpcaoValida(0, 6);
                if (subOpcao == 0) break;
                valor = obterValorFloat();
                switch (subOpcao) {
                    case 1: resultado = CparaK(valor); tipoConversao = "Celsius para Kelvin"; break;
                    case 2: resultado = KparaC(valor); tipoConversao = "Kelvin para Celsius"; break;
                    case 3: resultado = CparaF(valor); tipoConversao = "Celsius para Fahrenheit"; break;
                    case 4: resultado = FparaC(valor); tipoConversao = "Fahrenheit para Celsius"; break;
                    case 5: resultado = FparaK(valor); tipoConversao = "Fahrenheit para Kelvin"; break;
                    case 6: resultado = KparaF(valor); tipoConversao = "Kelvin para Fahrenheit"; break;
                    default: printf("Opcao invalida!\n"); continue;
                }
                printf("Resultado: %.2f\n", resultado);
                salvarResultado(tipoConversao, valor, resultado);
                break;

            case 2:
                menuComprimento();
                subOpcao = obterOpcaoValida(0, 12);
                if (subOpcao == 0) break;
                valor = obterValorFloat();
                switch (subOpcao) {
                    case 1: resultado = KmparaM(valor); tipoConversao = "Km para Metros"; break;
                    case 2: resultado = KmparaCm(valor); tipoConversao = "Km para Cm"; break;
                    case 3: resultado = KmparaMm(valor); tipoConversao = "Km para Mm"; break;
                    case 4: resultado = KmparaPol(valor); tipoConversao = "Km para Polegadas"; break;
                    case 5: resultado = KmparaPes(valor); tipoConversao = "Km para Pes"; break;
                    case 6: resultado = KmparaMi(valor); tipoConversao = "Km para Milhas"; break;
                    case 7: resultado = MparaKm(valor); tipoConversao = "Metros para Km"; break;
                    case 8: resultado = MparaCm(valor); tipoConversao = "Metros para Cm"; break;
                    case 9: resultado = MparaMm(valor); tipoConversao = "Metros para Mm"; break;
                    case 10: resultado = MparaPol(valor); tipoConversao = "Metros para Polegadas"; break;
                    case 11: resultado = MparaPes(valor); tipoConversao = "Metros para Pes"; break;
                    case 12: resultado = MparaMi(valor); tipoConversao = "Metros para Milhas"; break;
                    default: printf("Opcao invalida!\n"); continue;
                }
                printf("Resultado: %.2f\n", resultado);
                salvarResultado(tipoConversao, valor, resultado);
                break;

            case 3:
                menuMassa();
                subOpcao = obterOpcaoValida(0, 8);
                if (subOpcao == 0) break;
                valor = obterValorFloat();
                switch (subOpcao) {
                    case 1: resultado = kg_para_g(valor); tipoConversao = "Kg para Gramas"; break;
                    case 2: resultado = kg_para_tol(valor); tipoConversao = "Kg para Toneladas Longas"; break;
                    case 3: resultado = kg_para_oz(valor); tipoConversao = "Kg para Oncas"; break;
                    case 4: resultado = kg_para_lb(valor); tipoConversao = "Kg para Libras"; break;
                    case 5: resultado = g_para_kg(valor); tipoConversao = "Gramas para Kg"; break;
                    case 6: resultado = tol_para_kg(valor); tipoConversao = "Toneladas Longas para Kg"; break;
                    case 7: resultado = oz_para_kg(valor); tipoConversao = "Oncas para Kg"; break;
                    case 8: resultado = lb_para_kg(valor); tipoConversao = "Libras para Kg"; break;
                    default: printf("Opcao invalida!\n"); continue;
                }
                printf("Resultado: %.2f\n", resultado);
                salvarResultado(tipoConversao, valor, resultado);
                break;

            case 4:
                menuTonelada();
                subOpcao = obterOpcaoValida(0, 6);
                if (subOpcao == 0) break;
                valor = obterValorFloat();
                switch (subOpcao) {
                    case 1: resultado = ton_para_kg(valor); tipoConversao = "Toneladas para Kg"; break;
                    case 2: resultado = ton_para_oz(valor); tipoConversao = "Toneladas para Oncas"; break;
                    case 3: resultado = ton_para_lb(valor); tipoConversao = "Toneladas para Libras"; break;
                    case 4: resultado = kg_para_ton(valor); tipoConversao = "Kg para Toneladas"; break;
                    case 5: resultado = oz_para_ton(valor); tipoConversao = "Oncas para Toneladas"; break;
                    case 6: resultado = lb_para_ton(valor); tipoConversao = "Libras para Toneladas"; break;
                    default: printf("Opcao invalida!\n"); continue;
                }
                printf("Resultado: %.2f\n", resultado);
                salvarResultado(tipoConversao, valor, resultado);
                break;

            case 5:
                mostrarHistorico();
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }
    }

    return 0;
}
