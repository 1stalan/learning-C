/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    int x = 10;
    int *p;
    
    p = &x;
    
    printf("x = %d\n", x);
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
        
    

    return 0;
}
