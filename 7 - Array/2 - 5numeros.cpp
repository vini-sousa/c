//Para um array A com 5 n�meros inteiros, formular um algoritmo que determine o maior elemento deste array.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n[5];
	int i, ma=n[0]; //ma � o maior e vamos come�ar com o vetor de �ndice 0
	
	printf("Digite 5 n�meros inteiros: \n"); //for para o usu�rio digitar os n�meros
	
	for(i=0;i<5;i++){
		printf("%d� n�mero: ",i+1);
		scanf("%d",&n[i]);
	}

	for(i=0;i<5;i++){
		if(ma<n[i]){ //aqui ele vai come�ar com o ma sendo o �ndice 0, se no �ndice zero ele foi menor que no �ndice i, ai ele vai retornar 
			ma=n[i]; // ao n�mero que ta no �ndice maior
		}
	}
	
	printf("O maior valor � %d",ma);
	
	return 0;
}
