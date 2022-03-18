//(Exercícios Propostos) Faça um programa que com uma sub-rotina que receba como parâmetro a altura 
//e sexo de uma pessoa e retorne seu peso ideal. 
//Para homens, deverá calcular o peso ideal usando a formula: peso ideal = 72.7*altura – 58; 
//para mulheres peso ideal = 621.1*altura – 44,7.

#include<stdio.h>
#include<locale.h>

float PesoIdeal(float altura, char sexo){
	float peso;
	
	if (sexo=='f'){
	peso=(621.1*altura)-44.7;
	} else if (sexo=='m'){
	peso=(72.7*altura)-58;
	}
	
	return peso;
}	

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char sexo;
	float altura, peso;
	
	printf("Informe o seu sexo.\nM para masculino e F para feminino: ");
	scanf("%c",&sexo);
	
	printf("Informe a sua altura em metros: ");
	scanf("%f",&altura);
	
	peso=PesoIdeal(altura,sexo);
	
	printf("O seu peso ideal é: %.2f",peso);
	
	return 0;
}
