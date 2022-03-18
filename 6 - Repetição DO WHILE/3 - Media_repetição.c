// Dadas as duas notas de um aluno, informe a sua média. Seu programa deve forçar o usuário a digitar notas na faixa de 0 a 10
//  Modifique a lógica elaborada para o exercício anterior de modo que, ao final de cada execução, o usuário tenha a opção de repetir o processo

#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<stdlib.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

	float n1,n2,media;
	char opcao;
	
	do{
		system("CLS");	
			
	do{
		printf("Digite a 1ª nota: ");
		scanf("%f%*c",&n1);
		printf("Digite a 2ª nota: ");
		scanf("%f%*c",&n2);

	} while (n1<0.0||n1>10.0 || n2<0||n2>10); //ou é maior que zero ou é menor do que 10, não tem como ser menor que zero E ser maior que 10
	
		media=(n1+n2)/2;
		printf("A sua média é: %.2f.",media);
	
		printf("\nContinuar (S/N)?");
		opcao=toupper(getchar());
	
	} while(opcao!='N');

	return (0);
}

/* A repetição com confirmação do usuário consiste em um padrão em que um processo é executado e, ao final, o usuário é indagado se deseja continuar ou não a execução do mesmo.
O programa apresentado no próximo slide mostra o uso deste padrão. Nesse programa, a função getchar(), da biblioteca stdio.h, é usada para ler um caractere, representando a resposta do usuário, e a função toupper(), da biblioteca ctype.h, é usada para converter esse caractere em maiúscula antes de compará-lo a ‘N’. O formato %*c, em scanf(), é necessário para descartar o ENTER digitado ao final da entrada do número; sem isso, a função getchar() não vai parar para ler a resposta do usuário. A função system() da biblioteca stdlib.h é utilizada para executar um comando do sistema operacional via terminal. O comando CLS dentro da função system faz com que a tela seja “limpada” a cada execução do programa. */
