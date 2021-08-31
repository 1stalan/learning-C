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
Função main

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