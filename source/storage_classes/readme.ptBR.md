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