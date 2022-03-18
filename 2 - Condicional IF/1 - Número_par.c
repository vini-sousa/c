//Escreva um programa que leia um número e imprima se este número é ou não par. 

#include<stdio.h>

int main (){

	int x,resto;

	printf("Digite um numero: ");
	scanf("%d",&x);

	resto=x%2;

	if(resto==0){
		printf("O numero digitado eh par");
	} 
    
    else {
		printf("O numero digitado eh impar");
	}
	return 0;
}

// Se o resto da divisão de um número por dois for igual a zero significa que ele é par. 