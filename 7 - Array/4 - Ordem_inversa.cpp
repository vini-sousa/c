// Um programa que l� dez n�meros e os imprime em ordem inversa

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n[10];
	int i;
	
	printf("Didite 10 n�meros.\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %d� n�mero: ",i+1);
		scanf("%d",&n[i]);
	}
	
	printf("A ordem inversa �: ");
	for(i=9;i>=0;i--){
		printf("%d ",n[i]);
	}
	
	return 0;
}
