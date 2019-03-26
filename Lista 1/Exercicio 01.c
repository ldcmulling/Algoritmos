/* 1) Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos e passe esse vetor para uma função que vai ler os elementos desse vetor.
Depois, no programa principal, o vetor preenchido deve ser impresso.
Além disso, antes de finalizar o programa, deve-se liberar a área de memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

int* funcao (int n,int *v){
	int t=0;
	printf("Tamanho %d\n", n);
	for (;t<n;t++,v++){
		printf("digite o numero\n");
		scanf ("%d", &*v);
//		printf(" %d \n",*v);
//		printf(" %p \n",v);
	}
	return 0;	
}

int main(int argc, char **argv)
{
	int n,t;
	int *v,*v2;
	printf("digite o tamanho\n");
	scanf ("%d",&n);
	v= (int*)malloc (n*sizeof(int));
//	printf("alocado\n");
	funcao(n,v);
		
	for (t=0,v2=v;t<n;v2++,t++){
		printf("Posicao %d = ",t);
		printf(" %d \n",*v2);
//		printf(" %p \n",v2);
	}
	free (v);
	printf("Libera\n");

//	printf(" %d \n",*v);
//	printf(" %p \n",v);
//	printf(" %d \n",*v2);
//	printf(" %p \n",v2);
	
	return 0;
}

