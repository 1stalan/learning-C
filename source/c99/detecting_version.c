#include <stdio.h>

int main()
{   
    #ifndef __STDC_VERSION__
        printf("Versão: C89\n");
    #else
        #if(__STDC_VERSION__ == 199409L)
            printf("Versão: C94\n");
        #else
            printf("Versão: C99\n");
        #endif
    #endif
    return 0;
}
