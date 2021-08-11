#include <stdio.h>
#include <math.h>

int main()
{
    double f;
    f = sqrt(-1);
    printf("Resultado: %f\n", f); //nan
    
    f = 1.0/0.0;
    printf("Resultado: %f\n", f); //inf
    
    f = -1.0/0.0;
    printf("Resultado: %f\n", f); //-inf
    
    if(isfinite(f))
        printf("Valor finito");
    else
        printf("Valor infinito"); // exibido

    return 0;
}
