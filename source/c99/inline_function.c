#include <stdio.h>

//Função em linha
inline int maior(int x, int y){
    return (x > y) ? x:y;
}

int main()
{
    int r = maior(5,6);
    printf("%d ", r);
    return 0;
}
