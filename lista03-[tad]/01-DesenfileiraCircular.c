#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int desenfileira(fila *f, int *y) {
    if (f == NULL || f->dados == NULL || f->p == f->u) {
        return 0; 
    }

    *y = f->dados[f->p];
    f->p = (f->p + 1) % f->N;

    if (f->p == f->u) {
        f->p = 0;
        f->u = 0;
    }

    return 1;
}
