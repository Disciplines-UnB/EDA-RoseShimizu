/*
Percursos em árvores binárias: pós-ordem
Considere uma árvore binária com nós representados por
typedef struct no {
int dado;
struct no *esq, *dir;
} no;
Sua tarefa nesse exercício é implementar o percurso pós-ordem, mas sem usar recursão.
Para tanto, você deve submeter um arquivo contendo:
1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct no.
3. Uma função não recursiva
void pos_ordem (no *raiz);
que recebe uma árvore binária enraizada por raiz e imprima o valor de cada nó, separado por espaço, gerado a partir do
percurso pós-ordem na árvore dada.
4. As funções auxiliares que julgar necessárias.
Exemplo
Considere a árvore dada por
Sua função deve imprimir, para esta árvore:
3 4 8 5 9 1 6 7 2
Author: John L. Gardenghi
*/

#include <stdio.h>

typedef struct no{int dado; struct no *esq, *dir;} no;
void pos_ordem(no *root){
    if(root == NULL){return;}
    no *at = root; no *pilha0[101]; no *pilha1[101];
    int topo = -1, topo1 = -1;

    pilha0[++topo] = at;
    while(topo >=0)
    {
        at = pilha0[topo--];
        pilha1[++topo1] = at;
        if(at->esq != NULL){pilha0[++topo] = at->esq;}
        if(at->dir != NULL){pilha0[++topo] = at->dir;}
    }
    while (topo1 >= 0)
    {at = pilha1[topo1--];printf("%d ", at->dado);}
    printf("\n");
}
