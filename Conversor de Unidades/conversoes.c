#include "conversoes.h"

// Funções de conversão de temperatura
float CparaK(float tempIni) {
    return tempIni + 273;
}

float KparaC(float tempIni) {
    return tempIni - 273;
}

float CparaF(float tempIni) {
    return tempIni * 1.8 + 32;
}

float FparaC(float tempIni) {
    return (tempIni - 32) / 1.8;
}

float FparaK(float tempIni) {
    return (tempIni - 273) * 1.8;
}

float KparaF(float tempIni) {
    return (tempIni + 459.67) * 5/9;
}

// Funções de conversão de comprimento
float KmparaM(float medida) {
    return medida * 1000;
}

float KmparaCm(float medida) {
    return medida * 100000;
}

float KmparaMm(float medida) {
    return medida * 1000000;
}

float KmparaPol(float medida) {
    return medida * 39370.0787;
}

float KmparaPes(float medida) {
    return medida * 3280.8399;
}

float KmparaMi(float medida) {
    return medida * 0.621371192;
}

float MparaKm(float medida) {
    return medida / 1000;
}

float MparaCm(float medida) {
    return medida * 100;
}

float MparaMm(float medida) {
    return medida * 1000;
}

float MparaPol(float medida) {
    return medida * 39.3700787;
}

float MparaPes(float medida) {
    return medida * 3.2808399;
}

float MparaMi(float medida) {
    return medida / 1609.3444978926;
}

float CmparaKm(float medida) {
    return medida / 100000;
}

float CmparaM(float medida) {
    return medida / 100;
}

float CmparaMm(float medida) {
    return medida * 10;
}

float CmparaPol(float medida) {
    return medida * 0.39370;
}

float CmparaPes(float medida) {
    return medida * 0.032808399;
}

float CmparaMi(float medida) {
    return medida / 161030.59581321;
}

float MmparaKm(float medida) {
    return medida / 10000000;
}

float MmparaM(float medida) {
    return medida / 1000;
}

float MmparaCm(float medida) {
    return medida / 10;
}

float MmparaPol(float medida) {
    return medida * 0.0393700787;
}

float MmparaPes(float medida) {
    return medida * 0.0032808399;
}

float MmparaMi(float medida) {
    return medida / 1612903.2258065;
}

float PolparaKm(float medida) {
    return medida / 39370.07874016;
}

float PolparaM(float medida) {
    return medida * 0.0254;
}

float PolparaCm(float medida) {
    return medida * 2.54;
}

float PolparaMm(float medida) {
    return medida * 25.4;
}

float PolparaPes(float medida) {
    return medida * 0.0833333333;
}

float PolparaMi(float medida) {
    return medida / 63360;
}

float PesparaKm(float medida) {
    return medida * 0.0003048;
}

float PesparaM(float medida) {
    return medida * 0.3048;
}

float PesparaCm(float medida) {
    return medida * 30.48;
}

float PesparaMm(float medida) {
    return medida * 304.8;
}

float PesparaPol(float medida) {
    return medida * 12;
}

float PesparaMi(float medida) {
    return medida * 0.000189393939;
}

float MiparaKm(float medida) {
    return medida * 1.609344;
}

float MiparaM(float medida) {
    return medida * 1609.344;
}

float MiparaCm(float medida) {
    return medida * 160934.4;
}

float MiparaPol(float medida) {
    return medida * 63360;
}

float MiparaPes(float medida) {
    return medida * 5280;
}


// Funções de conversão de kg para outras unidades
double kg_para_g(double kg) {
    return kg * 1000;
}

double kg_para_tol(double kg) {
    return kg * 85.7353;
}

double kg_para_oz(double kg) {
    return kg * 35.274;
}

double kg_para_lb(double kg) {
    return kg * 2.20462;
}

// Funções de conversão de outras unidades para kg
double g_para_kg(double g) {
    return g / 1000;
}

double tol_para_kg(double tol) {
    return tol / 85.7353;
}

double oz_para_kg(double oz) {
    return oz / 35.274;
}

double lb_para_kg(double lb) {
    return lb / 2.20462;
}

// Funções de conversão de toneladas para outras unidades
double ton_para_kg(double ton) {
    return ton * 1000;
}

double ton_para_oz(double ton) {
    return ton * 35274;
}

double ton_para_lb(double ton) {
    return ton * 2204.62;
}

// Funções de conversão de outras unidades para toneladas
double kg_para_ton(double kg) {
    return kg / 1000;
}

double oz_para_ton(double oz) {
    return oz / 35274;
}

double lb_para_ton(double lb) {
    return lb / 2204.62;
}

