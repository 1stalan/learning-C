/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **p;
    int i, j, N = 6;
    p = (int **) malloc(N * sizeof(int *));
    
    for (int i = 0; i < N; i++) {
        /* code */
        p[i] = (int *) malloc(N * sizeof(int));
        for (int j = 0; j < N; j++) {
            /* code */
            printf("%d ", p[i][j]);
            
        }
        printf("\n");
    }
    
    for (i = 0; i < N; i++) {
        /* code */
        free(p[i]);
    }
    free(p);
    return 0;
}
