//O básico de todo curso de programação: fazer uma calculadora. Aqui o negócio começa a ficar profissional. 
//Crie um programa que exiba um menu com as seguintes opções
//1 - somar  2 - subtrair  3 - multiplicar  4 - dividir  5 - sair  
//Após a escolha da opção, o usuário deve fornecer dois números e o programa deve mostrar o resultado da operação.  

#include<stdio.h>
#include<locale.h> //Biblioteca para acentuação gráfica (finalmente um português bem escrito!)

int main(){

	setlocale(LC_ALL,"Portuguese"); //Comando para entender que estamos escrevendo em português. 

	float n1,n2,resultado;
	int op;
	
    //Calma que jaja você vai ver mais sobre o DO e WHILE, mas basicamente é FAÇA isso ENQUANTO tal coisa acontece. 

	do{
	printf("\nBem vindo(a) ao Menu Calculadora");
	printf("\nTemos as seguintes opções:");
	printf("\n1 - Somar");
	printf("\n2 - Subtrair");
	printf("\n3 - Multiplicar");
	printf("\n4 - Dividir");
	printf("\n5 - Sair");
	printf("\nDigite a opção desejada: ");
	scanf("%d",&op);
	
	if(op<5 && op>0){
		printf("\nDigite o primeiro valor: ");
		scanf("%f",&n1);
		printf("Digite o segundo valor: ");
		scanf("%f",&n2);
	}		
		switch (op){
			case 1:
				resultado=n1+n2;
				printf("\nO resultado da soma é: %.2f.\n",resultado);
				break;
				
			case 2:
				resultado=n1-n2;
				printf("\nO resultado da subtração é: %.2f.\n",resultado);
				break;
				
			case 3:
				resultado=n1*n2;
				printf("\nO resultado da multiplicação é: %.2f.\n",resultado);
				break;
				
			case 4:
				resultado=n1/n2;
				printf("\nO resultado da divisão é: %.2f.\n",resultado);
				break;
				
			case 5:
				printf("\nFinalizando a calculadora.\n");
				break;
					
			default: //Para quando o usuário digitar uma opção inválida, sabe como usuário é... 
			printf("Você digitou uma opção inválida.\n");
			break;	
		
		}
	
	}while (op!=5); //Vai ficar rodando a calculadora enquanto o usuário não digitar 5 - Sair.

return (0);
}