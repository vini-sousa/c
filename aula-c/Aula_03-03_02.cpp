#include <iostream>

//Preencher um vetor

using namespace std;

int main () {

	int vet[10];
	int cont;
	
	for (cont = 0; cont < 10; cont++){
		cout << "Digite um numero" << endl;
		cin >> vet[cont];
	}
	
	for (cont = 0; cont < 10; cont++){
		cout << vet[cont] << endl;
	}

}
