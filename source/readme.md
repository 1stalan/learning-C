<h3>Anotações</h3>

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

**Controles de Fluxo**

`switch`: aceita variável int ou char.

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
- O nome do vetor é um ponteiro para o endereço da primeira posição.
- Para saber a capacidade máxima do vetor basta dividir o seu tamanho pelo tamanho do tipo que ele armazena.

```
int vet[5];
int len = sizeof(vet) / sizeof(int);
```

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
[Função main](source/funcoes/function_main.c)

- `argc`: valor que indica o número de parâmetros com os quais a função `main()` foi chamada `(argc >= 1)`.

- `*argv`: ponteiro para um vetor contendo "argc" strings. Cada string é um dos parâmetros para `main()`. 
- `argv[0]`: sempre aponta para o nome do programa.

- `atoi`: Converte string para inteiro.

*Recursão:*

Sempre que a gente chama uma função, quem chamou a função é pausado a função é executada e quando a função termina o programa continua da onde parou.

- Quando utilizar funções recursivas prestar atenção no critério de parada e no parâmetro de chamada da função.
- A ideia básica da recursão é dividir para conquistar, criando uma generalização do problema.
- Algoritmos recursivos tendem a necessitar de mais tempo e memória do que algoritmos interativos

*Retorno da função*
- Tipos basicos.
- um `array` só pode ser retornado se estivar dentro de uma strutct.


**Ponteiros:**
Para acessar o valor da variável apontada por um ponteiro basta usar o operador `*`.

- Ponteiro só pode receber uma variável do mesmo tipo do ponteiro.
- As operações aritméticas nos ponteiros respeitam o tamanho do tipo.
- Ponteiros podem ser comparados.
- A linguagem C permite criar ponteiros, com diferentes níveis de apontamento.
- Apenas operações de soma e subtração são permitidas em um ponteiro.

*Ponteiro genérico:*
- A linguagem c permite criar ponteiros com diferentes níveis de apontamento `*pto` `**pto` `***pto`.
- Um ponteiro genérico pode apontar para qualquer tipo de dados.
- Antes de acessar um o valor do ponteiro genérico e necessário fazer um cast `*(int *) pto`.
 
*Ponteiro para função*

Permite a criação de códigos genéricos, ao invés de reescrever toda uma função podemos passar para essa função o ponteiro de outra função.
- o nome de uma função é seu endereço na memória;
- Um ponteiro para funções só pode apontar para funções que possuam o mesmo protótipo.


- o nome de uma função é seu endereço na memória;
- Um ponteiro para funções só pode apontar para funções que possuam o mesmo protótipo.

Forma geral:

Tipo_retornado (* nome_do_ponteiro) (lista_de_tipos)

Função que retorna ponteiro:

Tipo_retornado * nome_do_ponteiro (lista_de_parâmetros)

Forma geral:

Tipo_retornado (* nome_do_ponteiro) (lista_de_tipos)

Função que retorna ponteiro:

Tipo_retornado * nome_do_ponteiro (lista_de_parâmetros)

Ponteiro para função:
Tipo_retornado (* nome_do_ponteiro) (lista_de_tipos)

[**Funções com número de parâmetros variável**](/source/funcoes/variable_parameters.c)

A biblioteca `stdarg.h` possui as definições de tipos de macros necessárias para acessar a lista de parâmetros da função

`va_list`: tipo usado como um parâmetro para recuperar os parâmetros adicionais da função


`va_start(lista, ultimo_parametro)`: macro que inicializa uma variável "lista" do tipo `va_list`, com as informações necessárias para recuperar os parâmetros adicionais

`va_arg(lista,tipo_dado)`: macro que retorna o parâmetro atual contido na variável "lista", do tipo `va_list`, sob a forma do tipo informado em "tipo_dado". Em seguida, a macro move a variável lista para o próximo parâmetro, se este existir.

`va_end(lista)`: essa macro deve ser executada antes da finalização da função, seu objetivo é destruir a vaveial "lista" de forma adequada.

*Cuidados*

- Funções com quantidade variável de parâmetros não existe definição de tipo.

- Não existe segurança baseada em tipo `type-safety`.

- Pode-se tentar recuperar mais parâmetros do que foram passados, gerando um comportamento inesperado e corrompendo assim o funcionamento do programa.


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

**Arquivos**

`FILE *arquivo`

- `fopen`: fopen(char * nome, modo *) abre um arquivo em modo de leitura ou escrita.
- `fclose`: A função fclose() fecha um arquivo.
- `fputc`: Escreve um único caractere no arquivo.
- `fputs`: Escreve uma string no arquivo.
- `fgetc`: Lê um único caractere do arquivo por vez.
- `fgets`: Lê uma string do arquivo por vez.
- `feof`: 0 se ainda não estiver atingido o final do arquivo.
- `fwrite`: Escreve um bloco de bytes.
- `fread`: lê um bloco de bytes.
- `fscanf`: lê um bloco de bytes.
- `fprintf`: Escreve saida no arquivo.
- `fseek`: Define a posição do arquivo do fluxo para o deslocamento fornecido.
- `rewind`: Volta para o início do arquivo.
- `EOF`: End of file.

| Constante  | Valor | Significado           |
|------------|-------|-----------------------|
| SEEK_SET   |   0   | Início do arquivo     |
| SEEK_CUR   |   1   | Ponto atual no arquivo|
| SEEK_END   |   2   | Fim do arquivo        |


A linguagem C trabalho com apenas arquivos texto e binários e sempre que trabalhamos com arquivos, devemos fechá-lo o path do arquivo pode ser:

_absoluto (endereço completo)
relativo (relativo à pasta do programa)_


*Texto:*
- Os dados são gravados como seriam impressos na tela.
- Existe uma etapa de conversão dos dados.
- Arquivos maiores, leitura e escrita mais lenta.
- Cada digito será convertido para seu caractere ASCII.

*Binário:*
- Os dados são copiados da memória para o arquivo da maneira que estão organizados na memoria.
- Arquivos menores, leitura e escrita rápida.
- A constante EOF pode ser lida como inteiro.



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

**Classes de armazenamento**

Conjunto de modificadores que permitem alterar como o compilador vai armazenar uma variável, e são utilizadas para definir o “escopo” e o “tempo de vida” da variável dentro do programa.

`auto`: as variáveis são automaticamente alocadas no início de uma função ou bloco e automaticamente liberadas quando essa função ou bloco termina, é o modo padrão de definição de variáveis.

As variáveis a seguir possuem a mesma classe:
```
Int x;
Auto int y;
```

`extern`: permite definir variáveis globais, informando ao compilador que a variável já existe em outro local de armazenamento previamente definido, e por esse motivo ela não pode ser inicializada

`static`: Seu funcionamento depende de como ela é utilizada, é o modo padrão de definição de variáveis globais.

As variáveis a seguir possuem a mesma classe:

```
#include <stdio.h>
Int x = 20;
static int y = 20;
int main(){
    return 0;
}
```

- Pode ser utilizada com variáveis locais, como as variáveis definidas dentro de uma função, nesse caso, a variável é inicializada em tempo de compilação e manterá o valor entre as diferentes chamadas da função.


- Pode ser utilizada para definir funções, garantindo que a função seja visível apenas dentro do arquivo que a própria função está declarada.


`register`: serve para especificar que uma variável será muito utilizada, e que seria interessante armazená-la no registrador da CPU.

- Acesso mais rápido que a memória RAM;
-  Funciona como uma dica, o compilador decide se a variável vai ser armazenada ou não no registrador;
-  Não podemos utilizar o operador `&`;
-  Apenas variáveis que ocupem poucos bytes, por causa da limitação do registrador da CPU;
-  Raramente é utilizada, os compiladores já realizam o trabalho de otimização na alocação das variáveis.

```
register int y;
``` 

**Modificador volatile**

Pode ser aplicado a qualquer declaração de variável incluindo estruturas, uniões e enumerações, informa ao compilador que aquela variável poderá ser alterada por outros meios e por esse motivo ela não deve ser otimizada, seu principal uso:
- Sistemas dinâmicos;
- Em tempo real;
- Comunicação com dispositivo mapeado na memória.
```
volatile int x;
```
Uma alternativa mais eficiente seria um `type cast`.

**Bitfield**

Tipo nome_do_campo: tamanho;

Campo de bits e um tipo especial de membro de `struct` e `union` que permite gerenciar um único bit dentro de um byte sem operadores bit a bit e seu uso e mais comum quando a quantidade de memória e limitada.

Só podem ser declarados como o tipo `int` utilizando os modificadoes:
`singned int` e `unsigned int`

Se ele for do tipo singned ou int seu campo deve ser maior que 1 por causa do bit de sinal.

Campos de bits sem nome são úteis para tornar a estrutura adequada a um layout especificado e eles não podem ser acessados ou inicializados.

Exemplos:
- Flags
- Comunicação com dispositivos de hardwares

Os campos de bits podem ter tamanho zero para indicar que o próximo campo de bits começa no próximo byte.

Campo de bits não possuem endereço então não podem ser utilizados o operador `sizeof` e nem o operador de endereço `&` e não podem ter ponteiros ou arrays de campos de bits.
