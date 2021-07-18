#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* a função calloc recebe o numero de elementos e o tamanho de cada 
    elemento a ser alocado */
    
    //array de 50 inteiros
    int *v = (int *) calloc(200, 4);
    //array de 50 caracteres
    char *c = calloc(50, sizeof(char));
    
    v[0] = 28;
    
    strcpy(c, "alan");
    printf("%s \n", c );
    printf("%d \n", v[0]);
    
    free(c); // libera memória alocada 
    printf("%s \n", c );
    
    return 0;
}
