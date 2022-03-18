/* A ideia de um array ou �vetor� � bastante simples: criar um conjunto de vari�veis do mesmo tipo utilizando apenas um nome.

� ideal para a cria��o de muitas vari�veis. 

Em um array, os elementos s�o acessados especificando o �ndice desejado entre colchetes [ ]

A numera��o come�a sempre do zero: Isto significa que um array de 100 elementos ter� �ndices de 0 a 99: 
notas[0], notas[1], notas[2], ..., notas[99]

Se o usu�rio digitar mais de 100 elementos em um array de 100 elementos, o programa tentar� ler normalmente. Por�m, o programa os armazenar� em uma parte n�o reservada de mem�ria, pois o espa�o reservado para o array foi para somente 100 elementos. Isto pode resultar nos mais variados erros durante a execu��o do programa.

A declara��o de um vetor � feita da seguinte forma:
<tipo_do_vetor> <nome_do_vetor> [<tamanho_do_vetor>];
int vet [20]
float vet2 [80]

Cada elemento do array tem todas as caracter�sticas de uma vari�vel e pode aparecer em express�es e atribui��es (respeitando os seus tipos)
notas[2] = x + notas[3];
if (notas[2] > 60)

Se voc� quiser fazer alguma opera��o com todos os elementos de um vetor, utilize um for para percorrer (Podemos usar um comando de repeti��o (for, while e do-while) para percorrer um array): 
int soma = 0;
for (i=0; i<100; i++){
	soma = soma + notas [i]}

Observa��o importante:
Na declara��o de vetor, o que est� entre colchetes deve ser um n�mero constante:
int n = 20;
float vet[n]; 

Caracter�sticas b�sicas de um Array 
Estrutura homog�nea, isto �, � formado por elementos do mesmo tipo. 
Todos os elementos da estrutura s�o igualmente acess�veis, isto �, o tempo e o tipo de procedimento para acessar qualquer um dos elementos do array s�o iguais.
Cada elemento do array tem um �ndice pr�prio segundo sua posi��o no conjunto
Um �ndice � um n�mero natural. 
O �ndice da primeira casa � sempre zero.

Esta�inicializa��o�pode�ser�feita�apenas�na�declara��o
	int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
Se�o�num�de�elementos��menor�que�o�tamanho�do� vetor,�os�elementos�restante�s�o�inicializados�com�zero
Podemos�omitir�o�tamanho�do�vetor�quando�ele�� inicializado 
	int vetor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
Sem�inicializa��o�o�tamanho��obrigat�rio.

Ao desenvolver seus programas com vetores, preste aten��o com rela��o aos seguintes detalhes: 
�ndices inv�lidos:  tome muito cuidado, especialmente dentro de um while ou for, de n�o utilizar �ndices negativos ou maiores que o tamanho m�ximo do vetor. 
Defini��o do tamanho do vetor se faz na declara��o do vetor. O tamanho dele � constante, s� mudando a sua declara��o � que podemos alterar o seu tamanho. Isso significa que podemos estar �desperdi�ando� algum espa�o da mem�ria que fica no final do vetor. N�o cometa o erro de ler n, onde n seria o tamanho do vetor, e tentar �declarar� o vetor em seguida.

Para criar vari�veis que recebam palavras usa-se o conceito de vetor.
Ex: char nome[21], sobrenome[21];
Para representar Strings utilizamos o %s.
Para ler Strings utilizamos o scanf()

Receber strings do usu�rio com a fun��o�gets()
A sintaxe �: gets( nome_da_string );
Como exibir strings com a fun��o printf()
A sintaxe �: printf("\nNome completo: %s %s\n", nome, sobrenome);
Como exibir strings com a fun��o puts()
A sintaxe �: puts(nome);


