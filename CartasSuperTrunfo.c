#include <stdio.h>

int main() {
    char Estado[10] = "São Paulo";
    char Carta01[4] = "A01";
    char Cidade[10] = "Mauá";
    float População = 418161.0; 
    int Ponto_turistico = 40;
    float area_km2 = 61.937; 
    float Pib = 15.287;

    printf("Estado: %s\n", Estado);
    printf("Carta01: %s\n", Carta01);
    printf("Cidade: %s\n", Cidade);
    printf("População: %.0f\n", População);
    printf("Pontos turísticos: %d\n", Ponto_turistico);
    printf("Área em km²: %f\n", area_km2); 

    return 0; 
}