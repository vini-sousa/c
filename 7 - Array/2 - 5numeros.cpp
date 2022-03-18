//Para um array A com 5 números inteiros, formular um algoritmo que determine o maior elemento deste array.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n[5];
	int i, ma=n[0]; //ma é o maior e vamos começar com o vetor de índice 0
	
	printf("Digite 5 números inteiros: \n"); //for para o usuário digitar os números
	
	for(i=0;i<5;i++){
		printf("%dº número: ",i+1);
		scanf("%d",&n[i]);
	}

	for(i=0;i<5;i++){
		if(ma<n[i]){ //aqui ele vai começar com o ma sendo o índice 0, se no índice zero ele foi menor que no índice i, ai ele vai retornar 
			ma=n[i]; // ao número que ta no índice maior
		}
	}
	
	printf("O maior valor é %d",ma);
	
	return 0;
}
