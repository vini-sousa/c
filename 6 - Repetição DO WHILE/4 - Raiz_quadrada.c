//Dado um número real não negativo, informe sua raiz quadrada

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

	float numero, raiz_quadrada;

	do{
		printf("Informe um número não negativo: ");
		scanf("%f",&numero);

	} while (numero<0);

	raiz_quadrada=sqrt(numero);

	printf("\nRaiz quadrada de %.2f: %.2f\n",numero,raiz_quadrada);
    
	return (0);
}