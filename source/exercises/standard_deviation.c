#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(int *vet, int n, float *m, float *dp){
    *m = 0.0;
    for (int i = 0; i < n; i++)
        *m += vet[i];
    *m /= n;
    *dp = 0.0;
    
    for (int i = 0; i < n; i++)
        *dp += pow(vet[i] - *m, 2);
    
    *dp = sqrt(*dp/ (n-1));
}

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    float media, desvio;
    calc(vet, 5, &media, &desvio);
    printf("Media: %.1f\nDesvio Padrao: %.1f\n", media, desvio);
    return 0;
}