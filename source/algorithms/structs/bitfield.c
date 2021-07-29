#include <stdio.h>
#include <stdlib.h>
struct status
{
    unsigned int ligado : 1;
    signed int valor : 4;
    unsigned int : 3;
};

void check_status(struct status s)
{
    if (s.ligado == 1)
        printf("ligado\n");
    if (s.ligado == 0)
        printf("desligado\n");
}

int main()
{
    struct status estado;
    estado.ligado = 1;
    check_status(estado);

    return 0;
}
