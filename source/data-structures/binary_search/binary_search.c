#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define N 10

bool bubble(int *vet, int tam)
{
    int aux;
    tam -= 1;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam - i; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
    return true;
}

bool busca_binaria(int *vet, int num)
{
    int i, m, f;
    i = 0;
    f = 10 - 1;
    bool achou = false;

    while (i <= f && !achou)
    {
        m = (i + f) / 2;
        if (vet[m] == num)
            achou = true;
        else if (vet[m] > num)
            f = m - 1;
        else
            i = m + 1;
    }

    if (achou)
    {
        printf("Numero [%d] encontrado  na posição: %d ", num, m);
        return true;
    }
    else
    {
        printf("Numero não encontrado !!!");
        return false;
    }
}

void imprime(int *vet, int tam)
{
    printf("[ ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d, ", vet[i]);
    }
    printf("]");
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "");
    int n, vet[N] = {6, 9, 3, 7, 10, 5, 4, 2, 8, 1};
    bubble(vet, N);
    imprime(vet, N);
    printf("\nBusca binária: ");
    scanf("%d", &n);
    busca_binaria(vet, n);

    return 0;
}
