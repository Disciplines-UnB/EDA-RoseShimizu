/*
Pilhas - inserção de elementos
Numa pilha, a inserção de elementos é chamada empilhamento. Sua tarefa nesse exercício é implementar essa operação
usando listas encadeadas. Para tanto, você deve submeter a função
int empilha (celula *p, int x);
que deve
• inserir o elemento x na pilha p e
• retornar 1 se a inserção foi bem sucedida, e 0 caso contrário.
Espera-se que celula seja uma struct da forma
typedef struct celula {
int dado;
struct celula *prox;
} celula;
e que a pilha seja representada por uma lista encadeada com nó cabeça.
O arquivo a ser submetido deve incluir apenas
1. os #include necessários para a execução do seu código,
2. a declaração da estrutura necessária e
3. a função solicitada.
Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

int desempilha (celula *p, int *y){
    celula *l = p->prox;
    if(l == NULL) return 0;
    *y = l -> dado;
    p -> prox = l -> prox;
    l -> prox = NULL;
    free(l);
    return 1;
}
