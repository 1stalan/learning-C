**Diretivas de compilação**

São instruções que servem para fazer alterações no código-fonte antes de enviá-lo para o compilador
`define`
Essa diretiva informa ao compilador que ele deve procurar todas as ocorrências de determinada expressão e substitui-la por outra quando o programa for compilado e permite três sintaxes.

[#define valor](/source/build_directive/directive_define01.c)

[#define PI 3.1415](/source/build_directive/directive_define02.c)

[#define nomeMacro(parâmetros) expressão](/source/build_directive/directive_define03.c)

`undef`
Essa diretiva remove a definição de uma macro para que ela possa ser redefinida.

```
undef nome_da_macro
```


**Diretivas de inclusão condicional**

São estruturas condionais do pré-processador da linguagem C, que permitem incluir ou descartar parte do código do programa sempre que uma condição é satisfeita.

Lista de diretivas:

* `ifdef`
* `ifndef`
* `if`
* `else`
* `elif`
* `endif`
