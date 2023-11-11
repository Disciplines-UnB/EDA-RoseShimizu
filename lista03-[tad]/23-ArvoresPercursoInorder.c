/*
Percursos em árvores binárias: em ordem
Considere uma árvore binária com nós representados por

typedef struct no {
int dado;
struct no *esq, *dir;
} no;

Sua tarefa nesse exercício é implementar o percurso em ordem, mas sem usar recursão.
Para tanto, você deve submeter um arquivo contendo:

1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct no.
3. Uma função não recursiva

void em_ordem (no *raiz);

que recebe uma árvore binária enraizada por raiz e imprima o valor de cada nó, separado por espaço, gerado a partir do
percurso em ordem na árvore dada.
4. As funções auxiliares que julgar necessárias.
Exemplo
Considere a árvore dada por

Sua função deve imprimir, para esta árvore:

3 5 4 8 2 1 9 7 6

Author: John L. Gardenghi
*/

#include <stdio.h>

typedef struct no{int dado; struct no *esq, *dir;} no;
void em_ordem(no *root){
    if (root == NULL){return;}
    no *at= root, *pilha[101]; int topo= -1;
    while (1)
    {
        while (at != NULL){pilha[++topo] = at;at = at->esq;  }
        if (topo >= 0){
            at = pilha[topo--];
            printf("%d ", at->dado);
            at = at->dir;
        }
        else{break;}
    }
    printf("\n");
}
