#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    float f = 3.45;
    time_t tempo;
    struct tm *infotempo;
    char texto[50];
    time(&tempo);
    infotempo = localtime(&tempo);

    printf("Olá mundo !\n");
    printf("Valor de f = %f\n", f);
    strftime(texto, 50, "Data: %A, %d/%b/%Y", infotempo);
    puts(texto);
    printf("\n\n");

    setlocale(LC_ALL, "Portuguese");

    printf("Olá mundo %c !\n", 95);
    printf("Valor de f = %f\n", f);
    strftime(texto, 50, "Data: %A, %d/%b/%Y", infotempo);
    puts(texto);
    
    
    return 0;
}
