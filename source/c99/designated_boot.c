#include <stdio.h>

struct aluno {
    int mat;
    char name[50];
};

int main()
{
    struct aluno p = {.mat = 123, .name = "Ronaldo"};
    printf("Matricula: %d\n", p.mat);
    printf("Nome: %s\n", p.name);
    return 0;
}
