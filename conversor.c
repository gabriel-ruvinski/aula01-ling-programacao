#include <stdio.h>

int main() {
    float cel, fah;
    float metros, km;
    float quilos, libras;

    printf("-== Programa de conversor ==-\n");

    // Celsius -> Fahrenheit
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &cel);
    fah = (cel * 9 / 5) + 32;
    printf("%.2f oC = %.2f oF\n", cel, fah);

    // Metros -> quilômetros
    printf("\nDigite a distancia em metros: ");
    scanf("%f", &metros);
    km = metros / 1000;
    printf("%.2f m = %.3f km\n", metros, km);

    // Quilos -> libras
    printf("\nDigite o peso em quilos: ");
    scanf("%f", &quilos);
    libras = quilos * 2.20462;
    printf("%.2f kg = %.2f lb\n", quilos, libras);
    
    printf("\nPressione ENTER para sair...");
    getchar(); getchar(); 
    return 0;
}
