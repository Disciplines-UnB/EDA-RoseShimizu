/*
Representação de filas em vetores
Considere uma fila em vetores representada por

typedef struct {
int *v; // Vetor que representa a fila
int N; // Tamanho da fila
int inicio, fim; // Indicadores de inicio e final da fila
} fila;

Sua tarefa nesse exercício é implementar as operações de enfileiramento e desenfileiramento numa fila circular. Para
tanto, você deve submeter um arquivo contendo apenas:
1. Os #include necessários para execução das instruções utilizadas no seu código.
2. A definição da struct fila.
3. Uma função

int enfileira (fila *f, int x);

que enfileira o elemento x na fila circular f. Sua função deve retornar 1 se bem sucedido, ou 0 caso a fila estava cheia.
Não é necessário redimensionar a fila.
4. Uma função

int desenfileira (fila *f, int *y);

que desenfileira um elemento da fila circular. Sua função deve
• retornar o elemento desenfileirado em y e
• retornar 1 se o desenfileiramento foi bem sucedido, ou 0 caso contrário (isto é, se a fila estava vazia).

Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct{int *v; int N, inicio, fim;} fila;
int enfileira(fila *f, int x){
    if ((f->fim + 1) % f->N == f->inicio){return 0;}
    f->v[f->fim] = x;
    f->fim = (f->fim + 1) % f->N;
    return 1;
}

int desenfileira(fila *f, int *y){
    if (f->inicio == f->fim){return 0;}
    *y = f->v[f->inicio];
    f->inicio = (f->inicio + 1) % f->N;
    return 1;
}
