//Escreva um programa que leia um vetor de 100 elementos. 
//O programa deve informar a quantidade de números ímpares existentes no vetor. 
//Os  valores armazenados no vetor serão informados pelo usuário, ou gerados pelo computador.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int v[5]; //fazendo com 5 pra ser menor...
	int i, impar=0, resto;
	
	printf("Por gentileza usuário, digite 5 números.\n");
	
	for(i=0;i<5;i++){
		printf("Digite o %dº valor: ", i+1); //para gerar pelo PC seria: v[i]=rand() 
		scanf("%d",&v[i]);
		resto=v[i]%2; //resto da divisão por 2
		
		if(resto!=0){ //se não for 0 o resto da divisão por 2, então o número é ímpar
			impar++;
		}
		}	
		
		printf("A quantidade de ímpar é: %d",impar);
		
	
	return 0;
	
}
