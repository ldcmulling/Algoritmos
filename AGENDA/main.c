#include <stdio.h>
#include <stdlib.h>

struct pessoa{
char nome[20];
int idade, telefone;
};




int main(int argc, char **argv){
    void *buffer;
    int *cp, *c;
    float *a;
    struct pessoa *pet;

    buffer=malloc(2*sizeof(int)+sizeof(float)+sizeof(struct pessoa)**cp);



	return 0;
}
