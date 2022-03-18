//Dadas as notas dos alunos de uma turma, informe a média da turma. 

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

	int total_alunos,contador;
	float nota, media;

	printf("Informe o total de alunos: ");
	scanf("%d",&total_alunos);

	for(contador=1;contador<=total_alunos;contador++){
		printf("Nota do aluno %d: ",contador);
		scanf("%f%*c",&nota); //*
		media+=nota/total_alunos; //**
	}
	printf("\nA média dos alunos é %.2f.",media); //Esse .2 é para que seja mostrado apenas duas casas decimais. 

	return (0);

}

//* %*c é um "truque" para jogar o caracter enter "fora"(na pergunta do primeiro scanf você vai colocar o valor float e depois dar um enter, e esse enter é pego como caracter também), se você tirar ele você vai pular a segunda pergunta, pois a resposta da segunda pergunta é o caracter do enter.

/* ** Isso é a mesma coisa que dizer que media = media + nota/total, isso se dará da seguinte forma: 
med = med + 7/5 (digamos que são 5 alunos e a nota do 1 é 7) = 7/5
no próximo aluno med = 7/5 + 8/5
ai no prócimo aluno med = 7/5 + 8/5 + 10/5
E assim por diante, como o denominador é sempre 5 (que é o total de alunos), no final teremos todas as notas dividido por 5. */

