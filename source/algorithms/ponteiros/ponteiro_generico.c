#include <stdio.h>

int main()
{
    void *pto; //ponteiro genérico
    int *y, x = 10;

    pto = &x;
    y = &x;

    //endereço de int
    printf("Endereço em pto: %p \n", pto);
    pto = &y;
    //endereço de *int
    printf("Endereço em pto: %p \n", pto);

    pto = y;
    //endereço de int
    printf("Endereço em pto: %p \n\n", pto);

    printf("Conteudo aponto por pto '*(tipo)pto':  %d ", *(int *)pto);

    return 0;
}
