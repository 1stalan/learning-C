#include <stdio.h>
#include <stdlib.h>
void imprime(int n, int *mat)
{
    for (int i = 0; i < n; i++)
    {
        mat[i] = 0;
        printf("%d ", mat[i]);
    }
}

int main()
{
    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    int v[N];

    imprime(N, v);

    return 0;
}
