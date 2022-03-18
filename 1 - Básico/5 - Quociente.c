//Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles

#include<stdio.h>

int main(){

	int x,y,quociente,resto;

	printf("Digite um numero inteiro: ");
	scanf("%d",&x);

	printf("Digite outro numero inteiro: ");
	scanf("%d",&y);

	quociente=x/y; //quociente é o valor do resultado da divisão 

	printf("O quociente eh: %d",quociente);

	resto=x%y; //para saber o resto da divisão entre dois números basta utilizar o %

	printf("\nO resto eh: %d",resto);

	return 0;
}