//DECLARANDO STRINGS EM C

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[20], sobrenome[20];
	
	printf("Primeiro nome: ");
	scanf("%s",nome);
	
	printf("Sobrenome: ");
	scanf("%s",sobrenome);
	
	printf("Olá %s %s, bem vindo(a) ao curso de C.", nome, sobrenome);
	
	
}
