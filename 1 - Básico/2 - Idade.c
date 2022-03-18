//Solicite ao usuário que digite o ano de seu nascimento, armazene o valor digitado em uma variável e em seguida imprima na saída padrão a sua idade.

#include<stdio.h>

int main(){

	int ano,idade; /*as variáveis devem ser declaradas antes de serem utilizadas, com a especificação do tipo de conteúdo válido
    diferencia maiúscula de minúscula 
    int é de inteiro: valores sem decimais e sem sinais (negativo)
    float: valores decimais
    char: caracteres
    double: diferente do int e float que sã 4 bytes, esse são 8 bytes. */

	printf("Qual o seu ano de nascimento?: ");

	scanf("%d",&ano); /*scanf é a forma de armazenar a variável. Armazena um só valor por vez.  Como é uma variável inteira (um número) é utilizado o "%d". NÃO ESQUECER O & ANTES DO NOME DA VARIÁVEL!!!
    %d ou %i para inteiros.
    %f para float.
    %lf para double.
    %c para char. */


	idade=2022-ano;

	printf("Sua idade eh: %d",idade); //para resolver a questão de acentuação gráfica é necessário incluir uma biblioteca, veremos logo adiante. 

	return 0;
}