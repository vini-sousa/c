#include <iostream>

using namespace std;

// Aula de Ponteiro

void trocaValores (int *a, int *b) {
     
    int aux;
    
    aux = *a;
    *a = *b;
    *b = aux;
    
}
            
int main () {
	
	int a,b;
    
    cout << "Digite o valor de A: " << endl;
    cin >> a; 
    
    cout << "Digite o valor de B: " << endl;
    cin >> b;
	
	cout << "VALORES ANTES DA TROCA: " << endl;
	cout << "O valor de A é: " << a << endl;
	cout << "O valor de B é: " << b << endl;

	trocaValores(&a,&b);
	
	cout << "VALORES DEPOIS DA TROCA: " << endl;
	cout << "O valor de A é: " << a << endl;
	cout << "O valor de B é: " << b << endl;
	
}
