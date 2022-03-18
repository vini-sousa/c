//Faça um programa com uma sub-rotina que receba um único valor representando segundos. 
//Essa sub-rotina deverá convertê-lo para horas, minutos e segundos. 
//Todas as variáveis devem ser passadas como parâmetros, não havendo variáveis globais.

#include<stdio.h>
#include<locale.h>

void ConversaoSegundos(int segundos){
	int hora, minutos, seg, resto;
	hora = segundos/3600;
	resto = segundos%3600;
	minutos = resto/60;
	seg = resto%60;
	
	printf("Esse valor de segundos em horas é %dh:%dm:%ds.",hora,minutos,seg);
	
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int segundos; 
	
	printf("Digite a quantidade de segundos: ");
	scanf("%d",&segundos);
	
	ConversaoSegundos(segundos);
	
	
	return 0;
}
