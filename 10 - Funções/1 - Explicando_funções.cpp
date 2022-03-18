/* Fun��es s�o blocos de c�digo que podem ser nomeados e chamados de dentro 
de um programa. 
printf(): fun��o que escreve na tela
scanf(): fun��o que l� o teclado

Facilitam a estrutura��o e reutiliza��o do c�digo. 
Estrutura��o: programas grandes e complexos s�o constru�dos bloco a bloco.
Reutiliza��o: o uso de fun��es evita a c�pia desnecess�ria de trechos de c�digo que 
realizam a mesma tarefa, diminuindo assim o tamanho do programa e a ocorr�ncia de erros

Ao chamar uma fun��o, o programa que a chamou � pausado at� que a fun��o termine a sua execu��o - por isso tem que ser declarada antes. 

O corpo da fun��o � a sua alma. 
� formado pelos comandos que a fun��o deve executar
Ele processa os par�metros (se houver), realiza outras tarefas e gera sa�das (se necess�rio)
Similar a cl�usula main()

De modo geral, evita-se fazer opera��es de leitura e escrita dentro de uma 
fun��o.
Uma fun��o � constru�da com o intuito de realizar uma tarefa espec�fica e bem-definida.
As opera��es de entrada e sa�da de dados (fun��es scanf() e printf()) devem ser feitas 
em quem chamou a fun��o (por exemplo, na main()).
Isso assegura que a fun��o constru�da possa ser utilizada nas mais diversas 
aplica��es, garantindo a sua generalidade

A declara��o de par�metros � uma lista de vari�veis juntamente com seus tipos: 
tipo1 nome1, tipo2 nome2, ... , tipoN nomeN
Jeito errado: int soma(int a, b)
Jeito correto: int soma(int a, int b)

Podemos criar uma fun��o que n�o recebe nenhum par�metro de entrada 
Isso pode ser feito de duas formas 
Podemos deixar a lista de par�metros vazia
Podemos colocar void entre os par�nteses

Uma fun��o pode ou n�o retornar um valor
Se ela retornar um valor, algu�m dever� receber este valor
Uma fun��o que retorna nada � definida colocando-se o tipo void como valor retornado
Podemos retornar qualquer valor v�lido em C
tipos pr�-definidos: int, char, float e double
tipos definidos pelo usu�rio: struct

O valor retornado pela fun��o � dado pelo comando return
Forma geral:
return valor ou express�o; 
return; 
Usada para terminar uma fun��o que n�o retorna valor
� importante lembrar que o valor de retorno fornecido tem que ser compat�vel 
com o tipo de retorno declarado para a fun��o.

Vari�veis locais s�o aquelas que s� t�m validade dentro do bloco no qual s�o 
declaradas.
Um bloco come�a quando abrimos uma chave e termina quando fechamos a chave.

Vari�veis globais s�o declaradas fora de todas as fun��es do programa. 
Elas s�o conhecidas e podem ser alteradas por todas as fun��es do programa.
Quando uma fun��o tem uma vari�vel local com o mesmo nome de uma vari�vel global 
a fun��o dar� prefer�ncia � vari�vel local. 
Evite vari�veis globais!

 */
