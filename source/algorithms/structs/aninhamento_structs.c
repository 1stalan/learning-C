#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
    char rua[50];
    int numero;
    
};    
    
struct pessoa{
    char nome[20];
    char sexo[2];
    struct endereco ender;

};

int main()
{
    int i, j;
    struct pessoa p1[4]= {{"Alan Santos","M",{"Joanésia ", 1}},
                          {"Regina Emanuelly","F",{"Rua Cedro Condomínio", 959}},
                          {"Vicente Francisco","M",{"Rua Bela Flor", 201}},
                          {"Caroline Sebastiana","F",{"Passagem K Gouveia", 720}},
        
    };
                        
    for (i = 0; i < 4; i++) {
        
        printf("Nome: %s ", p1[i].nome);
        printf("\tEndereço: %s \tN: %d\n", p1[i].ender.rua, p1[i].ender.numero);
        
        
    }
}
