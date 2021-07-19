#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arq = fopen("teste.txt", "r");
    if (arq == NULL)
        printf("Erro na arbertua do arquivo !\n");
    else
        printf("Arquivo aberto com sucesso !\n");

    printf("======================================\n");
    char nome = fgetc(arq);

    // while (nome != EOF)
    while (!feof(arq))
    {
        printf("%c", nome);
        nome = fgetc(arq);
    }
    printf("\n======================================\n");

    if ((arq != NULL) && (fclose(arq) == 0))
    {
        printf("Arquivo fechado com sucesso !\n");
    }

    return 0;
}
