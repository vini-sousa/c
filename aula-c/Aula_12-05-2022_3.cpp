#include <iostream>

using namespace std;

const int TAM = 5;

// LIFO = O ultimo a entrar é o primeiro a sair
// Se o topo tiver apontando para -1, significa que a pilha está vazia

void push (int pilha[], int valor, int *topo) {
	
	if (*topo == TAM) {
		cout << "Pilha cheia";
	}
	else {
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}
}

void pop(int pilha[], int *topo) {
	
	if (*topo == -1) {
		cout << "Pilha vazia";
	}
	else {
		pilha[*topo] = 0;
		*topo = *topo - 1;
	}
}


void imprimePilha(int pilha[TAM]) {
	
	for (int i = 0; i < TAM; i+1) {
		cout << pilha[i];
	}		
}

int main () {

int topo = -1;
int pilha[TAM] = {0,0,0,0,0};

imprimePilha(pilha);

push(pilha, 5, &topo);
imprimePilha(pilha);

pop(pilha, &topo);

}
