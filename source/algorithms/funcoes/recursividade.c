/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fatorial(int n){
    if(n == 0)
        return 1;
    else
        return n * fatorial(n -1);
    
}

int main()
{   
    int n = 5;
    printf("Fatorial de %d: %d", n, fatorial(5));

    return 0;
}
