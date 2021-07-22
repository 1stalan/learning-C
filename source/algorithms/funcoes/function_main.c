#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int soma = 0;
    if (argc == 1)
    {
        printf("Programa sem parâmetros\n");
    }
    else
    {
        printf("Parametros do programa: '%s' \n", argv[0]);
        for (int i = 1; i < argc; i++)
        {
            soma += atoi(argv[i]);
            
            printf("Parametro %d: %s\n", i, argv[i]);
        }
        printf("Soma: %d ", soma);
    }

    return 0;
}
