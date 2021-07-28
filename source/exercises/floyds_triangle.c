#include <stdio.h>
#define TAM 6

int main()
{   int i, j, n = 0;
    
    for (i = 1; i <= TAM; i++){
        for (j = 1; j <= i; j++) {
            n ++;
            printf("%d ", n);
        }
        printf("\n");
    }
    return 0;
}
