**Padrão C99**

O padrão ISSO/IEC 9899:1999, informalmente conhecido com C99, é uma revisão do padrão ANSI de 1989 da Linguagem C, trouxe uma série de recursos uteis a linguagem C comentários com `//` o tipo `long long` declaração de variável dentro do `for` composição de literais, novos tipos de inteiros etc. 

**O tipo long long int**

`short int 16 bits`
`long int 32 bits`
`long long int 64bits`

Como os demais tipos este pode ser com sinal ou sem sinal `unsigned long long int`, também foram adicionados sufixos `LL` e `ULL` para especificação de constantes literais dos tipos e especificadores de tipos `%lld` e `%llu`, para inteiros com ou sem sinal, para o uso com as funções ` printf()` e ` scanf()`

**Novos tipos de inteiros**
O padrão C99 possui novos tipos de inteiros definidos nas bibliotecas `inttypes.h` e `stdint.h` o propósito disso é melhorar a portabilidade dos programas já que os tipos inteiros básicos podem variar em diferentes sistemas.
Tipos inteiros com largura exata, possuem N bits em todos os sistemas.

`Int8_t`
`Int16_t`
`Int32_t`
`Int64_t`

Tipos inteiros com largura mínima, possuem no mínimo N bits em todos os sistemas.

`int_least8_t`
`int_least16_t`
`int_least32_t`
`int_least64_t`

Tipos inteiros rápidos são os tipos mais rápidos disponíveis no sistema e que possuem pelo menos N bits.
`int_fast8_t`
`int_fast16_t`
`int_fast32_t`
`int_fast64_t`

Tipo inteiro de largura máxima, é capaz de representar todos os demais tipos inteiros.

`intmax_t`

Ponteiro de inteiro, garante armazenar um ponteiro para inteiro.

`intprt_t`

Para a versão `unsigned` desses tipos basta acrescentar o prefixo “u” ao nome do tipo.

Exemplo:

Inteiro 8 bits com sinal
`int8_t`
Inteiro 8 bits sem sinal
`uint8_t`

**Leitura e escrita dos novos tipos inteiros**

Devemos usar macros pré-definidas para cada tipo
```
#include <stdio.h>
#include <inttypes.h>
int main()
{   
    int64_t n = 1234567891234;
    printf("Numero = %"PRId64"\n", n);
    return 0;
}
```
---TABELA LEITURA---
--- TABELA ESCRITA---

**Tipo booleano**
O tipo booleano disponível na biblioteca `stdbool.h`  pode assumir dois valores.
Verdadeiro `true`
Falso ´false´
Ele também pode ser usado pela sua macro correspondente.
`bool`
`_Bool`
```
#include <stdio.h>
#include <stdbool.h>
int main()
{   
    _Bool b = true;// verdadeiro
    b = false; // falso
    bool x = 1; // verdadeiro    
    return 0;
}
```
Na linguagem ANSI-C não existe o tipo de dado booleano, para armazenar esse tipo de informação, usa-se a variável `int`.

Valor 0: significa falso
Qualquer outro valor: significa verdadeiro

**Tipo Complexo**

Outro tipo adicionado a linguagem C padrão 99 foi o que fornece suporte para números complexos na nova biblioteca `complex.h`, para isso utilizamos a palavra-chave `_Complex`, ela modifica um tipo de ponto-flutuante `float`, `double` e `long double`, para que ele se comporte como um par de números que defina um número complexo com as seguintes macros.

`complex`: macro que equivale a `_Complex`.
`_Complex_I`: macro que define uma parte imaginária.
`I`: macro equivalente a `_Complex_I`.

Exemplo:
```
_Complex float n = 2.0 + 2.0 * _Complex_I;
_Complex float n = 2.0 + 2.0 * I;
complex float n = 2.0 + 2.0 * _Complex_I;
complex float n = 2.0 + 2.0 * I;
```
A biblioteca `complex.h`, fornece funções para diversas operações sobre os números complexos, exemplo:

`double cimag(double complex n)` calcula parte imaginária de n
`double creal(double complex n)` calcula parte real de n
`double cabs(double complex n)` calcula o valor absoluto de n

Para trabalhar com outros tipos basta adicionar o sufixo “f” ou “l” respectivamente ao nome da função.
Exemplo de cálculo absoluto de n:
`double cabs(double complex n)`
`float cabsf(float complex n)`
`long double cabsl(long double complex n)`

**Ponto flutuante padrão IEEE 754**

É o padrão seguido por quase todas as máquinas modernas, suporte a três formatos de valores em ponto flutuante, e suas operações aritméticas e funções são agora corretamente arredondadas.

`float` ponto flutuante com precisão simples ocupa 32 bits (4 bytes) de memória, significando ou coeficiente com precisão de 24 bits (cerca de 7 dígitos decimais).

`double` ponto flutuante com precisão dupla ocupa 64 bits (8 bytes) de memória, significando ou coeficiente com precisão de 53 bits (cerca de 16 dígitos decimais).

`long double` ponto flutuante estendido com precisão dupla não utiliza necessariamente o padrão IEEE 754 pode possuir 80, 96 ou até 128 bits.

*Suporte a valores infinitos*

Biblioteca `math.h`, permite representar os valores infinito positivo, negativo, valores do tipo `NAN` no caso de um resultado indefinido ou que não pode ser representado com precisão. 

`INFINITY`: macro que representa o infinito positivo para o infinito negativo usa-se `-INFINITY`, produzido por operações como (1.0/0.0).

`isfinite`: função macro para testar se um valor é infinito ou não melhor do que comparar com a macro `INFINITY`.

`NAN`: macro que representa o valor que não é um número produzido por operações como sqrt(-1.0).

`isnan`: função macro para testar se um valor não é um número, melhor do que comparar com a macro `NAN`.
Para trabalhar com outros tipos basta adicionar o sufixo “f” ou “l” respectivamente ao nome da função.
Exemplo cálculo de raiz quadrada:

`double sqrt(double valor);`
`float sqrtf(float valor);`
`long double sqrtl(long double valor);`

*Alternativa*

Usar a biblioteca `tgmath.h` ela define uma macro do tipo genérico para cada função matemática um mesmo nome de função pode ser usado para chamar funções que aceitem diferentes tipos de parâmetros, a macro do tipo genérico se encarrega de chamar a função cujo tipo é determinado pelo tipo do parâmetro passado para a macro.

`cos` para o tipo `int`, é convertido implicitamente em `double`.
`cos` para o tipo `double`
`cosf` para o tipo `float`
`cosl` para o tipo `long double`
`ccos` para o tipo `double  _Complex`
`ccosf` para o tipo `float _Complex`
`ccosl` para o tipo `long double _Complex`

**Array de comprimento variável**
Padrão C99 possui arrays de comprimento variável neles o tamanho pode ser especificado em tempo de execução do programa, apesar do seu tamanho ser definido em tempo de execução eles são muito diferentes de alocação dinâmica, o array está sujeito ao escopo da onde foi declarado e não é necessário liberar com a função `free`.

```
    int N;
    printf(“Digite o tamanho do array: “);
    scanf("%d", &N);
    int array[N];
```
O padrão C99 permite declarar um array sem tamanho, chamado de “array flexível”, se ele for o último campo de uma estrutura. Exemplo:
```
struct aluno {
    char nome[40];
    int matricula;
    int notas[]; // array flexível
};
```


