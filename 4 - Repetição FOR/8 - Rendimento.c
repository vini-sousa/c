// Dados um capital, uma taxa de juros mensal e um período em meses, informe o montante ao final de cada mês. 


#include<stdio.h>
#include<locale.h>

int main (){

	setlocale(LC_ALL,"Portuguese");

	float capital,juros;
	int periodo,contador;

	printf("Informe o seu capital inicial em reais: ");
	scanf("%f",&capital);

	printf("Informe a taxa de juros mensal: ");
	scanf("%f",&juros);

	printf("Informe o período do rendimento em meses: ");
	scanf("%d",&periodo);

	for(contador=1;contador<=periodo;contador++){
		capital+=capital*(juros/100); //Juros dividido por 100 porque é em porcentagem. Tipo 2,5% ao mês = 2,5/100. 

		printf("\nRendimento do %dº mês é: R$ %.2f",contador,capital);
		}

	return (0);
}