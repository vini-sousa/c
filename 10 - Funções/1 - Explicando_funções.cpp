/* Funções são blocos de código que podem ser nomeados e chamados de dentro 
de um programa. 
printf(): função que escreve na tela
scanf(): função que lê o teclado

Facilitam a estruturação e reutilização do código. 
Estruturação: programas grandes e complexos são construídos bloco a bloco.
Reutilização: o uso de funções evita a cópia desnecessária de trechos de código que 
realizam a mesma tarefa, diminuindo assim o tamanho do programa e a ocorrência de erros

Ao chamar uma função, o programa que a chamou é pausado até que a função termine a sua execução - por isso tem que ser declarada antes. 

O corpo da função é a sua alma. 
É formado pelos comandos que a função deve executar
Ele processa os parâmetros (se houver), realiza outras tarefas e gera saídas (se necessário)
Similar a cláusula main()

De modo geral, evita-se fazer operações de leitura e escrita dentro de uma 
função.
Uma função é construída com o intuito de realizar uma tarefa específica e bem-definida.
As operações de entrada e saída de dados (funções scanf() e printf()) devem ser feitas 
em quem chamou a função (por exemplo, na main()).
Isso assegura que a função construída possa ser utilizada nas mais diversas 
aplicações, garantindo a sua generalidade

A declaração de parâmetros é uma lista de variáveis juntamente com seus tipos: 
tipo1 nome1, tipo2 nome2, ... , tipoN nomeN
Jeito errado: int soma(int a, b)
Jeito correto: int soma(int a, int b)

Podemos criar uma função que não recebe nenhum parâmetro de entrada 
Isso pode ser feito de duas formas 
Podemos deixar a lista de parâmetros vazia
Podemos colocar void entre os parênteses

Uma função pode ou não retornar um valor
Se ela retornar um valor, alguém deverá receber este valor
Uma função que retorna nada é definida colocando-se o tipo void como valor retornado
Podemos retornar qualquer valor válido em C
tipos pré-definidos: int, char, float e double
tipos definidos pelo usuário: struct

O valor retornado pela função é dado pelo comando return
Forma geral:
return valor ou expressão; 
return; 
Usada para terminar uma função que não retorna valor
É importante lembrar que o valor de retorno fornecido tem que ser compatível 
com o tipo de retorno declarado para a função.

Variáveis locais são aquelas que só têm validade dentro do bloco no qual são 
declaradas.
Um bloco começa quando abrimos uma chave e termina quando fechamos a chave.

Variáveis globais são declaradas fora de todas as funções do programa. 
Elas são conhecidas e podem ser alteradas por todas as funções do programa.
Quando uma função tem uma variável local com o mesmo nome de uma variável global 
a função dará preferência à variável local. 
Evite variáveis globais!

 */
