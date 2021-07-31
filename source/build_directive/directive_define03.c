#include <stdio.h>
#include <stdlib.h>
#define maior(x, y) x > y ? x : y
int main()
{
    int x, y;
    printf("Digite 2 numeros: ");
    scanf("%d %d", &x, &y);
    printf("Maior valor: %d\n", maior(x, y));

    return 0;
}
