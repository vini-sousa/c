//Dadas as temperaturas que foram registradas diariamente durante uma semana, 
//deseja-se determinar em quantos dias dessa semana a temperatura esteve acima da média. 
//Escreva um programa (utilizando vetores) para calcular esta informação.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int temperatura[3];
	int media=0, diasAcima=0, i;
	
	printf("Bom dia! Informe a temperatura de cada dia da semana.\n");
	
	for(i=0;i<3;i++){
		printf("Temperatura do dia %d: ",i+1);
		scanf("%d",&temperatura[i]);

		media=(media+temperatura[i]); //somando para calcular a média - acumulador da média
	}
	
	media=media/3; //depois que fizer todo o for ele vai acumular o valor da média
		
		for(i=0;i<3;i++){
		if(temperatura[i]>media){
			diasAcima++;
		}
	}
	
		printf("%d dias a temperatura esteve acima da média.",diasAcima);
	
	
	return 0;
}
