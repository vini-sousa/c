#include <iostream>

using namespace std;
	
struct Aluno {
	int matricula;
	int nota;
};	

int main () {
	
Aluno Aluno1;
Aluno *ptrAluno;

ptrAluno = &Aluno1;

ptrAluno -> matricula = 202200;
ptrAluno -> nota = 9;

cout << "Matricula: " << ptrAluno->matricula << endl;
cout << "Nota: " << ptrAluno->nota << endl;

}
