//Faça um programa que receba dois números e mostre o maior

#include<stdio.h>

int main(){

	int n1,n2;

	printf("Digite o primeiro numero inteiro: ");
	scanf("%d",&n1);

	printf("Digite o segundo numero inteiro: ");
	scanf("%d",&n2);

	if(n1==n2){
		printf("Os numeros informados sao iguais.");

	} else if(n1>n2){
		printf("O maior numero eh: %d",n1);
        
	} else{
		printf("O maior numero eh: %d",n2);
	}
	return 0;
}