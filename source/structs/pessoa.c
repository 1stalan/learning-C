#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char nome[50], rua[30];
    int idade, numero;
};

int main()
{
    struct pessoa ps[4] =
        {
            {"Alan", {"Joanésia "}, 28, 1},
            {"Regina Emanuelly", {"Rua Cedro Condomínio"}, 35, 959},
            {"Vicente Francisco", {"Rua Bela Flor"}, 40, 201},
            {"Caroline Sebastiana", {"Passagem K Gouveia"}, 22, 720},
        };

    strcat(ps[0].nome, " Santos");

    for (int i = 0; i < 4; i++)
    {
        printf("Nome: %s \n", ps[i].nome);
        printf("Idade: %d \n", ps[i].idade);
        printf("Rua: %s ", ps[i].rua);
        printf("N: %d", ps[i].numero);

        printf("\n\n");
    }

    return 0;
}