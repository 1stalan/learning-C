#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    printf("Letra na tabéla ASCII\n");
    printf("[%c] = %d\n", letra, letra);
    
    system("pause");
}