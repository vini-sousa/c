//Tabuada com REPETIÇÃO COM CONFIRMAÇÃO DO USUÁRIO

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

	int numero,contador,resultado;
	char opcao;

	do{
		system("CLS");

	do{
		printf("Digite um número entre 1 e 10: ");
		scanf("%d%*c",&numero);

	} while (numero<1 || numero>10);

	printf("\n********** Tabuada do número %d **********\n\n",numero);

	for(contador=1;contador<=10;contador++){
		resultado=numero*contador;
		printf("%d * %2d = %3d\n",numero,contador,resultado);
	}

	printf("\nContinua (S/N)?");
	opcao=toupper(getchar());

	}while(opcao!='N');

	return(0);
}

/* A repetição com confirmação do usuário consiste em um padrão em que um processo é executado e, ao final, o usuário é indagado se deseja continuar ou não a execução do mesmo.
O programa apresentado no próximo slide mostra o uso deste padrão. Nesse programa, a função getchar(), da biblioteca stdio.h, é usada para ler um caractere, representando a resposta do usuário, e a função toupper(), da biblioteca ctype.h, é usada para converter esse caractere em maiúscula antes de compará-lo a ‘N’. O formato %*c, em scanf(), é necessário para descartar o ENTER digitado ao final da entrada do número; sem isso, a função getchar() não vai parar para ler a resposta do usuário. A função system() da biblioteca stdlib.h é utilizada para executar um comando do sistema operacional via terminal. O comando CLS dentro da função system faz com que a tela seja “limpada” a cada execução do programa. */