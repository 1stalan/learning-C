#include <stdio.h>

struct aluno {
    int mat;
    char name[50];
};

int main()
{
    struct aluno p;
    // p recebe os dados especificados
    p = (struct aluno) { 123,"Ronaldo"};
    printf("Matricula: %d\n", p.mat);
    printf("Nome: %s\n", p.name);
    
    int *v;
    // v recebe o endereço do array
    v = (int[3]) {11, 22, 33};
    // v = (int[]) {11, 22, 33};
    printf("%d ", v[0]);
    return 0;
}
