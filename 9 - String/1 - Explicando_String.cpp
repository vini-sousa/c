/* S�o sequ�ncias, conjuntos ou cadeira de caracteres diversos, sendo representados por aspas; 
Em C n�o existe um tipo STRING expl�cito; 
N�o � um tipo primitivo da linguagem; 
N�o existe uma palavra reservada que declare uma vari�vel do tipo STRING (como acontece em pascal, java, etc); 
Em C utiliza-se um vetor ou matriz do tipo CHAR para armazenar uma STRING; 
Mas qual o tamanho da STRING? Quando ela termina? 
Utilizar um caracter terminador: \0 (null = zero) -> forma que as fun��es reconhecem o fim da string

Sempre que o compilador encontra qualquer coisa entre aspas duplas, ele reconhece que se trata de uma string constante.

SCANF()
Esta instru��o l� cada caractere digitado e os armazena a partir do endere�o nome. 
O processo termina quando um caractere branco � encontrado.
Nesse ponto � inclu�do automaticamente o caractere \0 na pr�xima posi��o livre.
N�o � permitido ultrapassar o limite estipulado na cria��o do vetor/matriz. 
O espa�o para \0 deve ser previsto.
A fun��o scanf() entende um espa�o em branco como o t�rmino da entrada. 
Por isso, na sa�da, apenas o primeiro nome digitado � apresentado.
Observe esta instru��o novamente. Porque est� sendo usado nome e n�o &nome?
Neste caso, nome � equivalente a &nome[0] 
O nome de uma matriz � o seu endere�o inicial
Scanf() � muito utilizada para ler uma mistura de tipos de dados numa mesma instru��o.

GETS()
Usada para leitura de textos ;
Prop�sito: ler unicamente uma cadeia de caracteres do teclado enquanto a tecla ENTER n�o for pressionada;
Todos os caracteres digitados s�o armazenados, inclusive espa�os e tabula��es;
O caractere \0 � inclu�do no final;
Problemas com esta fun��o: pode armazenar caracteres al�m da capacidade definida;

FGETS()
O c�digo ao lado utiliza fgets. O vetor declarado tem 15 posi��es e somente essas 15 posi��es s�o preenchidas.
Na sa�da, observa-se que o nome digitado � maior que as 15 posi��es, e portanto, o restante do nome � desprezado. 

PUTS()
� o complemento da fun��o gets();
Prop�sito: imprimir uma �nica string por vez;
O endere�o da string deve ser enviado para putx como argumento; 

STRCPY()
Copia ou atribui o conte�do da string de origem para a string de destino. Ambas devem ter, no m�nimo, o mesmo tamanho;
Sintaxe:strcpy(string_destino,string_origem);

STRCAT()
Concatena o conte�do da string de origem ao final do conte�do da string de destino.
Essa fun��o n�o verifica se a primeira cadeia tem espa�o suficiente para que a segunda cadeia seja adicionada ao seu final.
Sintaxe: strcat(string_destino, string origem); 

STRCMP()
Compara o conte�do da string 1 com o conte�do da string 2;
Retorna um n�mero inteiro;
Se forem iguais, a fun��o retorna zero;
Se o n�mero retornado for menor que zero, ent�o a string1 � menor que a string2;
Se o n�mero retornado for maior que zero, ent�o astring1 � maior que a string2; 

STRLEN()
Recebe como argumento o endere�o de uma string e retorna o seu tamanho;
O comprimento do vetor/matriz da string deve ser um a mais que o inteiro retornado por strlen();
O terminador \0 n�o � contabilizado;
	
STRURP()
Converte o conte�do da string em letras mai�sculas 

STRLWR()
Converte o conte�do da string em letras min�sculas 

*/
