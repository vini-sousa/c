#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Revisão de Struct em C

typedef struct {
int matricula;
char nome[50];
float nota1, nota2, media;
}Alunos;

int main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	const int TAM = 1;
	
	Alunos vetAluno[TAM];	
	
	for (int i = 0; i < TAM; i++) { 
	
		printf ("Digite o nome: ");
		scanf ("%50[^\n]c", &vetAluno[i].nome);

		printf ("Digite a matrícula: ");
		scanf ("%d", &vetAluno[i].matricula);
		
		printf ("Digite a primeira nota: ");
		scanf ("%f", &vetAluno[i].nota1);
		
		printf ("Digite a segunda nota: ");
		scanf ("%f", &vetAluno[i].nota2);
		
		vetAluno[i].media = (vetAluno[i].nota1 + vetAluno[i].nota2) / 2;
	}
	
	for (int i = 0; i < TAM; i++) {
		printf ("Matrícula: %d", vetAluno[i].matricula);
		printf ("\nNome: %s", vetAluno[i].nome);
		printf ("\nMédia: %.2f", vetAluno[i].media);
	}
	
	return 0;

}
