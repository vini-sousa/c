//Crie uma fun��o que troque o valor de dois n�meros inteiros passados por refer�ncia

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
	printf("Digite o primeiro n�mero referente a A: ");
	scanf("%d",&A);
	printf("Digite o segundo n�mero referente a B: ");
	scanf("%d",&B);
	
	troca(&A,&B);
	
	printf("O de A ap�s a troca �: %d.\n",A);
	printf("O de B ap�s a troca �: %d.",B);
	
	return 0;
}
