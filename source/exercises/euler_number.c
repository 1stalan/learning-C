#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N = 10;
    int i, j;
    float f, E = 1.0;
    for (int i = 0; i <= N; i++) {
        f = 1;
        for (j = 1; j < i; j++) {
            f = f * j;
        }
        E += 1.0/f;
    }
    printf("%f \n",E);
}