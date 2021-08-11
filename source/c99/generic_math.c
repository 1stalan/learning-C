#include <stdio.h>
#include <tgmath.h>

int main()
{
    int x = 2;
    float y = 2.0;
    _Complex double z = 1.0 + 0.5 * _Complex_I;
    printf("%f \n", sqrt(x)); // int -> chama sqrt
    printf("%f \n", sqrt(y)); // float -> chama sqrtf
    z = sqrt(z); // complexo -> chama csqrtf
    printf("%f + %f i\n", creal(z), cimag(z)); // float -> chama sqrtf
    return 0;
}
