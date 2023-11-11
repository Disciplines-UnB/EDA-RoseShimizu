/*
Percursos em árvores binárias: pré-ordem
Considere uma árvore binária com nós representados por

typedef struct no {
int dado;
struct no *esq, *dir;
} no;

Sua tarefa nesse exercício é implementar o percurso pré-ordem, mas sem usar recursão.
Para tanto, você deve submeter um arquivo contendo:
1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct no.
3. Uma função não recursiva
void pre_ordem (no *raiz);
que recebe uma árvore binária enraizada por raiz e imprima o valor de cada nó, separado por espaço, gerado a partir do
percurso pré-ordem na árvore dada.
4. As funções auxiliares que julgar necessárias.
Exemplo
Considere a árvore dada por

Sua função deve imprimir, para esta árvore:
2 5 3 8 4 7 1 9 6

Author: John L. Gardenghi
*/
#include <stdio.h>

typedef struct no
{int dado; struct no *esq, *dir;} no;

void pre_ordem(no* root)
{
    if (root == NULL){return;}
    no *at = root;
    no *pi[101];
    int topo = -1;

    while (1)
    {
        while (at != NULL)
        {
            pi[++topo] = at;
            printf("%d ", at->dado);
            at = at->esq;
        }
        
        if (topo >= 0)
        {
            at = pi[topo--];
            at = at->dir;
        }
        else{break;}
    }
    printf("\n");
}
