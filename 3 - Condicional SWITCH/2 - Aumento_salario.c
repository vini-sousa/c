/*Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual 
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir*/

#include<stdio.h>

int main(){

	int cargo;

	float salario_atual,salario_aumento,valor_aumento;

	printf("Selecione a opcao do seu cargo:\n");
	printf("1 - Escriturario \n2 - Secretario \n3 - Caixa \n4 - Gerente \n5 - Diretor\n");
	printf("Digite a opcao: ");
	scanf("%d",&cargo);

	printf("Informe o seu atual salario? ");
	scanf("%f",&salario_atual);

//O Switch vai pegar o caso informado pelo usuário e vai executar apenas esse caso. Por isso a necessidade do break no final. 

	switch(cargo){
		case 1:
			valor_aumento=salario_atual*0.5;
			salario_aumento=salario_atual*1.5;
			printf("Seu cargo eh Escriturario, seu valor de aumento eh %f e o seu novo salario eh %f",valor_aumento,salario_aumento);
			break;

		case 2:
			valor_aumento=salario_atual*0.35;
			salario_aumento=salario_atual*1.35;
			printf("Seu cargo eh Secretario, seu valor de aumento eh %f e o seu novo salario eh %f",valor_aumento,salario_aumento);
			break;

		case 3:
			valor_aumento=salario_atual*0.2;
			salario_aumento=salario_atual*1.2;
			printf("Seu cargo eh Caixa, seu valor de aumento eh %f e o seu novo salario eh %f",valor_aumento,salario_aumento);
			break;

		case 4:
			valor_aumento=salario_atual*0.1;
			salario_aumento=salario_atual*1.1;
			printf("Seu cargo eh Gerente, seu valor de aumento eh %f e o seu novo salario eh %f",valor_aumento,salario_aumento);
			break;

		case 5:
			valor_aumento=salario_atual;
			salario_aumento=salario_atual;
			printf("Seu cargo eh Diretor, e voce nao tera aumento de salario!");
			break;
	}
	return 0;
}
