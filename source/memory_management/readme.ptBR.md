**Alocação Dinâmica:**
| tipo  | bytes |
|-------|-------|
| char  |   1   | 
| int   |   4   |
| float |   4   |
| double|   8   |  

A Linguagem C ANSI usa apenas 4 funções para alocação dinâmica disponíveis na biblioteca `<stdlib.h>`.

- `sizeof` retorna o número de bytes necessário para alocar um único elemento do tipo de dado recebido.
- `malloc` a função malloc recebe por parâmetro a quantidade de bytes a ser alocada e retornar:
ponteiro para a primeira posição do array.

- `calloc` a função calloc recebe por parâmetro o número de elementos no array e o tamanho de cada elemento e retorna, a função calloc também coloca 0 em todos os bits no momento da alocação da memoria.

- `realloc` a função realloc recebe por parâmetro 2 elementos o ponteiro para um bloco previamente alocado de memória, a quantidade de bytes a ser alocada
se o ponteiro para o bloco de memória for NULL a função realloc vai alocar memoria igual a função. 

- `malloc` se o tamanho solicitado de memória for igual a zero realloc ira liberar a memória da mesma forma que a função free.

- `free` libera a memória.

*Retorno da alocação:*
- ponteiro para a primeira posição do array
- NULL: caso aconteça algum erro na alocação

A linguagem C possui algumas funções para manipulação de memória dentro da biblioteca `string.h`. Essas funções são:

`memset`: preenche ou inicializa uma quantidade de memória (variável, estrutura, etc) com um determinado valor de bytes.
```
void * memset(void *p, int v, size_t n);
```
Entrada:
- `P`: ponteiro para a região de memória que será preenchida.
- `V`: valor usado para preencher a memória. O valor será convertido automaticamente para `unsined char`.
- `N`: número de bytes que serão preenchidos. Não é necessariamente o tamanho do array.

Retorno:
- Retorna uma cópia do ponteiro P.
- Retorna `NULL` em caso de erro.

`memcpy`: copia   um a quantidade de bytes de uma área de memória para outra. Ambas as regiões de memória são tratadas como `unsined char`.
```
void * memcpy(void *dest, int orig, size_t n);
```
Entrada:
- `Dest`: ponteiro para a região de memória que receberá os dados copiados.
- `Orig`: valor usado para preencher a memória. 
- `N`: número de bytes que serão copiados. Não é necessariamente o tamanho do array.

Retorno:
- Retorna uma cópia do ponteiro P.
- Retorna `NULL` em caso de erro.

`memmove`: cópia uma quantidade de bytes de memória para uma outra área de memória. Ambas as aréas de memória são tratadas como `unsined char`

- Funcionamento igual ao de `memcpy`.
- Mais lenta.
- Mais segura em caso de existir sobreposição entre duas regiões de memória, pois usa um array auxiliar para fazer a cópia.

```
void * memcpy(void *dest, int orig, size_t n);
```
Entrada:
- `Dest`: ponteiro para a região de memória que receberá os dados copiados.
- `Orig`: ponteiro para a região de memória de onde os dados serão copiados. 
- `N`: número de bytes que serão copiados. Não é necessariamente o tamanho do array.

Retorno:
- Retorna uma cópia do ponteiro P.
- Retorna `NULL` em caso de erro.

`memcmp`: compara os primeiros “N bytes” de memória de duas regiões. Ambas as regiões de memória são tratadas como `unsigned char`
- Comparação lexicográfica.

```
void * memcpy(void *P1, void *P2, size_t n);
```
Entrada:
- `P1`: ponteiro para uma região de memória.
- `P2`: ponteiro para uma região de memória.
- `N`: número de “bytes” comparados. Não é necessariamente o tamanho do array.

Retorno:
- `< 0`: primeiro byte diferente tem valor menor em P1.
- `== 0`: blocos de memória iguais.
- `> 0`: primeiro byte diferente tem valor maior em P1.

`memchr`: Procura pela primeira ocorrência de um determinado valor em uma região de memória. Ambas as regiões de memória são tratadas como `unsigned char`

```
void * memcpy(void *P, int v, size_t n);
```
Entrada:
- `P`: ponteiro para uma região de memória.
- `V`: valor a ser procurado.
- `N`: número de “bytes” comparados. Não é necessariamente o tamanho do array.

Retorno:
- Retorna uma cópia do ponteiro P.
- Retorna `NULL` em caso de não encontrar.
