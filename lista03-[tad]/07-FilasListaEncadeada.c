/*
Representação de filas em listas encadeadas
Considere uma fila em listas encadeadas representada por

typedef struct celula {
int dado;
struct celula *prox;
} celula;

Sua tarefa nesse exercício é implementar as operações de enfileiramento e desenfileiramento numa fila circular. Para
tanto, você deve submeter um arquivo contendo apenas:
1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct celula.
3. Uma função

void enfileira (celula **f, int x);

que enfileira o elemento x na fila circular com nó cabeça f.
4. Uma função

int desenfileira (celula *f, int *y);

que desenfileira um elemento da fila circular. Sua função deve
• retornar o elemento desenfileirado em y e
• retornar 1 se o desenfileiramento foi bem sucedido, ou 0 caso contrário (isto é, se a fila estava vazia).

Author: John L. Gardenghi
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct celula{int dado; struct celula *prox;} celula;
void enfileira (celula **f, int x){
    celula *nova = malloc(sizeof(celula));
    nova->prox = (*f)->prox;
    (*f)->prox = nova;
    (*f)->dado = x;
    (*f) = nova;
}

int desenfileira(celula *f, int *y){
    celula *celula_removida = f->prox;
    *y = celula_removida->dado;
    if (f->prox == f){return 0;}
    else{f->prox = celula_removida->prox;}
    return 1;
}
