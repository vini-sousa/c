#include <iostream>

//Preencher um vetor e duplicar os numeros

using namespace std;

int main () {

	int vet[10];
	
	for (int cont = 0; cont < 10; cont++) {
		cout << "Digite um numero" << endl;
		cin >> vet[cont];
	}

	for (int cont = 0; cont < 10; cont++) {
		vet[cont] = vet[cont] * 2;
	}
	
	for (int cont = 0; cont < 10; cont++) {
		cout << vet[cont] << endl;
	}

}
