//Crie uma função que troque o valor de dois números inteiros passados por referência

#include<stdio.h>
#include<locale.h>

void troca(int *x, int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int A, B;
	printf("Digite o primeiro número referente a A: ");
	scanf("%d",&A);
	printf("Digite o segundo número referente a B: ");
	scanf("%d",&B);
	
	troca(&A,&B);
	
	printf("O de A após a troca é: %d.\n",A);
	printf("O de B após a troca é: %d.",B);
	
	return 0;
}
