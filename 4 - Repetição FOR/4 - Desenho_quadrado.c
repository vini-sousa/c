//Dado um número natural n, desenhe um quadrado n x n

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int numero, linha, coluna;

	printf("Digite o número do tamanho do quadrado que você deseja: ");
	scanf("%d",&numero);
	printf("\n");

	for(linha=1;linha<=numero;linha++){
		for(coluna=1;coluna<=numero;coluna++){
			printf("%c ",001); //Para imprimir um quadradinho. 
		}
		printf("\n");
	}
	return 0;
}

//É um for dentro de um for. Primeiro ele vai validar a primeira linha, ai vai entrar no for da coluna, ai vai preencher todas as colunas da primeira linha, então ele sai para a segunda linha e preenche todas as colunas da segunda linha, e assim por diante. 