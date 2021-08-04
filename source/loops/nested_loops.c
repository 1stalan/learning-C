#include <stdio.h>
#define M 9

int main()
{
    int i, j;
    j = i = 0;
    printf("\n========== Comando For e While =======\n");
    while (i < M)
    {
        for (j = 0; j < M; j++)
        {
            if (i == j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
        i++;
    }

    printf("\n========== Comando While =============\n");
    j = i = 0;
    while (i < M)
    {
        j = 0;
        while (j < M)
        {
            if (i == j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\n========== Comando For ===============\n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (i == j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        } //Segundo for
        printf("\n");
    } //Primeiro for

    return 0;
}
