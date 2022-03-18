// fatorial

#include<stdio.h>

int main(){

	int num, f;

	printf("Digite um valor: ");
	scanf("%d",&num);
	
	for(f=1;num>1;num=num-1){
		f=f*num;
	}
	
	printf("fatorial: %d\n",f);
	
	return 0;
}

/* Teste de mesa: supondo que o usário escolheu o num = 4
f=1, 4>1 (ok, continua dentro do for), será alterado após a execução para 4=4-1=3
1
f=1*4=4
após a alteração para num=3
f=4*3=12
após a alteração para num=2
f=12*2=24
após a alteração para num=1
f=24*1=24

Ou seja, houve a multiplicação de: 1*4*3*2*1=24 que é o fatorial de 4. */