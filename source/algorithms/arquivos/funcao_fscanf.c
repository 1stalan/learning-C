#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    char name[20];

    arq = fopen("arquivo.txt", "r");

    fscanf(arq, "%s ", name);
    printf("%s ", name);

    fclose(arq);
    return 0;
}
