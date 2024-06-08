#ifndef CONVERSOES_H
#define CONVERSOES_H

/**
 * @file conversoes.h
 * @brief Declarações de funções para conversão de unidades de temperatura, comprimento e massa.
 */

/**
 * @struct Unidade
 * @brief Estrutura para definir uma unidade de medida e sua função de conversão.
 *
 * A estrutura Unidade contém um tipo de unidade, um nome de unidade e um ponteiro para uma função de conversão associada.
 */
typedef struct {
    char tipo[20];                     /**< Tipo da unidade (e.g., "Temperatura", "Comprimento", "Massa"). */
    char nome[50];                     /**< Nome da unidade (e.g., "Celsius", "Metro", "Quilograma"). */
    float (*funcaoConversao)(float);   /**< Ponteiro para a função de conversão associada. */
} Unidade;

/**
 * @name Funções de Conversão de Temperatura
 * Funções para converter entre diferentes unidades de temperatura.
 * @{
 */

/**
 * @brief Converte temperatura de Celsius para Kelvin.
 * @param tempIni Temperatura em Celsius.
 * @return Temperatura em Kelvin.
 */
float CparaK(float tempIni);

/**
 * @brief Converte temperatura de Kelvin para Celsius.
 * @param tempIni Temperatura em Kelvin.
 * @return Temperatura em Celsius.
 */
float KparaC(float tempIni);

/**
 * @brief Converte temperatura de Celsius para Fahrenheit.
 * @param tempIni Temperatura em Celsius.
 * @return Temperatura em Fahrenheit.
 */
float CparaF(float tempIni);

/**
 * @brief Converte temperatura de Fahrenheit para Celsius.
 * @param tempIni Temperatura em Fahrenheit.
 * @return Temperatura em Celsius.
 */
float FparaC(float tempIni);

/**
 * @brief Converte temperatura de Fahrenheit para Kelvin.
 * @param tempIni Temperatura em Fahrenheit.
 * @return Temperatura em Kelvin.
 */
float FparaK(float tempIni);

/**
 * @brief Converte temperatura de Kelvin para Fahrenheit.
 * @param tempIni Temperatura em Kelvin.
 * @return Temperatura em Fahrenheit.
 */
float KparaF(float tempIni);

/** @} */

/**
 * @name Funções de Conversão de Comprimento
 * Funções para converter entre diferentes unidades de comprimento.
 * @{
 */

/**
 * @brief Converte comprimento de Quilômetros para Metros.
 * @param medida Comprimento em Quilômetros.
 * @return Comprimento em Metros.
 */
float KmparaM(float medida);

/**
 * @brief Converte comprimento de Quilômetros para Centímetros.
 * @param medida Comprimento em Quilômetros.
 * @return Comprimento em Centímetros.
 */
float KmparaCm(float medida);

/**
 * @brief Converte comprimento de Quilômetros para Milímetros.
 * @param medida Comprimento em Quilômetros.
 * @return Comprimento em Milímetros.
 */
float KmparaMm(float medida);

/**
 * @brief Converte comprimento de Quilômetros para Polegadas.
 * @param medida Comprimento em Quilômetros.
 * @return Comprimento em Polegadas.
 */
float KmparaPol(float medida);

/**
 * @brief Converte comprimento de Quilômetros para Pés.
 * @param medida Comprimento em Quilômetros.
 * @return Comprimento em Pés.
 */
float KmparaPes(float medida);

/**
 * @brief Converte comprimento de Quilômetros para Milhas.
 * @param medida Comprimento em Quilômetros.
 * @return Comprimento em Milhas.
 */
float KmparaMi(float medida);

/**
 * @brief Converte comprimento de Metros para Quilômetros.
 * @param medida Comprimento em Metros.
 * @return Comprimento em Quilômetros.
 */
float MparaKm(float medida);

/**
 * @brief Converte comprimento de Metros para Centímetros.
 * @param medida Comprimento em Metros.
 * @return Comprimento em Centímetros.
 */
float MparaCm(float medida);

/**
 * @brief Converte comprimento de Metros para Milímetros.
 * @param medida Comprimento em Metros.
 * @return Comprimento em Milímetros.
 */
float MparaMm(float medida);

/**
 * @brief Converte comprimento de Metros para Polegadas.
 * @param medida Comprimento em Metros.
 * @return Comprimento em Polegadas.
 */
float MparaPol(float medida);

/**
 * @brief Converte comprimento de Metros para Pés.
 * @param medida Comprimento em Metros.
 * @return Comprimento em Pés.
 */
float MparaPes(float medida);

/**
 * @brief Converte comprimento de Metros para Milhas.
 * @param medida Comprimento em Metros.
 * @return Comprimento em Milhas.
 */
float MparaMi(float medida);

/** @} */

/**
 * @name Funções de Conversão de Massa
 * Funções para converter entre diferentes unidades de massa.
 * @{
 */

/**
 * @brief Converte massa de Quilogramas para Gramas.
 * @param kg Massa em Quilogramas.
 * @return Massa em Gramas.
 */
double kg_para_g(double kg);

/**
 * @brief Converte massa de Quilogramas para Toneladas Longas.
 * @param kg Massa em Quilogramas.
 * @return Massa em Toneladas Longas.
 */
double kg_para_tol(double kg);

/**
 * @brief Converte massa de Quilogramas para Onças.
 * @param kg Massa em Quilogramas.
 * @return Massa em Onças.
 */
double kg_para_oz(double kg);

/**
 * @brief Converte massa de Quilogramas para Libras.
 * @param kg Massa em Quilogramas.
 * @return Massa em Libras.
 */
double kg_para_lb(double kg);

/**
 * @brief Converte massa de Gramas para Quilogramas.
 * @param g Massa em Gramas.
 * @return Massa em Quilogramas.
 */
double g_para_kg(double g);

/**
 * @brief Converte massa de Toneladas Longas para Quilogramas.
 * @param tol Massa em Toneladas Longas.
 * @return Massa em Quilogramas.
 */
double tol_para_kg(double tol);

/**
 * @brief Converte massa de Onças para Quilogramas.
 * @param oz Massa em Onças.
 * @return Massa em Quilogramas.
 */
double oz_para_kg(double oz);

/**
 * @brief Converte massa de Libras para Quilogramas.
 * @param lb Massa em Libras.
 * @return Massa em Quilogramas.
 */
double lb_para_kg(double lb);

/** @} */

/**
 * @name Funções de Conversão de Toneladas
 * Funções para converter entre diferentes unidades de toneladas.
 * @{
 */

/**
 * @brief Converte massa de Toneladas para Quilogramas.
 * @param ton Massa em Toneladas.
 * @return Massa em Quilogramas.
 */
double ton_para_kg(double ton);

/**
 * @brief Converte massa de Toneladas para Onças.
 * @param ton Massa em Toneladas.
 * @return Massa em Onças.
 */
double ton_para_oz(double ton);

/**
 * @brief Converte massa de Toneladas para Libras.
 * @param ton Massa em Toneladas.
 * @return Massa em Libras.
 */
double ton_para_lb(double ton);

/**
 * @brief Converte massa de Quilogramas para Toneladas.
 * @param kg Massa em Quilogramas.
 * @return Massa em Toneladas.
 */
double kg_para_ton(double kg);

/**
 * @brief Converte massa de Onças para Toneladas.
 * @param oz Massa em Onças.
 * @return Massa em Toneladas.
 */
double oz_para_ton(double oz);

/**
 * @brief Converte massa de Libras para Toneladas.
 * @param lb Massa em Libras.
 * @return Massa em Toneladas.
 */
double lb_para_ton(double lb);

/** @} */

#endif // CONVERSOES_H
