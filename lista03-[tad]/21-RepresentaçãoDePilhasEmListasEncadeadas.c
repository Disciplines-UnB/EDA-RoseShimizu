/*
Representação de pilhas em listas encadeadas
Considere uma pilha em listas encadeadas com nó cabeça, e nós representados por

typedef struct celula {
int dado;
struct celula *prox;
} celula;

Sua tarefa nesse exercício é implementar as operações de empilhamento e desempilhamento na pilha. Para tanto,
você deve submeter um arquivo contendo apenas:
1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct celula.
3. Uma função

void empilha (celula *p, int x);

que empilha o elemento x na pilha encabeçada por p.
4. Uma função
int desempilha (celula *p, int *y);
que desempilha um elemento da pilha. Sua função deve
• retornar o elemento desempilhado em y e
• retornar 1 se o desempilhamento foi bem sucedido, ou 0 caso contrário.
Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct celula {int dado; struct celula *prox;} celula;

void empilha(celula *p, int x){
    celula *nova = malloc(sizeof(celula));
    nova->dado = x; nova->prox = p->prox; p->prox = nova;
}

int desempilha(celula *p, int *y){
    celula *lixo = p->prox;
    if(lixo == NULL){return 0;}
    p->prox = lixo->prox; *y = lixo->dado;
    free(lixo);
    return 1;
}
