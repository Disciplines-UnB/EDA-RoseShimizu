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
• Você deve considerar uma fila circular.
• Se na inserção, o elemento não couber na fila, o vetor dados deve ser redimensionado.
O arquivo a ser submetido deve incluir apenas
1. os #include necessários para a execução do seu código,
2. a declaração da estrutura necessária e
3. a função solicitada.

Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct fila{int *dados; int N, p, u;} fila;
int enfileira(fila *f, int x){
    if ((f->u + 1) % f->N == f->p){f->dados = realloc(f->dados, 2 * f->N * sizeof(int));
        if (f->dados == NULL){return 1;}
        for (int i = f->N; i < 2 * f->N; i++){f->dados[i] = 0;}
        if (f->p != 0){
            if (f->N - f->p < f->u){
                for (int i = f->N - 1; i >= f->p; i--){f->dados[i + f->N] = f->dados[i];}
                f->p += f->N;
            }
            else
            {
                for (int i = 0; i < f->u; i++){f->dados[i + f->N] = f->dados[i];}
                f->u += f->N;
            }
        }
        f->N *= 2;
    }
    f->dados[f->u] = x;
    f->u = (f->u + 1) % f->N;
    return 0;
}
