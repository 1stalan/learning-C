/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[20], vogais[11] = "aeiouAEIOU";
    int i, j, tam = 0;
    strcpy(nome, "Linguagem C");
    
    for (i = 0 ; i < strlen(nome); i ++ ) {
        for (j = 0 ; j < strlen(vogais); j++) {
            if(nome[i] == vogais[j]){
                tam ++;
                break;
            }
        }
        
    }
    printf("Nome: %s, Vogais: %d", nome, tam);
}
