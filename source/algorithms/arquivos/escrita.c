/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    FILE *arq = fopen("teste.txt", "w");
    if(arq == NULL)
        printf("Erro na arbertua do arquivo !\n");
    else
        printf("Arquivo aberto com sucesso !\n");
    char nome[20] = "alan";
     for (int i = 0; i < 4; i++) {
         fputc(nome[i], arq);
         
     }
    
    if((arq != NULL) && (fclose(arq) == 0)){
        printf("Arquivo fechado com sucesso !\n");
    }
    
    return 0;
}
