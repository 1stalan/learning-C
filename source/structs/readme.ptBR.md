`struct` cria um tipo de variavel, tambem chamada de estrutura.

- estruturas suportam atribuição, desde que sejam do mesmo tipo.

`union` união é muito parecida com estrutura, a difereça é que a união é uma estrutura de memoria compartilhada, ou seja, ela armazena o campo do maior valor.

- não é possivel acessar dois valores ao mesmo tempo.
- uma união permite fazer acesso controlado a nivel de bits.

`enum` uma enumeração pode ser vista como uma lista de constantes, um numero é associado a cada identificador.

- pode-ser atribuir valores da tabela ASCII para a enumeração.

`typedef` cria uma apelido para um tipo.

**Alinhamento e preenchimento de estruturas**

Muitas vezes o tamanho da estrutura não é igual a soma de seus membros.
Exemplo: 

```
struct st1{ //  5 bytes
char c; // 4 bytes
int x; // 1 byte
};
printf("%d ", sizeof(struct st1)); // 8 bytes
```
Quando o computador lê dados da memória, ele o faz sempre usando o tamanho da arquitetura sistema, o alinhamento faz com que o endereço dos dados sempre esteja em uma posição de memória que é múltiplo do tamanho da arquitetura.

4 bytes sistema 32-bits
8 bytes sistema 64-bits

O alinhamento impacta no desempenho e funcionamento correto do programa.

- Acesso mais rápido a memória.
- Facilidade na geração de endereço de memória.
- Sem alinhamento, mais acessos podem ser necessários para recuperar um dado.
- Para alinhar os dados pode ser necessário inserir alguns bytes não nomeados entre os dados.
- Isso permite que membros de um array ou struct fiquem adequadamente alinhados.
- Seguem o alinhamento do maior membro.
- Caracteres não tem preferência de alinhamento.

```
struct st1{ //  5 bytes
char c; // 4 bytes
int x; // 1 byte
char pad[3]; // 3 bytes

```

**Reorganizando a estrutura**

A ideia é reorganizar os campos para economizar espaço na memória, do maior número de bytes para o menor número.

```
struct st1 { // 24 bytes
    char c;
    char pad1[7];
    double p;
    short x;
    char pad2[6];
}
struct st2 { // 16 bytes
    char c; // 8 bytes
    short x; // 2 bytes
    char c; // 1 byte
    char pad[5]; // 5 bytes
}
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
