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
