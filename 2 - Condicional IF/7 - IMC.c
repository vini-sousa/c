//Problema para calcular o IMC - índice de massa corporal. 

#include<stdio.h>

int main (){

	float peso,altura,imc;

	printf("Digite seu peso: ");
	scanf("%f",&peso);

	printf("Digite sua altura: ");
	scanf("%f",&altura);

	imc=peso/(altura*altura);

	printf("Seu IMC eh=%f",imc);

	if(imc<18.5){
	printf("\nMagreza");

	} else if(imc>=18.5 && imc<=24.9){
	printf("\nNormal");

	} else if(imc>=25.0 && imc<=29.9){
	printf("\nSobrepeso");

	} else if(imc>=30.0 && imc<=39.9){
	printf("\nObesidade");

	} else if(imc>=40){
	printf("\nObesidade grave");
	}

	return 0;

}

//Consulte a imagem da tabela verdade para maiores esclarecimentos sobre o E. 