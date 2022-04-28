#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

// Revisão de Struct em C++

struct Alunos {

int matricula;
string nome;
float nota1, nota2, media;
};

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	const int TAM = 1;
	
	Alunos vetAluno[TAM];
	
	for (int i = 0; i < TAM; i++) {
		
		cout << "Digite a matrícula: ";
		cin >> vetAluno[i].matricula;
		
		cout << "Digite o nome: ";
		cin.ignore(); // Limpa o caracter de nova linha \n do buffer de entrada std::cin
    	getline(cin, vetAluno[i].nome); // Lê o dado de entrada até que uma nova linha seja detectada
		
		cout << "Digite a primeira nota: ";
		cin >> vetAluno[i].nota1;
		
		cout << "Digite a segunda nota: ";
		cin >> vetAluno[i].nota2;
		
		vetAluno[i].media = (vetAluno[i].nota1 + vetAluno[i].nota2) / 2;
	}
	
	for (int i = 0; i < TAM; i++) {
		cout << "Matrícula: " << vetAluno[i].matricula << endl;
		cout << "Nome: " << vetAluno[i].nome << endl;
		cout << "Média: " << vetAluno[i].media << endl;
	}
	
	return 0;
	
}
