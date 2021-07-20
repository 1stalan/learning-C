#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    int tam, r, vet[5];

    arq = fopen("dados.txt", "rb");
    if (arq == NULL)
    {
        printf("Error !");
        exit(1);
    }

    r = fread(vet, sizeof(int), 5, arq);
    tam = sizeof(vet) / 4;

    if (r)
    {
        for (int i = 0; i <= tam - 1; i++)
        {
            printf("%d ", vet[i]);
        }
    }
    return 0;
}
