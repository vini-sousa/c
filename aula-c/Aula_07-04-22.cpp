#include <iostream>
#include <locale.h>

using namespace std;

/* Faça um programa que receba uma nota na função Main,
acrescente um ponto a essa nota através de um procedimento
chamado "adicionaPonto". O procedimento vai receber a nota
e acrescentar o ponto. A impressão da nota, após acrescentar 
o ponto, será feito dentro da função Main */

void adicionaPonto(double *nota) {

	*nota = *nota + 1;
}

int main() {
	
	setlocale (LC_ALL,"Portuguese");
	
	double nota;
	
	cout << "Digite uma nota: ";
	cin >> nota;
	
	cout << "A sua nota é: " << nota << endl;
	
	adicionaPonto(&nota);
	
	cout << "A sua nota incrementa de um ponto é: " << nota << endl;
	
}
