/*Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
	Menu de opções: 
	1.Somar dois números. 
	2.Raiz quadrada de um número
	Digite a opção desejada:*/

#include<stdio.h>

#include<math.h> //Biblioteca necessária para fazer o cálculo da raiz quadrada.

int main(){

	int n1,n2,categoria1,categoria2,soma;
	double raiz_quadrada;

	printf("Digite o primeiro valor: ");
	scanf("%d",&n1);

	printf("Digite o segundo valor: ");
	scanf("%d",&n2);

	printf("Selecione uma opcao de operacao: \n");
	printf("1 - somar dois numeros\n2 - raiz quadrada de um numero\n");
	printf("Digite a opcao desejada: ");
	scanf("%d",&categoria1);

	switch(categoria1){

		case 1:
			soma=n1+n2;
			printf("A soma eh: %d",soma);
			break;

		case 2:
			printf("Qual numero voce deseja calcular a raiz quadrada?\n");
			printf("1 - para o primeiro valor\n2 - para o segundo valor\n");
			printf("Digite a opcao desejada: ");
			scanf("%d",&categoria2);

			switch(categoria2){

				case 1:
					raiz_quadrada=sqrt(n1);
					printf("A raiz quadrada eh %lf",raiz_quadrada);
					break;

				case 2:
					raiz_quadrada=sqrt(n2);
					printf("A raiz quadrada eh %lf",raiz_quadrada);
					break;
			break;
			}
	}
	return 0;
}