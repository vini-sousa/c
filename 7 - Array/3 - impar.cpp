//Escreva um programa que leia um vetor de 100 elementos. 
//O programa deve informar a quantidade de n�meros �mpares existentes no vetor. 
//Os� valores armazenados no vetor ser�o informados pelo usu�rio, ou gerados pelo�computador.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int v[5]; //fazendo com 5 pra ser menor...
	int i, impar=0, resto;
	
	printf("Por gentileza usu�rio, digite 5 n�meros.\n");
	
	for(i=0;i<5;i++){
		printf("Digite o %d� valor: ", i+1); //para gerar pelo PC seria: v[i]=rand() 
		scanf("%d",&v[i]);
		resto=v[i]%2; //resto da divis�o por 2
		
		if(resto!=0){ //se n�o for 0 o resto da divis�o por 2, ent�o o n�mero � �mpar
			impar++;
		}
		}	
		
		printf("A quantidade de �mpar �: %d",impar);
		
	
	return 0;
	
}
