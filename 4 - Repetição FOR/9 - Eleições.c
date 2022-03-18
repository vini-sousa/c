//Em uma eleição há três candidatos, identificados como A, B e C. Dados os votos dos eleitores, informe o resultado da eleição, conforme exemplificado na imagem do Problema 4. 
// A - Maria B - João C - Pedro

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

	int eleitores,contA=0,contB=0,contC=0,contnulos=0;
	char candidato;
	
	printf("Bem vindo(a) as eleições de 2020.\n");
	printf("Informe a quantidade de eleitores: ");
	scanf("%d",&eleitores);

	for(int i=eleitores;i!=0;i--){ //O contador nesse caso é o i, ele poderia ser informado lá nas declarações das variáveis ou aqui especificando o tipo dele (nesse caso inteiro) antes. 
		
		printf("\nA para votar na Maria");
		printf("\nB para votar no João");
		printf("\nC para votar no Pedro");
		printf("\nEscolha seu candidato: ");
		scanf("%s",&candidato);
		
		if(candidato=='A'||candidato=='a'){
			contA=contA+1;

		} else if(candidato=='B'||candidato=='b'){
			contB=contB+1;

		}else if(candidato=='C'||candidato=='c'){
			contC=contC+1;

		}else{
			contnulos=contnulos+1;
		}

        //Cada candidato começa com 0 votos, os contadores vão sendo incrementados a medida que os eleitores vão votando. 	
	} 
	printf("\nTotal de votos na Maria: %d.",contA);
	printf("\nTotal de votos no João: %d.",contB);
	printf("\nTotal de votos no Pedro: %d.",contC);
	printf("\nTotal de votos nulos: %d.",contnulos);
	
	return (0);
}