/*
Mesclar listas encadeadas
Considere uma lista encadeada com nó cabeça le definida por células
typedef struct celula {
int dado;
struct celula *prox;
} celula;
Faça uma função
void mescla_listas (celula *l1, celula *l2, celula *l3);
que recebe duas listas encadeadas, encabeçadas por l1 e l2, cujo conteúdo está ordenado em ordem não decrescente, e
gere uma nova lista encabeçada por l3 que contém os elementos de l1 e l2 ordenados.
Observações
1. Você não deve alocar nenhuma nova célula na sua função, apenas manipular os ponteiros dos nós de l1 e l2 para
que estejam em l3.
2. Você deve considerar que o nó cabeça l3 já foi alocado antes da chamada para a função mescla_listas.
3. As listas encabeçadas por l1 e l2 não precisam estar intactas após a chamada à sua função.
Exemplos
Suponha, por exemplo, que a lista l1 seja
l1 -> 1 -> 7 -> 9 -> 10 -> NULL
e a lista l2 seja
l2 -> 2 -> 3 -> 8 -> NULL
Sua função deve montar a lista l3 da seguinte forma
l3 -> 1 -> 2 -> 3 -> 7 -> 8 -> 9 -> 10 -> NULL
Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void mescla_listas(celula *l1, celula *l2, celula *l3) {
    celula *atual_l1 = l1->prox;
    celula *atual_l2 = l2->prox;
    celula *atual_l3 = l3;
    l3->prox = NULL;
    atual_l3 = l3;

    while (atual_l1 != NULL && atual_l2 != NULL) {
        if (atual_l1->dado <= atual_l2->dado) {
            atual_l3->prox = atual_l1;
            atual_l1 = atual_l1->prox;
        } else {
            atual_l3->prox = atual_l2;
            atual_l2 = atual_l2->prox;
        }
        atual_l3 = atual_l3->prox;
    }
    if (atual_l1 != NULL) {
        atual_l3->prox = atual_l1;
    } else {
        atual_l3->prox = atual_l2;
    }
}
