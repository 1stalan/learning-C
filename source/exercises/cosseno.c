#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int N){
    int f = 1;
    for (int i = 1; i <= N; i++)
        f *= i;
    
    return f;
}

float cosseno(float x){
    float c = 0.0;
    for (int n = 0; n <= 5; n++) {
        c = c + pow(-1, n) * pow(x, 2*n) / fatorial(2*n);
    }
    return c;
}

int main()
{
    float ang = 45.0;
    ang = 3.141593 * ang/180.0;
    printf("Cosseno = %f\n", cosseno(ang));
    printf("resultado biblioteca math = %f\n", cos(ang));
    return 0;
}