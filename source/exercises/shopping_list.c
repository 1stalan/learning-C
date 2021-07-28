#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    char prod[30];
    float qtd, preco, total = 0.0;
    arq = fopen("compras.txt", "r");
    if(arq == NULL){
        printf("Error !");
        exit(1);
    }
    while(!feof(arq)){
        fscanf(arq, "%s %f %f",prod, &qtd, &preco);
        total += qtd * preco;
    }
    
    printf("Total = %f", total);
    

    return 0;
}
