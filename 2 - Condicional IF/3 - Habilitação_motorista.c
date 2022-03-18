//Informando o tempo que ainda falta para a pessoa ter direito a habilitação

#include<stdio.h>

int main (){

	int idade,tempo;

	printf("Digite a sua idade: ");
	scanf("%d",&idade);

	if(idade>=18){
		printf("Voce tem direito a habilitacao!");
		
	} else {
		tempo=18-idade;
		printf("Ainda faltam: %d",tempo);
		printf(" anos");
	}
	return 0;
}