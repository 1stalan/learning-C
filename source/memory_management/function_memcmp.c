#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int idade;
};

int main()
{
    struct pessoa p1 = {"ronaldo", 36};
    struct pessoa p2 = {"ronaldO", 36};
    int re;
    re = memcmp(&p1, &p2, sizeof(struct pessoa));
    if (re == 0)
        printf("Iguais\n");
    else if (re > 0)
        printf("P1 e maior do que P2");
    else
        printf("P2 e maior do que P1");

    return 0;
}
