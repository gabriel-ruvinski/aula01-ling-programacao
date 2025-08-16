#include <stdio.h>

int main() {
    float num1, num2;

    printf("-== Calculadora Simples ==-\n");

    // Leitura de dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Operações básicas
    printf("\nResultados:\n");
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Nao e possivel dividir por zero!\n");
    } 
    
    printf("\nPressione ENTER para sair...");
    getchar(); getchar(); 
    return 0;
}
