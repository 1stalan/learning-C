#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

// ============================================================================

typedef struct
{
    int matricula;
    char nome[30];
    float n1, n2, n3;

} Aluno;

// ============================================================================

struct item
{
    int chave;
    void *info;
};

// ============================================================================

typedef struct
{
    int qtd, TAMANHO_TIPO;
    struct item dados[MAX];

} Lista;

// ============================================================================

Lista *cria_lista(int TAMANHO_TIPO)
{
    Lista *li;
    li = (Lista *)malloc(sizeof(Lista));
    if (li != NULL)
    {
        li->qtd = 0;
        li->TAMANHO_TIPO = TAMANHO_TIPO;
    }
    return li;
}

// ============================================================================

int tamanaho_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    else
        return li->qtd;
}

// ============================================================================

int lista_cheia(Lista *li)
{
    if (li == NULL)
        return -1;
    return (li->qtd == MAX);
}

// ============================================================================

int lista_vazia(Lista *li)
{
    if (li == NULL)
        return -1;
    return (li->qtd == 0);
}

// ============================================================================

void libera_lista(Lista *li)
{
    for (int i = 0; i < li->qtd; i++)
        free(li->dados[i].info);
    free(li);
    li->qtd = 0;
}

// ============================================================================

void *alocar_tipo(int TAMANHO_TIPO, void *dados)
{
    void *novo = malloc(TAMANHO_TIPO);
    if (novo == NULL)
        return 0;
    memcpy(novo, dados, TAMANHO_TIPO);

    return novo;
}

// ============================================================================

int insere_fim(Lista *li, int chave, void *dados)
{
    if (li == NULL)
        return 0;
    if (lista_cheia(li))
        return 0;

    void *novo = alocar_tipo(li->TAMANHO_TIPO, dados);

    int i;
    for (i = li->qtd - 1; i >= 0; i--)
        li->dados[i + 1] = li->dados[i];

    li->dados[li->qtd].chave = chave;
    li->dados[li->qtd].info = novo;
    li->qtd++;
    return 1;
}

// ============================================================================

int insere_lista(Lista *li, int chave, void *dados)
{
    if (li == NULL)
        return 0;
    if (lista_cheia(li))
        return 0;

    int k, i = 0;

    void *novo = alocar_tipo(li->TAMANHO_TIPO, dados);

    while ((i < li->qtd) && (li->dados[i].chave < chave))
        i++;

    for (k = li->qtd - 1; k >= i; k--)
        li->dados[k + 1] = li->dados[k];

    li->dados[i].chave = chave;
    li->dados[i].info = novo;

    li->qtd++;

    return 1;
}

// ============================================================================

int remove_lista(Lista *li, int chave)
{
    if (li == NULL)
        return 0;
    if (lista_vazia(li))
        return 0;

    int k, i = 0;
    while ((i < li->qtd) && (li->dados[i].chave != chave))
        i++;
    if (i == li->qtd)
        return 0;

    free(li->dados[i].info);

    for (k = i; k < li->qtd - 1; k++)
        li->dados[k] = li->dados[k + 1];
    li->qtd--;
    return 1;
}

// ============================================================================

int remove_final(Lista *li)
{
    if (li == NULL)
        return 0;
    if (lista_vazia(li))
        return 0;
    li->qtd--;
    return 1;
}

// ============================================================================

void imprime_lista(Lista *li, void (*imprime)(void *))
{
    printf("\n");
    int i;
    for (i = 0; i < li->qtd; i++)
    {
        printf("Chave: %d \n", li->dados[i].chave);
        imprime(li->dados[i].info);
        printf("-----------------------------------\n");
    }
}

// ============================================================================

void imprime_aluno(void *info)
{
    Aluno *al = info;
    printf("Matricula: %d \n", al->matricula);
    printf("Nome: %s \n", al->nome);
    printf("Notas: [ %.1f ] [ %.1f ] [ %.1f ] \n",
           al->n1, al->n2, al->n3);
}

// ============================================================================

int main()
{
    Aluno al[3] = {
        {2, "amber", 8.8, 8.7, 8.9},
        {3, "ronaldo", 9.9, 8.9, 9.5},
        {1, "vishera", 10.0, 10.0, 10.0},
    };

    Lista *li = cria_lista(sizeof(Aluno));

    for (int i = 0; i < 3; i++)
        insere_lista(li, al[i].matricula, &al[i]);

    if (lista_vazia(li))
        printf("Lista Vazia !");
    else
        imprime_lista(li, imprime_aluno);

    system("pause");
    return 0;
}
