//Escreva um programa que leia dois vetores com 10 elementos cada e gere um terceiro vetor de 20 elementos, 
//cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores. 
//Ao final o programa deverá mostrar os dois vetores originais e o terceiro vetor com os valores intercalados. 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v1[5], v2[5], v3[10]; //fazer com metade para facilitar
	int i;
	
	printf("Digite os números do primeiro vetor. \n\n");
	
	for (i=0;i<5;i++){
		printf("Digite o %d valor do primeiro vetor: ",i+1); //pedindo para o usúario digitar os valores do vetor 1
		scanf("%d",&v1[i]);
	}
	
	printf("\nDigite os números do segundo vetor. \n\n");
	
	for (i=0;i<5;i++){
		printf("Digite o %d valor do segundo vetor: ",i+1); //pedindo para o usúario digitar os valores do vetor 2
		scanf("%d",&v2[i]);
	}
	
	printf("\nO primeiro vetor é: \n"); //mostrando o primeiro vetor
	for (i=0;i<5;i++){
	printf("%d\n",v1[i]);
	}
	
	printf("\nO segundo vetor é: \n"); //mostrando o segundo vetor
	for (i=0;i<5;i++){
	printf("%d\n",v2[i]);
	}		
	
	printf("\nO terceiro vetor é: \n"); //mostrando o terceiro vetor
	for (i=0;i<5;i++){
	printf("%d\n",v1[i]);
	printf("%d\n",v2[i]);
	}
		// se quisesse mostrar o vetor seria: v3[2*i]=v1[i] 
		//									  v3[2*i+1]=v2[i]
	
	return 0;
}
