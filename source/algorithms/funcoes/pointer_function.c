#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y) { return x + y; }

int max(int a, int b) { return (a > b) ? a : b; }

int execute(int (*function)(int, int), int x, int y)
{
    // int (*function)(int, int);
    return function(x, y);
}

int main()
{
    int x, y, r;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Soma: %d\n", execute(sum, x, y));
    printf("Maior: %d\n", execute(max, x, y));

    return 0;
}
