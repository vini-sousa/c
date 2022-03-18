//Dado um número inteiro qualquer, exiba seus dígitos

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

	int digito,numero;

	printf("Digite um número para saber seus dígitos: ");
	scanf("%d",&numero);
	printf("\nDígitos:\n");

	while(numero>0){ //vai ativar o while se tiver dentro da condição (se a condição for verdadeira)
		digito=numero%10; 
		numero=numero/10;
		printf("%d\n",digito);
	}
	return 0;
}