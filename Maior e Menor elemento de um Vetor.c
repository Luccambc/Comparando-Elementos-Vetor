#include <stdio.h>

#define TAM 10																			// Definimos uma variável global para, caso seja necessário, refatorarmos o código com mais facilidade

int main() {
	int vet[TAM], i, maior, pos_maior, menor, pos_menor;
	
	// Preenchendo o vetor
	for(i = 0; i < TAM; i++) {
		printf("Posicao[%d]: ", i+1);													// Adicionei 1 ao valor i apenas por questões estéticas do código (portanto, não é obrigatório fazer essa adição)
		scanf("%d", &vet[i]);
	}
	
	// Encontrando o Maior valor
	maior = vet[0];																		// Não devemos inicializar a variável maior com 0 pois, caso o usuário digite apenas valores negativos, nossa lógica irá falhar
	pos_maior = 0;																		// Inicializamos a posição com 0
	for(i = 1; i < TAM; i++) {
		if(vet[i] > maior) {
			maior = vet[i];																// Se o vetor[i] for maior que o valor da variável "maior", atribuimos esse valor a variável
			pos_maior = i;																// e atribuimos essa posição "i" à variável pos_maior
		}
	}
	
	// Encontrando o Menor valor
	menor = vet[0];		
	pos_menor = 0;																		
	for(i = 1; i < TAM; i++) {
		if(vet[i] < menor) {															// A lógica para achar o menor valor é igual a lógica anterior
			menor = vet[i];
			pos_menor = i;
		}
	}
	
	// Printando o vetor
	printf("\nVetor: ");
	for(i = 0; i < TAM; i++) {
		printf("[%d] ",vet[i]);
	}
	
	printf("\n");
	printf("\nMaior valor: %d - Posicao: %d", maior, pos_maior + 1);
	printf("\nMenor valor: %d - Posicao: %d", menor, pos_menor + 1);
	
	
	
	return 0;
}
