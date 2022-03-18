//Crie um programa que recebe um número e verifica se ele é positivo ou não. Faça a verificação através de uma sub rotina. 

#include<stdio.h>
#include<locale.h>

void positivo(int a){
	if(a>0){
		printf("É positivo!");
	} else{
		printf("É negativo!");
	}
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int x;
	
	printf("Digite um número: ");
	scanf("%d",&x);
	
	positivo(x);
	
	return 0;
}
