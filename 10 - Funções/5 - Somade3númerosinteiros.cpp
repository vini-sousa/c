//Faça um programa contendo uma sub rotina que receba 3 números inteiros a, b e c, sendo a maior que 1. 
//A sub-rotina deverá somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) 
//e retornar o resultado para ser impresso.

#include<stdio.h>
#include<locale.h>

int SomaIntervaloDivisiveis(int a, int b, int c){
	int maior, menor, i, soma=0;
	if(b<c){
		menor=b;
		maior=c;
	} else{
		menor=c;
		maior=b;
	}
	
	for(i=menor;i<=maior;i++){
		if(i%a==0){
			soma=soma+i;
		}
	}
	return soma;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c, total;
	
	printf("Digite um valor para A: ");
	scanf("%d",&a);
	
	while(a<=1){
		printf("Digite um valor de A maior do que 1!\n");
		printf("Digite um valor para A: ");
		scanf("%d",&a);
	} 
	
	printf("Digite um valor para B: ");
	scanf("%d",&b);
	printf("Digite um valor para C: ");
	scanf("%d",&c);
	
	total=SomaIntervaloDivisiveis(a,b,c);
	
	printf("O valor total da soma dos divisíveis por A entre B e C é: %d",total);
	
	return 0;
}
