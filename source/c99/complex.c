#include <stdio.h>
#include <complex.h>

int main()
{   
    _Complex double n1 = 2.0 + 2.0* _Complex_I;
    _Complex double n2 = 1.0 + 5.0* _Complex_I;
    _Complex double n3 = n1 + n2;
    _Complex double n4 = n1 * n2;
    _Complex double n5 = conj(n3); // conjugado de z3
    
    // imprime a parte real e a parte imaginária
    printf("n = %f + i%f\n", creal(n3), cimag(n3));
    printf("n = %f + i%f\n", creal(n4), cimag(n4));
    printf("n = %f + i%f\n", creal(n5), cimag(n5));
    
    return 0;
}
