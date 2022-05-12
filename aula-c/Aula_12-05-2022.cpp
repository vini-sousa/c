#include <iostream>

using namespace std;

int main () {
	
struct horario {
	int hora;
	int minuto;
	int segundo;
};	

struct horario horarioAula; //Declarando uma vari�vel da struct
horario *ptrConfigura;	//Ponteiro que aponta para hor�rio

ptrConfigura = &horarioAula;

horarioAula.hora = 18;
horarioAula.minuto = 30;
horarioAula.segundo = 10;

cout << "Hora NORMAL: " << horarioAula.hora << ":" << horarioAula.minuto << ":" << horarioAula.segundo << endl;

(*ptrConfigura).hora = 18; //� necess�rio colocar entre parenteses, pois a leitura do ponto vem antes que o asterisco
(*ptrConfigura).minuto = 30;
(*ptrConfigura).segundo = 10;

cout << "Hora PONTEIRO: " << (*ptrConfigura).hora << ":" << (*ptrConfigura).minuto << ":" << (*ptrConfigura).segundo << endl;

ptrConfigura -> hora = 18; //Para n�o precisar colocar entre parentese, usa -> para setar a v�riavel
ptrConfigura -> minuto = 30;
ptrConfigura -> segundo = 10;

cout << "Hora PONTEIRO2: " << ptrConfigura->hora << ":" << ptrConfigura->minuto << ":" << ptrConfigura->segundo << endl;

}
