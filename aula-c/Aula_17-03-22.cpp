#include <iostream>
#include <string.h>

using namespace std;

struct Jogador {
    string nome;
    int velocidade;
    int habilidade;
};

Jogador player1;

void inserir () {
	
	cout << "Digite o nome do jogador: " << endl;
	cin >> player1.nome;
	
	cout << "Digite a velocidade do jogador: " << endl;
	cin >> player1.velocidade;
	
	cout << "Digite a habilidade do jogador: " << endl;
	cin >> player1.habilidade;
}

void mostrar (Jogador player1) {
	
    cout << "Jogador: " << player1.nome << endl 
	     << "Velocidade: " << player1.velocidade << endl
	     << "Habilidade: " << player1.habilidade;
}

int main() {
    
	inserir();
	mostrar(player1);
}
