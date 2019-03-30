/* 2) Faça uma função que receba um valor n e crie dinamicamente um vetor de n elementos e retorne um ponteiro. 
 * Crie uma função que receba um ponteiro para um vetor e um valor n e imprima os n elementos desse vetor. 
 * Construa também uma função que receba um ponteiro para um vetor e libere esta área de memória. 
 * Ao final, crie uma função principal que leia um valor n e chame a função criada acima. 
 * Depois, a função principal deve ler os n elementos desse vetor.
 * Então, a função principal deve chamar a função de impressão dos n elementos do vetor criado e, 
 * finalmente, liberar a memória alocada através da função criada para liberação. 3*/

#include <stdio.h>
#include <stdlib.h>

int* funcaoN(int n){
	int *numeros,*nu,c=0;
	numeros = (int*)malloc (n*sizeof (int));
	nu=numeros;
	for (;c<n;c++,nu++){
		*nu= rand ()%100;
//		printf("%d\n", *nu);
//		printf("%p\n", nu);
	}
	return numeros;	
}

void imprime(int *numero,int n){
	int c=0;
	for(;c<n;c++,numero++){
		printf("%d\n", *numero);
//		printf("%p\n", numero);
	}
}

void apaga(int* numero){
	free (numero);
}

void chama(int n, int* numero){
	printf("Digite o Tamannho do vetor\n");
	scanf ("%d", & n );
	numero = funcaoN(n);
	imprime(numero,n);
	apaga(numero);
}

int main(int argc, char **argv)
{
	int n=10;
	int *numero;
	numero = funcaoN(n);
	imprime(numero,n);
	apaga(numero);
	chama(n,numero);
	printf("completa\n");
	
	return 0;
}
