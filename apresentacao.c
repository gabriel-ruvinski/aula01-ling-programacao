#include <stdio.h>

int main() {
	char nome[100], curso[100];
	int idade, ano_nascimento;
	
	printf("-== PROGRAMA DE APRESENTACAO ==-\n");
	
	printf("Digite seu nome completo: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu curso: ");
	scanf(" %99[^\n]", curso);
	
	// C�lculo
	ano_nascimento = 2025 - idade;
	
	// Sa�da
	printf("\n=== BEM VINDO(a) ===\n");
	printf("Ola, %s\n", nome);
	printf("Voce tem %d anos e estuda o curso de %s\n", idade, curso);
	printf("Voce nasceu aproximadamente no ano de %d\n", ano_nascimento);
	
	printf("\nPressione ENTER para sair...");
    getchar(); getchar(); 
	return 0;
}
