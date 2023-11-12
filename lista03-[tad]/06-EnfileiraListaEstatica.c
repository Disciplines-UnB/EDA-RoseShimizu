/*
Filas - inserção de elementos
Numa fila, a inserção de elementos é chamada enfileiramento. Sua tarefa nesse exercício é implementar essa operação
usando vetores. Para tanto, você deve submeter a função

int enfileira (fila *f, int x);

que deve
• inserir o elemento x na fila f e
• retornar 1 se a inserção foi bem sucedida, e 0 caso contrário.
Espera-se que fila seja uma struct da forma

typedef struct fila {
int *dados;
int N, p, u;
} fila;

Observações:
• Você deve considerar uma fila não circular.
• Se na inserção, o elemento não couber na fila, o vetor dados deve ser redimensionado.
O arquivo a ser submetido deve incluir apenas
1. os #include necessários para a execução do seu código,
2. a declaração da estrutura necessária e
3. a função solicitada.
Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct fila {int *dados; int N, p, u;} fila;
int enfileira(fila *f, int x){
    if(f->u == f->N){
        f->N *= 2;
        int *novo = realloc(f->dados, f->N * sizeof(int));
        if (novo == NULL){return 0;}
        f->dados = novo;
    }
    f->dados[f->u] = x;
    f->u++;
    return 0;
}
