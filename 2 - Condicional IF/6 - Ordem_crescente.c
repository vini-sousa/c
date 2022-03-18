//Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes. 

#include<stdio.h>

int main(){

	int x,y,z;

	printf("Digite o primeiro numero: ");
	scanf("%d",&x);

	printf("Digite o segundo numero: ");
	scanf("%d",&y);

	printf("Digite o terceiro numero: ");
	scanf("%d",&z);

	if ((x<y)&&(y<z)){
		printf("A ordem crescente eh: %d,%d,%d",x,y,z);

	}else if((x<z)&&(z<y)){
		printf("A ordem crescente eh: %d,%d,%d",x,z,y);	

	}else if((y<x)&&(x<z)){
		printf("A ordem crescente eh: %d,%d,%d",y,x,z);

	}else if((y<z)&&(z<x)){
		printf("A ordem crescente eh: %d,%d,%d",y,z,x);

	}else if((z<x)&&(x<y)){
		printf("A ordem crescente eh: %d,%d,%d",z,x,y);

	}else if((z<y)&&(y<x)){
		printf("A ordem crescente eh: %d,%d,%d",z,y,x);
	}
	return 0;
}

//Para cada condição de ordem crescente é necessário fazer um IF. 
//Consulte a imagem da tabela verdade para maiores esclarecimentos sobre o E. 