//Dado um número inteiro, exiba a sua tabuada. 

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int tabuada=0, x;

	printf("Digite a tabuada que você deseja: ");
    	scanf("%d",&tabuada);

	for(x=1;x<=10;++x){
		printf("%d x %d = %d\n",tabuada,x,x*tabuada);
	}
	return 0;
}

//Nesse for é usado o contador prefixado, pois primeiro ele soma +1 ao tabuada=0 para depois executar, ai ele executa com 1, depois ele soma +1, ai executa com 2, e assim por diante. 