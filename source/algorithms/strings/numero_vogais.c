#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[20], vogais[11] = "aeiouAEIOU";
    int i, j, tam = 0;
    strcpy(nome, "Linguagem C");

    for (i = 0; i < strlen(nome); i++)
    {
        for (j = 0; j < strlen(vogais); j++)
        {
            if (nome[i] == vogais[j])
            {
                tam++;
                break;
            }
        }
    }
    printf("Nome: %s, Vogais: %d", nome, tam);
}
