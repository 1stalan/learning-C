#include <stdio.h>
#include <stdlib.h>

void imprime()
{
    static x = 0;
    printf("%d\n", x++);
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        imprime();
    }
}