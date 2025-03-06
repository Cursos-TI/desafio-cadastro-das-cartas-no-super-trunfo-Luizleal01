#include <stdio.h>

int main() {
    char Carta01[4] = "A01";
    char Estado[10] = "Sao Paulo";
    char Cidade[10] = "Mauá";
    float Populacao = 418161.0;
    int Ponto_turistico = 40;
    float area_km2 = 61.937;
    float Pib = 15.287;

    printf("Carta01: %s\n", Carta01);
    scanf("%s", Carta01);

    printf("Estado: %s\n", Estado); 
    scanf("%s", Estado);

    printf("Cidade: %s\n", Cidade);
    scanf("%s", Cidade);

    printf("Populacao: %.0f\n", Populacao);
    scanf("%f", &Populacao);

    printf("Pontos turísticos: %d\n", Ponto_turistico);
    scanf("%d", &Ponto_turistico); 

    printf("Área em km²: %.3f\n", area_km2);
    scanf("%f", &area_km2); 

    printf("Pib: %.3f\n", Pib);
    scanf("%f", &Pib); 
    
    return 0;
}