#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 50

// ============================================================================
typedef int TIPOCHAVE;

typedef struct
{
    TIPOCHAVE chave;

} REGISTRO;

// ============================================================================

typedef struct
{
    REGISTRO A[MAX + 1];
    int nroElem;

} LISTA;

// ============================================================================
void inicializarLista(LISTA *l)
{
    l->nroElem = 0;
}
// ============================================================================
int tamanho(LISTA *l)
{
    return l->nroElem;
}

// ============================================================================
void exibiLista(LISTA *l)
{
    int i;
    printf("\nLista (%d elementos): \n [ ", l->nroElem);
    for (int i = 0; i < l->nroElem; i++)
    {
        printf("%i, ", l->A[i].chave);
    }
    printf("]\n\n");
    
}

// ============================================================================
int buscaSentinela(LISTA *l, TIPOCHAVE ch){
    int i = 0;
    
    l->A[l->nroElem].chave = ch;
    while(l->A[i].chave != ch ) i++;
    if(i == l->nroElem) return -1;
    else return i;
}

// ============================================================================
int buscaSequencial(LISTA *l, TIPOCHAVE ch)
{
    int i = 0;
    while (i < l->nroElem)
    {
        if (ch == l->A[i].chave)
            return i;
        else
            i++;
    }
    return -1;
}
// ============================================================================
int buscaBinaria(LISTA *l, TIPOCHAVE ch){
    int esq, dir, meio;
    esq = 0;
    dir = l->nroElem -1;
    while(esq<= dir){
        meio = ((esq + dir) /2);
        if(l->A[meio].chave == ch) return meio;
        else{
            if(l->A[meio].chave < ch) esq = meio +1;
            else dir = meio -1;
        }
    }
    return 1;
}
// ============================================================================
bool inserirElemListaOrd(LISTA *l, REGISTRO reg){
    if(l->nroElem >= MAX) return false;
    int pos = l->nroElem;
    while((pos > 0) && (l->A[pos-1].chave > reg.chave )){
        l->A[pos] = l->A[pos -1];
        pos --;
    }
    l->A[pos] = reg;
    l->nroElem ++;
}

// ============================================================================
bool inserirElemLista(LISTA *l, REGISTRO reg, int i)
{
    int j;

    if ((l->nroElem == MAX) || (i < 0) || (i > l->nroElem))
        return false;

    for (j = l->nroElem; j > i; j--)
        l->A[j] = l->A[j - 1];

    l->A[i] = reg;
    l->nroElem++;

    return true;
}
// ============================================================================

int bubble(LISTA *l)
// Algoritimo de ordenação em bolha
{
    int i, j, aux;

    for (i = 0; i < l->nroElem - 1; i++)

        for (j = 0; j < l->nroElem - i - 1; j++)
        {
            if (l->A[j].chave > l->A[j + 1].chave)
            {
                aux = l->A[j].chave;
                l->A[j].chave = l->A[j + 1].chave;
                l->A[j + 1].chave = aux;
            }
        }
    return 1;
}
// ============================================================================
bool excluirElemLista(LISTA *l, TIPOCHAVE ch){
    int pos, j;
    pos = buscaBinaria(l, ch);
    if(pos == -1) return false;
    for (j = pos; j < l->nroElem -1 ; j++)
        l->A[j] = l->A[j+1];
    l->nroElem --;
    
    return true;
    
}

// ============================================================================

void mostra_busca(int elem, int indice)
{
    
    printf("Elemento [%d] achado no indice: %d \n", elem, indice);
}

// ============================================================================
void reinicializarLista(LISTA *l){
    l->nroElem = 0;
}

// ============================================================================
int main()
{
    // Estrutura com 4 registros
    REGISTRO a[4] = {
        {45},
        {12},
        {13},
        {4},
    };

    LISTA *li = (LISTA *)malloc(sizeof(LISTA)); // aloca memoria para a lista
    
    inicializarLista(li);

    // for (int i = 0; i < 4; i++)
    //     inserirElemLista(li, a[i], i);
        
    for (int i = 0; i < 4; i++)
        inserirElemListaOrd(li, a[i]);
    
    
    exibiLista(li);

    // bubble(li); //Ordena

    exibiLista(li);
    
    int indice, elem = 13;
    
    indice = buscaSequencial(li, elem);
    mostra_busca(elem, indice);
    
    if (excluirElemLista(li, elem))
        printf("Elemento excluido !!!\n");
        exibiLista(li);
    
    printf("====================== Busca Sentinela ====================== \n\t\t");
    elem = 4;
    indice = buscaSentinela(li, elem);
    mostra_busca(elem, indice);
    
    printf("======================= Busca Binaria ======================= \n\t\t");
    elem = 45;
    indice = buscaBinaria(li, elem);
    mostra_busca(elem, indice);

    printf("\n");    

    // system("pause");
    return 0;
}
