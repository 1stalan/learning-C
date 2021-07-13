/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    struct pessoa p1[4]= {{"Alan","M",{"Joanésia ", 01}},
                          {"Maria","F",{"Joanésia ", 01}},
                          {"Agnaldo","M",{"Joanésia ", 01}},
                          {"Amanda","F",{"Pedro Domingues de Oliveira ", 10}},
        
    };
                        
    for (i = 0; i < 4; i++) {
        
        printf("Nome: %s ", p1[i].nome);
        printf("\tEndereço: %s \tN: %d\n", p1[i].ender.rua, p1[i].ender.numero);
        
        
    }
}
