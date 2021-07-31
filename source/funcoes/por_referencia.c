#include <stdio.h>
#include <stdlib.h>

void soma(int *n)
{
    *n += 1;
    printf("Dentro da função: x = %d \n", *n);
}

int main()
{
    int x = 5;
    printf("Antes da função: x = %d \n", x);
    soma(&x);
    printf("Depois da função: x = %d \n", x);
    return 0;
}
