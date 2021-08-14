#include <stdio.h>
#include <stdlib.h>
struct aluno
{
    char nome[40];
    int matricula;
    int notas[]; // array flexível
};

int main()
{
    struct aluno *a;
    a = malloc(sizeof(struct aluno) + (sizeof(int) * 5));
    a->notas[5] = 3;
    printf("%d ", a->notas[5]);

    return 0;
}
