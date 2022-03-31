#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Revisão de Ponteiro em C++

int main(void) {
	
	int *ptr;
	ptr = new int;
	*ptr = 10;
	
	printf ("%d", *ptr);
	delete ptr; // Libera a área alocada
	
	return 0;
}
