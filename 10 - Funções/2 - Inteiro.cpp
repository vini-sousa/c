//Crie um programa que recebe um n�mero e verifica se ele � positivo ou n�o. Fa�a a verifica��o atrav�s de uma sub rotina. 

#include<stdio.h>
#include<locale.h>

void positivo(int a){
	if(a>0){
		printf("� positivo!");
	} else{
		printf("� negativo!");
	}
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int x;
	
	printf("Digite um n�mero: ");
	scanf("%d",&x);
	
	positivo(x);
	
	return 0;
}
