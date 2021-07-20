#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;

    arq = fopen("dados.txt", "wb");

    if (arq == NULL)
    {
        printf("Erro !!!");
        exit(1);
    };

    int total_gravado, vet[5] = {1, 2, 3, 4, 5};

    total_gravado = fwrite(vet, sizeof(int), 5, arq);

    if (total_gravado != 5)
    {
        printf("Erro !!!");
        exit(1);
    };

    fclose(arq);

    return 0;
}
