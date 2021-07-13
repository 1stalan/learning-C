/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define L 3
#define C 2

int main()
{
    int linha, coluna;
    
    float notas[L][C] = {
        {7.5, 8.6},
        {6.5, 7.7},
        {5.6, 7.8},
    };
    
    for(linha = 0; linha < L; linha ++){
        printf("#%d | ", linha);
        for(coluna = 0; coluna < C; coluna ++){
            printf("%.1f | ", notas[linha][coluna]);
        }
        printf("\n");
    }
    
    printf("\nValor da linha 1 coluna 2: %.1f", notas[1][1]);
    
    return 0;
}
