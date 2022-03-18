//Solicitar a idade de uma pessoa e informar na tela a idade em anos, meses e dias. 

#include<stdio.h>

int main(){

	int idade,anos,meses,dias;

	printf("Me diga sua idade: ");
	scanf("%d",&idade);
	anos=idade;
	printf("Obviamente sua idade em anos eh: %d",anos);

	meses=idade*12;
	printf("\nSua idade em meses eh: %d",meses);

	dias=idade*365;
	printf("\nSua idade em dias eh: %d",dias);
    
	return 0;
}