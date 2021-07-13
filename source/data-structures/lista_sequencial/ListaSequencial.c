#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// ============================================================================

typedef struct{
    int matricula;
    char nome[30];
    float n1, n2, n3;
    
}Aluno;

// ============================================================================

typedef struct{
    int qtd;
    Aluno dados[MAX];
    
}Lista;

// ============================================================================

Lista * cria_lista(){
    Lista *li;
    li = (Lista *) malloc(sizeof(Lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}
// ============================================================================

int tamanaho_lista(Lista *li){
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}

// ============================================================================

int lista_cheia(Lista *li){
    if(li == NULL)
        return -1;
    return (li->qtd == MAX);
}

// ============================================================================

int lista_vazia(Lista *li){
    if(li == NULL)
        return -1;
    return (li->qtd == 0);
}

// ============================================================================

void libera_lista(Lista *li){
    free(li);
}

// ============================================================================

int insere_final(Lista *li, Aluno dados){
    if(li == NULL)
        return 0;
    if(lista_cheia(li))
        return 0;
    li->dados[li->qtd] = dados;
    li->qtd ++;
    return 1;
}

// ============================================================================

int insere_inicio(Lista *li, Aluno dados){
    if(li == NULL) return 0;
    if(lista_cheia(li)) return 0;
    
    int i;
    for (i = li-> qtd -1; i >= 0; i--)
        li->dados[i + 1] = li->dados[i];
    li->dados[0] = dados;
    li->qtd ++;
    return 1;
}

// ============================================================================

int insere_ordenada(Lista *li, Aluno dados){
    if(li == NULL) return 0;
    if(lista_cheia(li)) return 0;
    
    int k, i = 0;
    
    while(i < li->qtd && li->dados[i].matricula < dados.matricula)
        i ++;
    
    for (k = li->qtd - 1; k >= i; k--)
        li->dados[k + 1] = li->dados[k];
    
    li->dados[i] = dados;
    li->qtd ++;
    
    return 1;
}

// ============================================================================

int remove_inicio(Lista *li){
    if(li == NULL) return 0;
    if(lista_vazia(li)) return 0;
    
    int i;
    for (i = 0; i < li->qtd -1; i++)
        li->dados[i] = li->dados[i + 1];
    li->qtd --;
    return 1;
}

// ============================================================================

int remove_lista(Lista *li, int matricula){
    if(li == NULL) return 0;
    if(lista_vazia(li)) return 0;
    
    int k, i = 0;
    while((i < li->qtd) && (li->dados[i].matricula != matricula))
        i++;
    if(i == li->qtd) return 0;
    
    for (k = i ; k < li->qtd -1; k++)
        li->dados[k] = li->dados[k + 1];
    li->qtd --;
    return 1;
}

// ============================================================================

int remove_final(Lista *li){
    if(li == NULL) return 0;
    if(lista_vazia(li)) return 0;
    li->qtd --;
    return 1;
}

// ============================================================================

int consulta_lista_pos(Lista *li, int pos, Aluno *dados){
    if((li == NULL) || (pos <= 0) || pos > li->qtd)
        return 0;
    *dados = li->dados[pos -1];
    return 1;
}

// ============================================================================

int consulta_lista_mat(Lista *li, int mat, Aluno *dados){
    if(li == NULL) return 0;
    int k, i = 0;
    while(( i < li->qtd) && (li->dados[i].matricula != mat))
        i ++;
    if(i == li->qtd) return 0;
    
    *dados = li->dados[i];
    return 1;
}

// ============================================================================

void imprime_lista(Lista *li, void (*imprime ) (Aluno *)){
    int i;
    for (int i = 0; i < li->qtd; i++)
        imprime(&li->dados[i]);
    
}

// ============================================================================

void imprime_aluno(Aluno *dados){
    printf("Matricula: %d \n", dados->matricula);
    printf("Nome: %s \n", dados->nome);
    printf("Notas: [ %.1f ] [ %.1f ] [ %.1f ] \n",
            dados->n1, dados->n2, dados->n3);
    printf("\n");
}

// ============================================================================

int main()
{
    Aluno al[3] = {
        {2, "amber", 8.8, 8.7, 8.9 },
        {3, "ronaldo", 9.9, 8.9, 9.5},
        {1, "vishera", 10.0, 10.0, 10.0},
    };
    
    Lista *li = cria_lista();
    
    insere_final(li, al[0]);
    insere_inicio(li, al[1]);
    insere_ordenada(li, al[2]);
    
    if(lista_vazia(li))
        printf("Lista Vazia");
    else
        imprime_lista(li, imprime_aluno);
    
    printf("================ Consulta pela posição ================\n");
    
    Aluno a;
    consulta_lista_pos(li, 2, &a);
    imprime_aluno(&a);
    
    printf("================ Consulta pela matricula ================\n");
    
    Aluno b;
    consulta_lista_mat(li, 2, &b);
    imprime_aluno(&b);
    
    
    
    
    return 0;
}
