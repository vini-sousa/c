//Uma posição de uma matriz é referenciada por linha e coluna, faça um programa que leia uma matriz 4×4. 
//O programa deve perguntar o valor de cada posição da matriz, em seguida imprima esta matriz na tela.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat[4][4];
	int i,j;
	
	printf("Vamos preencher uma matriz? Informe os valores desejados em cada linha e coluna.\n");
	
	for (i=0;i<4;i++){ // for para preencher a matriz
		for(j=0;j<4;j++){
			printf("Digite o valor na posição linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}	
	
	for (i=0;i<4;i++){ //mostrar a matriz
		for(j=0;j<4;j++){
	printf("%d",mat[i][j]);
	}
printf("\n");
}
	return 0;
}
