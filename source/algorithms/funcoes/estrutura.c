#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char nome[50], sobrenome[30];
};

void atribui(struct pessoa *p)
{
    strcpy((*p).nome, "alan");
    strcpy((*p).sobrenome, " santos");
}

void imprime_pessoa(struct pessoa *p)
{
    printf("Nome: %s %s \n", p->nome, p->sobrenome);
    printf("\n\n");
}

int main()
{
    struct pessoa ps;
    atribui(&ps);
    imprime_pessoa(&ps);

    return 0;
}