#include <stdio.h>

#define TAM 10																			// Definimos uma vari�vel global para, caso seja necess�rio, refatorarmos o c�digo com mais facilidade

int main() {
	int vet[TAM], i, maior, pos_maior, menor, pos_menor;
	
	// Preenchendo o vetor
	for(i = 0; i < TAM; i++) {
		printf("Posicao[%d]: ", i+1);													// Adicionei 1 ao valor i apenas por quest�es est�ticas do c�digo (portanto, n�o � obrigat�rio fazer essa adi��o)
		scanf("%d", &vet[i]);
	}
	
	// Encontrando o Maior valor
	maior = vet[0];																		// N�o devemos inicializar a vari�vel maior com 0 pois, caso o usu�rio digite apenas valores negativos, nossa l�gica ir� falhar
	pos_maior = 0;																		// Inicializamos a posi��o com 0
	for(i = 1; i < TAM; i++) {
		if(vet[i] > maior) {
			maior = vet[i];																// Se o vetor[i] for maior que o valor da vari�vel "maior", atribuimos esse valor a vari�vel
			pos_maior = i;																// e atribuimos essa posi��o "i" � vari�vel pos_maior
		}
	}
	
	// Encontrando o Menor valor
	menor = vet[0];		
	pos_menor = 0;																		
	for(i = 1; i < TAM; i++) {
		if(vet[i] < menor) {															// A l�gica para achar o menor valor � igual a l�gica anterior
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
