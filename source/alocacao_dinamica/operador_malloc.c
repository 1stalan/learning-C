#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    //array de 50 inteiros
    int x,  *v = malloc(200);
    //array de 50 caracteres
    char *c = malloc(50);
    
    strcpy(c, "alan");
    printf("%s \n", c );
    
    free(c); // libera memória alocada 
    
    return 0;
}
