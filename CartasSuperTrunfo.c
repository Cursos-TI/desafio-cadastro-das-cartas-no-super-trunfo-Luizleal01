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

    return 0;
}