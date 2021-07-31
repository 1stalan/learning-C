#include <stdio.h>
#include <stdlib.h>
#define hello
int main()
{
#ifdef hello
    printf("Hello World\n");
#else
    printf("hello não definido\n");
#endif
    return 0;
}
