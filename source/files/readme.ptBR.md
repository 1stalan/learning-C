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