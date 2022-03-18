/* São sequências, conjuntos ou cadeira de caracteres diversos, sendo representados por aspas; 
Em C não existe um tipo STRING explícito; 
Não é um tipo primitivo da linguagem; 
Não existe uma palavra reservada que declare uma variável do tipo STRING (como acontece em pascal, java, etc); 
Em C utiliza-se um vetor ou matriz do tipo CHAR para armazenar uma STRING; 
Mas qual o tamanho da STRING? Quando ela termina? 
Utilizar um caracter terminador: \0 (null = zero) -> forma que as funções reconhecem o fim da string

Sempre que o compilador encontra qualquer coisa entre aspas duplas, ele reconhece que se trata de uma string constante.

SCANF()
Esta instrução lê cada caractere digitado e os armazena a partir do endereço nome. 
O processo termina quando um caractere branco é encontrado.
Nesse ponto é incluído automaticamente o caractere \0 na próxima posição livre.
Não é permitido ultrapassar o limite estipulado na criação do vetor/matriz. 
O espaço para \0 deve ser previsto.
A função scanf() entende um espaço em branco como o término da entrada. 
Por isso, na saída, apenas o primeiro nome digitado é apresentado.
Observe esta instrução novamente. Porque está sendo usado nome e não &nome?
Neste caso, nome é equivalente a &nome[0] 
O nome de uma matriz é o seu endereço inicial
Scanf() é muito utilizada para ler uma mistura de tipos de dados numa mesma instrução.

GETS()
Usada para leitura de textos ;
Propósito: ler unicamente uma cadeia de caracteres do teclado enquanto a tecla ENTER não for pressionada;
Todos os caracteres digitados são armazenados, inclusive espaços e tabulações;
O caractere \0 é incluído no final;
Problemas com esta função: pode armazenar caracteres além da capacidade definida;

FGETS()
O código ao lado utiliza fgets. O vetor declarado tem 15 posições e somente essas 15 posições são preenchidas.
Na saída, observa-se que o nome digitado é maior que as 15 posições, e portanto, o restante do nome é desprezado. 

PUTS()
É o complemento da função gets();
Propósito: imprimir uma única string por vez;
O endereço da string deve ser enviado para putx como argumento; 

STRCPY()
Copia ou atribui o conteúdo da string de origem para a string de destino. Ambas devem ter, no mínimo, o mesmo tamanho;
Sintaxe:strcpy(string_destino,string_origem);

STRCAT()
Concatena o conteúdo da string de origem ao final do conteúdo da string de destino.
Essa função não verifica se a primeira cadeia tem espaço suficiente para que a segunda cadeia seja adicionada ao seu final.
Sintaxe: strcat(string_destino, string origem); 

STRCMP()
Compara o conteúdo da string 1 com o conteúdo da string 2;
Retorna um número inteiro;
Se forem iguais, a função retorna zero;
Se o número retornado for menor que zero, então a string1 é menor que a string2;
Se o número retornado for maior que zero, então astring1 é maior que a string2; 

STRLEN()
Recebe como argumento o endereço de uma string e retorna o seu tamanho;
O comprimento do vetor/matriz da string deve ser um a mais que o inteiro retornado por strlen();
O terminador \0 não é contabilizado;
	
STRURP()
Converte o conteúdo da string em letras maiúsculas 

STRLWR()
Converte o conteúdo da string em letras minúsculas 

*/
