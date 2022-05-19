/* 1- Como alocar dinamicamente memória para um número inteiro em C e C++ ?
Usando 'malloc' em C e 'new' em C++ */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

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

	return 0;
}


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
