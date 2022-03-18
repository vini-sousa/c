//Dadas as idades dos pacientes de uma clínica, informe a idade daquele mais idoso. 
//Considere que todas as idades são distintas e que número de pacientes é informado pelo usuário, no momento da execução do programa. 

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

	int pacientes,idade,contador,maior=0;

	printf("Informe o total de pacientes: ");
	scanf("%d",&pacientes);

		for(contador=1;contador<=pacientes;contador++){
		printf("Idade do paciente %d: ",contador);
		scanf("%d%*c",&idade); //%*c é o macete para desconsiderar o enter

		if(idade>maior){ //esse IF está dentro do FOR
			maior=idade; //*
		}
		}

	printf("\nA maior idade é %d.",maior);

	return (0);
}

// Se a primeira idade for 65 anos, como o maior inicia como 0, 65 será maior, e será considerado o novo valor de maior. Se ele digitar 40, 40 não é maior que 65, então ele não executa o comando dentro do if. Se digitar 87, 87 é maior que 65, então ele passa a considerar o maior como 87, e assim por diante. 