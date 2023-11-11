/*
Pilhas - inserção de elementos
Numa pilha, a inserção de elementos é chamada empilhamento. Sua tarefa nesse exercício é implementar essa operação
usando vetores. Para tanto, você deve submeter a função
int empilha (pilha *p, int x);
que deve
• inserir o elemento x na pilha p e
• retornar 1 se a inserção foi bem sucedida, e 0 caso contrário.
Espera-se que pilha seja uma struct da forma
typedef struct pilha {
int *dados;
int N, topo;
} pilha;
de tal forma que topo indica a primeira posição livre da pilha (ou seja, na inicialização vale 0 e quanto a pilha estiver
cheia, vale N).
Observação: se na inserção, o elemento não couber na pilha, o vetor dados deve ser redimensionado.
O arquivo a ser submetido deve incluir apenas
1. os #include necessários para a execução do seu código,
2. a declaração da estrutura necessária e
3. a função solicitada.
Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
}celula;

int empilha (celula *p, int x){
    celula *novo = malloc(sizeof(celula));
    if(novo == 0) return 0;
    novo -> dado =x;
    novo -> prox = p -> prox;
    p -> prox = novo;
    return 0;
}
