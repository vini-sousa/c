#include <iostream>

//Preencher um vetor, mostrar os numeros do vetor e duplicar os numeros com funcao void.

using namespace std;

int vet[10];

void entrada () {
	for (int cont = 0; cont < 10; cont++) {
		cout << "Digite um numero" << endl;
		cin >> vet[cont];
	}
}

void imprimir () {
	for (int cont = 0; cont < 10; cont++) {
		cout << vet[cont] << endl;
	}
}

void processamento () {
	for (int cont = 0; cont < 10; cont++) {
		vet[cont] = vet[cont] * 2;
	}
}

void saida () {
	for (int cont = 0; cont < 10; cont++) {
		cout << vet[cont] << endl;
	}
}

int main () {

	entrada();
	
	imprimir();
	
	processamento();
	
	saida();

}
