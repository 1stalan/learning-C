#include <stdio.h>
#include <stdlib.h>
#define L 3 // linha
#define C 2 // coluna

void imprime_matriz(float mat[][C], int n)
{
    /* array com mais dimensões, precisa da informação das outras dimensões */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("[%.1f] ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    float notas[L][C] = {
        {7.5, 8.6},
        {6.5, 7.7},
        {5.6, 7.8},
    };

    imprime_matriz(notas, L);

    return 0;
}
