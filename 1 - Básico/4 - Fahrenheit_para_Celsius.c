//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius

#include<stdio.h>

int main(){

	float c,f;

	printf("Qual a temperatura em Fahrenheit?: ");
	scanf("%f",&f);

	c=(5*(f-32))/9; //atenção no preenchimento das fórmulas, ele vai seguir a precedência matemática. Primeiro o que está entre os parênteses, depois multiplicação e divisão, depois soma e subtração. 

	printf("O valor da temperatura em Celsius eh: %f",c);

	return 0;	
}

/* Os operadores são: 
+ adição
- subtração
* multiplicação
/ divisão
% resto da divisão inteira
++ incremento, é o equivalente a x=x+1 (x++ ou ++x)
-- decremento, é o equivalente a x=x-1 (x-- ou --x)
x += y (x = x+y)
x -= y (x = x-y)
x *= y (x = x*y)
x /= y (x = x/y)
x %= y (x = x%y)
> maior que
>= maior ou igual a que
< menor que
<= menor ou igual a que
== igual a 
!= diferente
&& e 
|| ou 
! não */
