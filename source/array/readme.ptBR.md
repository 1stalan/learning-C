**Array/Vetor:**

Um conjunto de dados armazenado de forma sequencial
- O nome do vetor é um ponteiro para o endereço da primeira posição.
- Para saber a capacidade máxima do vetor basta dividir o seu tamanho pelo tamanho do tipo que ele armazena.

```
int vet[5];
int len = sizeof(vet) / sizeof(int);
```

- A Linguagem C permite a declaração de um array de ponteiros.