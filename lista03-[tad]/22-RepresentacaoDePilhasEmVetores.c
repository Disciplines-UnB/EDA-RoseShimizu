/*
Representação de pilhas em vetores
Considere uma pilha em vetores representada por

typedef struct {
int *v; // Vetor que contem os elementos da pilha
int N; // Tamanho de v
int topo; // Indicador do topo
} pilha;

Sua tarefa nesse exercício é implementar as operações de empilhamento e desempilhamento na pilha. Para tanto,
você deve submeter um arquivo contendo apenas:
1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct pilha.
3. Uma função
void empilha (pilha *p, int x);
que empilha o elemento x na pilha p. Sua função deve dobrar o tamanho do vetor da pilha caso a pilha esteja cheia.
4. Uma função

int desempilha (pilha *p, int *y);

que desempilha um elemento da pilha. Sua função deve
• retornar o elemento desempilhado em y e
• retornar 1 se o desempilhamento foi bem sucedido, ou 0 caso contrário.

Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{int *V; int N, topo;} pilha;
void empilha (pilha *p, int x){
    if (p->topo == p->N){
        p->N *= 2;
        int *novo = realloc(p->V, p->N * sizeof(int));
        if(novo == NULL){return;}
        p->V = novo;
    }
    p->V[p->topo] = x; p->topo++;  
}

int desempilha (pilha *p, int *y){
    if (p->topo == 0){return 0;}
    p->topo--;*y = p->V[p->topo]; 
    return 1;
}
