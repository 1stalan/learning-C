#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char name[10], lastname[10];
    int age;
};

int main()
{
    FILE *arq;
    char name[20];

    struct pessoa p;

    arq = fopen("arquivo.txt", "rb");

    fseek(arq, 1 * sizeof(struct pessoa), SEEK_SET);

    // rewind(arq); //volta para o início do arquivo

    fread(&p, sizeof(struct pessoa), 1, arq);

    printf("Nome: %s %s \nIdade: %d", p.name, p.lastname, p.age);

    fclose(arq);
    return 0;
}
