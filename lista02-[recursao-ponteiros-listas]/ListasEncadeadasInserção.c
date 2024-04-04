/*
Listas encadeadas - inserção
Considere uma lista encadeada com nó cabeça le definida por células
typedef struct celula {
int dado;
struct celula *prox;
} celula;
Sua tarefa nesse exercício é implementar a operação de inserção na lista encadeada encabeçada por le. Para tanto, você
deve submeter um arquivo contendo apenas:
1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct celula.
3. Uma função que insere um elemento x no início da lista encadeada, cujo protótipo deve ser:
void insere_inicio (celula *le, int x);
4. Uma função que insere um elemento x imediatamente antes da primeira ocorrência de um elemento y na lista
encadeada. Se y não estiver na lista encadeada, x deve ser inserido ao final. O protótipo dessa função deve ser
void insere_antes (celula *le, int x, int y);
Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca_lista_posicao(celula *le, int x) {
    celula *elem = le;
    while (elem->prox != NULL && elem->prox->dado != x) {
        elem = elem->prox;
    }
    return elem;
}

void insere_antes(celula *le, int x, int y) {
    celula *elem = busca_lista_posicao(le, y);
    celula *novo = (celula *)malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = elem->prox;
    elem->prox = novo;
}

void insere_inicio(celula *le, int x) {
    celula *novo = (celula *)malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = le->prox;
    le->prox = novo;
}

void imprime(celula *le) {
    for (celula *elem = le->prox; elem != NULL; elem = elem->prox) {
        printf("%d -> ", elem->dado);
    }
    printf("NULL\n");
}
