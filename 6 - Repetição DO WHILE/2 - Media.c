// Dadas as duas notas de um aluno, informe a sua média. Seu programa deve forçar o usuário a digitar notas na faixa de 0 a 10

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,media;

	do{
		printf("Digite a 1ª nota: ");
		scanf("%f",&n1);
		printf("Digite a 2ª nota: ");
		scanf("%f",&n2);

	} while (n1<0.0||n1>10.0 || n2<0||n2>10); //ou é maior que zero ou é menor do que 10, não tem como ser menor que zero E ser maior que 10
    
		media=(n1+n2)/2;
		printf("A sua média é: %.2f.",media);
	
	
	return (0);
}