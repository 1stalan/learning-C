#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50] = "Exemplo de string em C";
    char *search;
    search = (char *)memchr(str, 'd', strlen(str));
    if (search != NULL)
        printf("Encontrado na posição: %d", (int)(search - str - 1));
    else
        printf("Não encontrado");

    return 0;
}
