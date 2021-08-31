Compilar: `gcc hello_world.c -o hello_world`

Executar: `.\hello_world`

`#include <stdio.h>` standard input output.

`#define N 10` declara uma constante N de valor 10.

Tipos básicos: `char`, `int`, `float`, `double`

`const` declara uma variável que não pode ser modificada.

`printf("hello world");`: comando para exibir informações na tela.

`scanf("tipo de dado", &variável)`: leitura de dados do teclado.




**localidade**

- `setlocale`: é uma das macros de localidade do sistema
- `LC_ALL`: Afeta todo o local da linguagem 
- `LC_COLLATE`: Afeta as funções `strcoll` e `strxfrm` que trabalham com strings
- `LC_CTYPE`: Afeta  as funções que trabalham com caracteres
- `LC_MONETARY`: Afeta as informações monetárias
- `LC_NUMERIC`: Afeta a formatação numérica
- `LC_TIME`: Afeta a função de formatação de data e hora `strftime`

 
*local* é um valor específico do sistema.
- `"C"` para a localidade mínima da linguagem
- `""` localidade padrao so sistema