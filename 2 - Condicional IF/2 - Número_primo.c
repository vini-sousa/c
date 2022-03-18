//Faça uma função que descubra se o número é primo

#include<stdio.h>

int main(){

	int num;

	printf("Digite um valor: ");
	scanf("%d",&num);

	if(num==2 || num==3){ //Se o número é igual a 2 ou igual a 3 eles são primos. É necessário iniciar com essa condição pois a divisão deles por 2 ou 3 gera um resto igual a 0, mas mesmo assim eles são primos. 
	printf("eh primo\n");

	} else if(num%2==0 || num%3==0){ //Se um número quando dividido por 2 ou 3 tem resto igual a zero, significa que eles não são primos, pois são divisíveis por esses números e pelo próprio número. 
		printf("nao eh primo\n");
	
	} else {
		printf("eh primo\n");
}
	return 0;  
	}

//Consulte a imagem da tabela verdade para maiores esclarecimentos sobre o OU. 
