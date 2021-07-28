#include <stdio.h>
#include <stdlib.h>

float serieS(float n){
    if(n > 0)
        return (1 + n*n) / (float) n + serieS(n-1);
    else
        return 0;
}

int main()
{
    printf("Serie simples = %f\n", serieS(5));
    return 0;
}