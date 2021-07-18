#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* a função realloc recebe o numero de elementos e o tamanho de cada 
    elemento a ser alocado */

    //array de 50 inteiros
    int *v = (int *)malloc(200);

    //array de 100 inteiros
    v = (int *)realloc(v, 400);

    free(v); // libera memória alocada

    return 0;
}
