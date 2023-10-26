#include <stdio.h>
#include <stdlib.h>

typedef struct celula {int dado;struct celula *prox;} celula;

int desenfileira(celula *f, int *y){
    celula *lixo;
    if (f->prox == NULL) return 0;
    lixo = f->prox;
    *y = lixo->dado;
    f->prox = lixo->prox; 
    free(lixo); 
    return 1;
}
