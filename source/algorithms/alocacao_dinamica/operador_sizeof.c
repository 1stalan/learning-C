#include <stdio.h>

struct pessoa
{
    char nome[10]; // 10 bytes
    int idade;     // 4 bytes
};

int main()
{
    // long unsigned '%lu'
    printf("char: %lu \n", sizeof(char));
    printf("int :%lu \n", sizeof(int));
    printf("float: %lu \n", sizeof(float));
    printf("double: %lu \n", sizeof(double));
    printf("struct pessoa: %lu \n", sizeof(struct pessoa));
    return 0;
}
