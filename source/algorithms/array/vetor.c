#include <stdlib.h>
#include <stdlib.h>



void imprime_vetor(int *vet, int n)
{
    //arrays são sempre passados por referência
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("]");
}

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    imprime_vetor(vet, 5);

    return 0;
}