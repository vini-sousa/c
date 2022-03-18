/*Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem constante na tabela a seguir. 
Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0.*/

#include<stdio.h>

int main(){

	float n1,n2,n3,m,me;
	//me é a média do exame

	printf("Digite a sua nota da AV1: ");
	scanf("%f",&n1);

	printf("Digite a sua nota da AV2: ");
	scanf("%f",&n2);

	printf("Digite a sua nota da AV3: ");
	scanf("%f",&n3);

	m=(n1+n2+n3)/3;

	printf("Sua media eh: %f",m);

	if ((m>=0)&&(m<3)){
		printf("\nVoce esta reprovado");

	} else if ((m>=3)&&(m<7)){
		me=(6*2)-m;
		//(nota_exame+média)/2=6, resolvendo a equação seria: nota_exame=6*2 - média

		printf("\nVoce ficou de exame e precisa tirar: %f",me);
		printf(" para ser aprovado.");

	} else if(m>=7){
		printf("\nParabens, voce foi aprovado!");
	}
	return 0;
}

//Consulte a imagem da tabela verdade para maiores esclarecimentos sobre o E. 