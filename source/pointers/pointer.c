#include <stdio.h>

/* podemos apontar um ponteiro para um endereço de memória que já exista 
em nosso programa
 para acessar o endereço onde o ponteiro aponta utilizamos o operador '*'
*/

int main()
{
    int *p, x = 10;
    p = &x;
    printf("Variavel x = %d \n", x);
    printf("Endereço de x = %p \n", p);
    printf("Acessando x atraves do ponteiro -> '%d' \n", *p);

    return 0;
}
