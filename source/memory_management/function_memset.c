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

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    char str[50] = "Exemplo de string em C";
    printf("%s \n", str);
    memset(str, '!', 5);
    printf("%s \n", str);

    imprime(vet, 5);
    memset(vet, 0, 8); //substitui os 8 primeiros bytes

    imprime(vet, 5);
}