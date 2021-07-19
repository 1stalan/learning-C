#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *arq;
    char string[20];
    arq = fopen("teste.txt", "r");
    
    if(arq == NULL)
        printf("Falha na abertura do arquivo. \n");
    
    /* A função fgets lê uma string até encontrar uma nova linha (\n)
    ou até o número especificado na chamada da função  */
    
    char *result = fgets(string, 20, arq);
    
    printf("%s ", string);
    
    fclose(arq);
    
    return 0;
}
