#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30] = "alan dos santos oliveira";
    char tmp;
    int i, tam = strlen(nome);

    for (i = 0; i < tam / 2; i++)
    {
        tmp = nome[i];
        nome[i] = nome[tam - 1 - i];
        nome[tam - 1 - i] = tmp;
    }

    printf("Nome lido: %s, tamanho do nome: %d", nome, tam);

    return 0;
}
