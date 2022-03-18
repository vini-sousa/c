/* As matrizes são compostas por linhas e colunas, ou seja, vetores dentro de vetores.

Já conhecemos que na Linguagem C a primeira posição de um vetor é identificada como 0(zero).
Assim também acontece com as matrizes, ou seja, linhas e colunas iniciam em zero(0).

A estrutura é: 
tipo nome_matriz [linhas][colunas]

E para percorrer é um for dentro de um for. 

Variáveis homogêneas bidimensionais ou multidimensionais
Pode ter até 12 dimensões de acordo com o padrão ANSI
Para cada dimensão, um índice deve ser usado 
DECLARAÇÃO
float x[2][6]; //uma matriz com duas linhas e seis colunas
char mat[4][3]; //uma matriz com quatro linhas e três colunas
float y[2][4][3]; //uma matriz com duas linhas, quatro colunas e três profundidades.

ATRIBUIÇÃO
X[1][4] = 5; //atribui o valor 5 ao espaço identificado pelo indice 1 (linha 2) e índice 4 (coluna 5)
Mat*3+*2+ = ‘d’; //atribui o valor d à quarta linha e à terceira coluna
Y[0][3][1] = 12; //atribui o valor 12 à primeira linha, quarta coluna e segunda profundidade. 

Preenche primeiro todas as colunas da linha 0.
Depois todas as colunas da linha 1.
E assim por diante. 

*/
