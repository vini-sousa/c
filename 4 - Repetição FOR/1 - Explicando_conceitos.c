/* Um acumulador é uma variável que ocorre em ambos os lados de uma atribuição e que, antes de ser usada pela primeira vez, é iniciada com um valor específico. Por exemplo, efetuando a atribuição a = 3, iniciamos a variável a com o valor 3; então, quando a atribuição a = a + 2 é executada, essa variável passa a ter o valor 5. Note que, se o valor inicial de a não é definido pela primeira atribuição, não é possível determinar o seu valor após a execução da segunda atribuição.

Pelo fato de operações com acumuladores serem tão comuns em programação, a linguagem C oferece um conjunto de operadores aritméticos de atribuição que permitem escrever expressões com acumuladores de uma forma mais compacta. Por exemplo, usando o operador aritmético de atribuição +=, a operação de atribuição a = a + 2 pode ser codificada como a += 2 e a operação de atribuição a = a + 2 * b pode ser codificada como a += 2 * b.

Um contador é um tipo de acumulador cujo valor aumenta, ou diminui, de 1 em 1.

Operadores de incremento e decremento podem ser usados na forma prefixa (++c e --c) ou posfixa (c++ e c--). Na forma prefixa, o valor da variável é modificado e depois usado; na forma posfixa, o valor da variável é usado e depois modificado. Assim, por exemplo, se c vale 3, a operação d = ++c armazena 4 em d; enquanto a operação d = c++ armazena 3 em d. Em ambos os casos, o valor final de c é 4.

A estrutura de repetição contada (FOR) serve para repetir a execução de um comando por um determinado número de vezes. Para saber quando o total de repetições desejadas já foi atingido, a estrutura de repetição usa um contador. Nessa estrutura:
 - Primeiramente o contador é iniciado com um valor específico.
 - Depois o contador é testado: se o total de repetições ainda não foi atingido, a repetição continua; caso contrário, ela termina. 
A cada nova repetição o contador é alterado.

A estrutura de repetição contada em linguagem C é codificada da seguinte forma:
for (inicio;teste;altera)
    comando a ser repetido;

Note que para executar mais de um comando, é preciso usar um par de chaves.
for (inicio;teste;altera){
    comando 1;
    comando n; 
    }
*/