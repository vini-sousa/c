/* A ideia de um array ou “vetor” é bastante simples: criar um conjunto de variáveis do mesmo tipo utilizando apenas um nome.

É ideal para a criação de muitas variáveis. 

Em um array, os elementos são acessados especificando o índice desejado entre colchetes [ ]

A numeração começa sempre do zero: Isto significa que um array de 100 elementos terá índices de 0 a 99: 
notas[0], notas[1], notas[2], ..., notas[99]

Se o usuário digitar mais de 100 elementos em um array de 100 elementos, o programa tentará ler normalmente. Porém, o programa os armazenará em uma parte não reservada de memória, pois o espaço reservado para o array foi para somente 100 elementos. Isto pode resultar nos mais variados erros durante a execução do programa.

A declaração de um vetor é feita da seguinte forma:
<tipo_do_vetor> <nome_do_vetor> [<tamanho_do_vetor>];
int vet [20]
float vet2 [80]

Cada elemento do array tem todas as características de uma variável e pode aparecer em expressões e atribuições (respeitando os seus tipos)
notas[2] = x + notas[3];
if (notas[2] > 60)

Se você quiser fazer alguma operação com todos os elementos de um vetor, utilize um for para percorrer (Podemos usar um comando de repetição (for, while e do-while) para percorrer um array): 
int soma = 0;
for (i=0; i<100; i++){
	soma = soma + notas [i]}

Observação importante:
Na declaração de vetor, o que está entre colchetes deve ser um número constante:
int n = 20;
float vet[n]; 

Características básicas de um Array 
Estrutura homogênea, isto é, é formado por elementos do mesmo tipo. 
Todos os elementos da estrutura são igualmente acessíveis, isto é, o tempo e o tipo de procedimento para acessar qualquer um dos elementos do array são iguais.
Cada elemento do array tem um índice próprio segundo sua posição no conjunto
Um índice é um número natural. 
O índice da primeira casa é sempre zero.

Esta inicialização pode ser feita apenas na declaração
	int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
Se o num de elementos é menor que o tamanho do  vetor, os elementos restante são inicializados com zero
Podemos omitir o tamanho do vetor quando ele é inicializado 
	int vetor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
Sem inicialização o tamanho é obrigatório.

Ao desenvolver seus programas com vetores, preste atenção com relação aos seguintes detalhes: 
índices inválidos:  tome muito cuidado, especialmente dentro de um while ou for, de não utilizar índices negativos ou maiores que o tamanho máximo do vetor. 
Definição do tamanho do vetor se faz na declaração do vetor. O tamanho dele é constante, só mudando a sua declaração é que podemos alterar o seu tamanho. Isso significa que podemos estar “desperdiçando” algum espaço da memória que fica no final do vetor. Não cometa o erro de ler n, onde n seria o tamanho do vetor, e tentar “declarar” o vetor em seguida.

Para criar variáveis que recebam palavras usa-se o conceito de vetor.
Ex: char nome[21], sobrenome[21];
Para representar Strings utilizamos o %s.
Para ler Strings utilizamos o scanf()

Receber strings do usuário com a função gets()
A sintaxe é: gets( nome_da_string );
Como exibir strings com a função printf()
A sintaxe é: printf("\nNome completo: %s %s\n", nome, sobrenome);
Como exibir strings com a função puts()
A sintaxe é: puts(nome);


