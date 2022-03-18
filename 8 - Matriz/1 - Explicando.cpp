/* As matrizes s�o compostas por linhas e colunas, ou seja, vetores dentro de vetores.

J� conhecemos que na Linguagem C a primeira posi��o de um vetor � identificada como 0(zero).
Assim tamb�m acontece com as matrizes, ou seja, linhas e colunas iniciam em zero(0).

A estrutura �: 
tipo nome_matriz [linhas][colunas]

E para percorrer � um for dentro de um for. 

Vari�veis homog�neas bidimensionais ou multidimensionais
Pode ter at� 12 dimens�es de acordo com o padr�o ANSI
Para cada dimens�o, um �ndice deve ser usado 
DECLARA��O
float x[2][6]; //uma matriz com duas linhas e seis colunas
char mat[4][3]; //uma matriz com quatro linhas e tr�s colunas
float y[2][4][3]; //uma matriz com duas linhas, quatro colunas e tr�s profundidades.

ATRIBUI��O
X[1][4] = 5; //atribui o valor 5 ao espa�o identificado pelo indice 1 (linha 2) e �ndice 4 (coluna 5)
Mat*3+*2+ = �d�; //atribui o valor d � quarta linha e � terceira coluna
Y[0][3][1] = 12; //atribui o valor 12 � primeira linha, quarta coluna e segunda profundidade. 

Preenche primeiro todas as colunas da linha 0.
Depois todas as colunas da linha 1.
E assim por diante. 

*/
