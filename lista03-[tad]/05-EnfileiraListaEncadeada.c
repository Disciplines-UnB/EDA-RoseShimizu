/*
Filas - inserção de elementos
Numa fila, a inserção de elementos é chamada enfileiramento. Sua tarefa nesse exercício é implementar essa operação
usando listas encadeadas. Para tanto, você deve submeter a função

celula *enfileira (celula *f, int x);

que deve
• inserir o elemento x na fila encabeçada por f e
• retornar o ponteiro para o novo nó cabeça, se a inserção foi bem sucedida, ou NULL, caso contrário.
Espera-se que celula seja uma struct da forma

typedef struct celula {
int dado;
struct celula *prox;
} celula;

O arquivo a ser submetido deve incluir apenas
1. os #include necessários para a execução do seu código,
2. a declaração da estrutura necessária e
3. a função solicitada.

Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *f, int x)
{
    celula *new = malloc(sizeof(celula));
    if(new == NULL || f == NULL)return NULL;
    new->prox = f->prox;
    f->prox = new;
    f->dado = x;
    f = new;
    return new;
}
