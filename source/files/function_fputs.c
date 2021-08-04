#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *arq;
    char x[10], txt[100] = {"hello "};
    
    strcpy(x, "world");
    strcat(txt, x);
    
    arq = fopen("teste.txt", "w");
    
    if(arq == NULL)
        printf("Falha na abertura do arquivo. \n");
    
    txt[0] = toupper(txt[0]); //primeira letra maíuscula
    
    fputs(txt, arq);
    printf("%s ", txt);
    fclose(arq);
    
    return 0;
}
