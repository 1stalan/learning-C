
Compilar: `gcc hello_world.c -o hello_world`

Executar: `.\hello_world`

`#include <stdio.h>` standard input output.

`#define N 10` declara uma constante N de valor 10.

Tipos básicos: `char`, `int`, `float`, `double`

`const` declara uma variável que não pode ser modificada.

`printf("hello world");`: comando para exibir informações na tela.

`scanf("tipo de dado", &variável)`: leitura de dados do teclado.

Operadores aritméticos: `+` `-` `*` `/` `%` `//`

comentários: `//` `/**/`

Pré-incremento: `++x` 

Pós-incremento: `x++`

Atribuição simplificada: `+=` `-=` `*=` `/=` `%=`

**Operadores relacionais:** 

- `>` maior do que.
- `>=` maior ou igual.
- `<` menor do que.
- `<=` menor ou igual.
- `==` igual a.
- `!=` diferente de.

**Operadores lógicos:** 

- `&&` E.
- `||` OU.
- `!` Negação.
- `?` Ternário.

*Operador Ternário:* `Condição ? Expressão1 : Expressão2`

**switch:**

variável int ou char.

```
switch(variável):
    case(valor): conjunto de comandos; break;
    default: conjunto de comandos; break;
```
**Laços:**

permite executar repetidamente um conjunto de comandos.

`while(condição)` 

`for(inicialização; condição, incremento)`

`do while` a execução dos comandos acontece pelo menos uma vez antes da verificação da condição.

`break` interrompe a repetição de qualquer comando de laço.

`continue` interrompe o laço, e passa para a próxima repetição.

`goto` salto condicional dentro do código fonte.

**Array/Vetor:**

Um conjunto de dados armazenado de forma sequencial
- O nome do vetor é um ponteiro para o endereço do vetor para a primeira posição.
- Para saber a capacidade máxima do vetor basta dividir o seu tamanho pelo tamanho do tipo que ele armazena semelhante a função.

```
int vet[5];
int len = sizeof(vet) / sizeof(int);
```

- É possível acessar o endereço de um elemento do array
- A Linguagem C permite a declaração de um array de ponteiros.


**String:**

`string` permite armazenar uma sequência de caracteres na memória (palavras ou chaves), com `scanf` a palavra é escrita até o pressionar da tecla enter, ou até o primeiro caractere espaço, ja com a função `gets` a leitura da palavra só termina quando a tecla enter for pressionada.

`\0` caractere especial que indica o fim da string.

- `strlen` tamanho da string.
- `strcpy` copiar uma string.
- `strcat` concatenar duas strings.
- `strcmp` comparar duas strings.

`struct` cria um tipo de variavel, tambem chamada de estrutura.

- estruturas suportam atribuição, desde que sejam do mesmo tipo.

`union` união é muito parecida com estrutura, a difereça é que a união é uma estrutura de memoria compartilhada, ou seja, ela armazena o campo do maior valor.

- não é possivel acessar dois valores ao mesmo tempo.
- uma união permite fazer acesso controlado a nivel de bits.

`enum` uma enumeração pode ser vista como uma lista de constantes, um numero é associado a cada identificador.

- pode-ser atribuir valores da tabela ASCII para a enumeração.

`typedef` cria uma apelido para um tipo.


**Funções:**

```
tipo (paramentros){
    conjunto de declarações;
    comandos;
}
```

- `Passagem por valor`: acontece uma atribuição na passagem do valor, e nenhuma modificação acontece no valor que foi passado.

- `Passagem por referência`: recebe o endereço de memória e todas as instruções que são executadas na função modificam o valor real recebido.

*colocar `*` na frente do identificador*

```
tipo (tipo *paramentros){
    conjunto de declarações;
    comandos;
}
```

- `Recursão`: quando utilizar funções recursivas prestar atenção no critério de parada e no parâmetro de chamada da função.

*Retorno da função*
- Tipos basicos.
- um `array` só pode ser retornado se estivar dentro de uma strutct.


**Ponteiros:**
Para acessar o valor da variável apontada por um ponteiro basta usar o operador `*`.

- Ponteiro só pode receber uma variável do mesmo tipo do ponteiro.
- As operações aritméticas nos ponteiros respeitam o tamanho do tipo.
- Ponteiros podem ser comparados.
- A linguagem C permite criar ponteiros, com diferentes níveis de apontamento.

*Ponteiro genérico:*

- Um ponteiro genérico pode apontar para qualquer tipo de dados.
- Antes de acessar um o valor do ponteiro genérico e necessário fazer um cast `*(int *)`.

**Alocação Dinâmica:**

a Linguagem C ANSI usa apenas 4 funções para alocação dinâmica disponíveis na biblioteca `<stdlib.h>`.

- `sizeof` retorna o número de bytes necessário para alocar um único elemento do tipo de dado recebido.
- `malloc` a função malloc recebe por parâmetro a quantidade de bytes a ser alocada e retornar:
ponteiro para a primeira posição do array.

- `calloc` a função calloc recebe por parâmetro o número de elementos no array e o tamanho de cada elemento e retorna, a função calloc também coloca 0 em todos os bits no momento da alocação da memoria.

- `realloc` a função realloc recebe por parâmetro 2 elementos o ponteiro para um bloco previamente alocado de memória, a quantidade de bytes a ser alocada
se o ponteiro para o bloco de memória for NULL a função realloc vai alocar memoria igual a função. 

- `malloc` se o tamanho solicitado de memória for igual a zero realloc ira liberar a memória da mesma forma que a função free.

- `free` libera a memória.

*Tipo de retorno da alocação:*
_ponteiro para a primeira posição do array
NULL: caso aconteça algum erro na alocação_
