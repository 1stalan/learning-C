#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int soma_int(int n, ...)
{
    va_list lista;
    int i, s = 0;
    va_start(lista, n);
    for (int i = 1; i <= n; i++)
        s += va_arg(lista, int);

    va_end(lista);
    return s;
}

int main()
{
    int soma;
    // o primeiro valor indica a quantidade de parâmetros que essa função vai receber
    soma = soma_int(2, 2, 4);
    printf("Soma 2 parametros: %d\n", soma);
    soma = soma_int(3, 2, 4, 6);
    printf("Soma 3 parametros: %d\n", soma);
    soma = soma_int(4, 2, 4, 6, 8);
    printf("Soma 4 parametros: %d\n", soma);

    return 0;
}
