//Dado um número n, exiba uma contagem regressiva de n até 0. 

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int numero, contador;

	printf("Digite um número para a contagem regressiva: ");
	scanf("%d",&numero);

	for(contador=numero;contador>=0;contador--){
		printf("%d ",contador);
	}
	return 0;
}

//Nesse for é usado o contador posfixado, pois primeiro ele usa o contador como número, depois ele diminui -1, e assim por diante. 