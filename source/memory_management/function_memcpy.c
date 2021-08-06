#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(int *v, int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

struct pessoa
{
    char nome[50];
    int idade;
};

int main()
{
    struct pessoa p1 = {"ronaldo", 36};
    struct pessoa p2;
    int x[5] = {-1, -1, -1, -1, -1};
    int vet[5] = {1, 2, 3, 4, 5};

    imprime(x, 5);
    memcpy(x, vet, 4);
    imprime(x, 5);
    memcpy(x, vet, 20);
    imprime(x, 5);

    memcpy(&p2, &p1, sizeof(struct pessoa));
    printf("%s: %d", p2.nome, p2.idade);

    return 0;
}
