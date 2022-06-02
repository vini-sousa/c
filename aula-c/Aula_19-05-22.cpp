/* 1- Como alocar dinamicamente memória para um número inteiro em C e C++ ?
Usando 'malloc' em C e 'new' em C++ */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define TAM 10

using namespace std;

// Em C usamos MALLOC e FREE
int main(void) {
	
	int *num;
	num = (int*) malloc(sizeof(int));
	*num = 10;
	
	printf ("%d\n", *num);
	free(num); // Libera a área alocada

// Em C++ usamos NEW e DELETE
	
	int *ptr;
	ptr = new int;
	*ptr = 20;
	
	cout << *ptr << endl;
	delete ptr; // Libera a área alocada
	


// 2- Como alocar memória dinâmica para a struct abaixo em C e C++ ?

// Em C

typedef struct NO {
	int valor;
}NO;

NO *opc1;
opc1 = (NO*) malloc(sizeof(NO));

opc1->valor = 40;

printf ("%d\n", opc1->valor);


// Em C++

struct NO2 {
	int valor;
};

NO2 *n;
n = new NO2;

n->valor = 60;

cout << n->valor << endl;


/* TRABALHO para dia 2 de junho

1 - MENU:

Digite 1 para inicializar a Pilha 
Digite 2 para verificar o tamanho da Pilha 
Digite 3 para exibir Pilha (Imprimir os elementos)
Digite 4 inserir elemento Pilha PUSH (Inserir os elementos)
Digite 5 excluir elemento Pilha POP (Remover os elementos)
Digite 6 para reinicializar Pilha (Dar um free/delete)

Dica: Teremos que utilizar Struct


2 - Fazer um crud de agenda (Nome, Telefone e Indice Unico)

*/

struct pilha{
	int v[TAM];
	int topo;
}; //Declaração da pilha

void inicializar(struct pilha *p){
	p->topo =-1; //Indicar que a pilha está vazia. 
}

void empilhar(struct pilha *p, int x){
	p->topo +=1;
	p->v[p->topo]=x;
}

int desempilhar(struct pilha *p){
	p->topo -= 1; //decremento do topo
	return p->v[p->topo+1];
	
}

void imprimir(struct pilha p){
	int i;
	for(i=0; i<=p.topo;i++){
		printf("\n%d",p.v[i]);
	}
	printf("<--- Topo\n");
}

void tamanho(struct pilha p){
	printf("O tamanho da pilha é %d.\n",p.topo+1);
}
 

int main(){
	setlocale(LC_ALL,"Portuguese");
	int op;
	struct pilha p; 
	
	printf("\n-----Bem vindo(a) ao Menu-----");
	printf("\nEscolha uma das seguintes opções:\n");
	
	do{
	printf("\n1 - Inicializar a Pilha");
	printf("\n2 - Verificar o tamanho da Pilha");	
	printf("\n3 - Exibir a Pilha");
	printf("\n4 - Inserir um elemento na Pilha");
	printf("\n5 - Excluir um elemento na Pilha");
	printf("\n6 - Reinicializar a Pilha");
	printf("\n7 - Sair");
	printf("\n\nDigite a opção desejada: ");
	scanf("%d",&op);
	
	
		switch (op){
			case 1:
				inicializar(&p);
				printf("Pilha inicializada com sucesso.\n");
				break;
				
			case 2:
				tamanho(p);
				break;
				
			case 3:
				if(p.topo==-1){
					printf("A pilha está vazia, insira itens.\n");
				} else{
					imprimir(p);
				}
				
				break;
				
			case 4:
				int x;
				printf("Digite o valor: ");
				scanf("%d", &x);
				printf("Valor %d inserido com sucesso.\n",x);
				
				empilhar(&p,x);
				break;
				
			case 5:
				int y; 
				y=desempilhar(&p);
				printf("Elemento %d desempilhado com sucesso!\n", y);
				break;
				
			case 6:
				inicializar(&p);
				printf("Pilha reinicializada com sucesso.\n");
				break;
				
			case 7:
				printf("\nObrigada por utilizar nossa pilha!\n");
				break;
					
			default:
			printf("Você digitou uma opção inválida!!!\n");
			break;	
		
		}
	
	}while (op!=7);

return (0);
}
