#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("-== Calculadora de Media ==-\n");
    printf("(Digite notas de 0 e 10)\n");

    // Leitura das 4 notas
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Cálculo da média
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Resultado
    printf("\nMedia: %.2f\n", media);
    if (media >= 7.0) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
    
    printf("\nPressione ENTER para sair...");
    getchar(); getchar(); 
    return 0;
}
