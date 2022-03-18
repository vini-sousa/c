//Faça um programa em C que leia 10 strings, imprima o tamanho de cada uma delas e troque as letras para maiúsculas. Dica: use o FOR. 

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[10];
	int i,j, tamanho[10];
	
	for(i=0;i<10;i++){
		printf("Digite o nome %d: ",i+1);
		scanf("%s",&nome[i]);
		}
		
	for(i=0;i<10;i++){
	tamanho[i]=strlen(nome);
		printf("O tamanho do string %d é: %d.",i+1,tamanho[i]);	
	}
	
	return 0;
}
