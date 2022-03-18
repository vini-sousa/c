//Fa�a um programa com uma sub-rotina que receba um �nico valor representando segundos. 
//Essa sub-rotina dever� convert�-lo para horas, minutos e segundos. 
//Todas as vari�veis devem ser passadas como par�metros, n�o havendo vari�veis globais.

#include<stdio.h>
#include<locale.h>

void ConversaoSegundos(int segundos){
	int hora, minutos, seg, resto;
	hora = segundos/3600;
	resto = segundos%3600;
	minutos = resto/60;
	seg = resto%60;
	
	printf("Esse valor de segundos em horas � %dh:%dm:%ds.",hora,minutos,seg);
	
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int segundos; 
	
	printf("Digite a quantidade de segundos: ");
	scanf("%d",&segundos);
	
	ConversaoSegundos(segundos);
	
	
	return 0;
}
