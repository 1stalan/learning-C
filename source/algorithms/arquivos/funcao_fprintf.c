#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    char name[5] = {"alan"};

    arq = fopen("arquivo.txt", "w");

    fprintf(arq, "%s ", name);

    fclose(arq);
    return 0;
}
