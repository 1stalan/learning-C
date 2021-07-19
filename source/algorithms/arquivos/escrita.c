#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arq = fopen("teste.txt", "w");
    if (arq == NULL)
        printf("Erro na arbertua do arquivo !\n");
    else
        printf("Arquivo aberto com sucesso !\n");

    char nome[20] = "Alan Santos";

    for (int i = 0; i < strlen(nome); i++)
        fputc(nome[i], arq);

    if ((arq != NULL) && (fclose(arq) == 0))
        printf("Arquivo fechado com sucesso !\n");

    return 0;
}
