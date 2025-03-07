#include <stdio.h>

int main() {
    char Carta01[4] = "A01";
    char Estado[20] = "Sao Paulo";
    char Cidade[20] = "Mauá";
    int Populacao = 4181610;
    int Pontos_turisticos = 40;
    float area_km2 = 61.937;
    float Pib = 15.287;

    printf("Carta01: %s\n", Carta01);
    scanf("%s", Carta01);
    printf("Estado: %s\n", Estado);
    scanf("%s", Estado);
    printf("Cidade: %s\n", Cidade);
    scanf("%s", Cidade);
    printf("Populacao: %d\n", Populacao);
    scanf("%d", &Populacao);
    printf("Pontos turísticos: %d\n", Pontos_turisticos);
    scanf("%d", &Pontos_turisticos);
    printf("Área em km²: %.3f\n", area_km2);
    scanf("%f", &area_km2);
    printf("Pib: %.3f\n", Pib);
    scanf("%f", &Pib);
    printf("\n");

    
    char Carta02[4] = "B02";
    char Estado2[20] = "Bahia";
    char Cidade2[20] = "Salvador";
    int Populacao2 = 2418000;
    int Pontos_turisticos2 = 58;
    float area_km22 = 693.80;
    float Pib2 = 62.953;

    printf("Carta02: %s\n", Carta02);
    scanf("%s", Carta02);
    printf("Estado2: %s\n", Estado2);
    scanf("%s", Estado2);
    printf("Cidade2: %s\n", Cidade2);
    scanf("%s", Cidade2);
    printf("Populacao2: %d\n", Populacao2);
    scanf("%d", &Populacao2);
    printf("Pontos turísticos2: %d\n", Pontos_turisticos2);
    scanf("%d", &Pontos_turisticos2);
    printf("Área em km²2: %.3f\n", area_km22);
    scanf("%f", &area_km22);
    printf("Pib: %.3f\n", Pib2);
    scanf("%f", &Pib2);
    

    return 0;
}