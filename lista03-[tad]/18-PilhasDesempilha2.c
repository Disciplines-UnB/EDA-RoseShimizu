/*
Pilhas - remoção de elementos
Numa pilha, a remoção de elementos é chamada desempilhamento. Sua tarefa nesse exercício é implementar essa
operação usando vetores. Para tanto, você deve submeter a função
int desempilha (pilha *p, int *y);
que deve
• remover um elemento da pilha p e salvá-lo em y e
• retornar 1 se a remoção foi bem sucedida, e 0 caso contrário.
Espera-se que pilha seja uma struct da forma
typedef struct pilha {
int *dados;
int N, topo;
} pilha;
de tal forma que topo indica a primeira posição livre da pilha (ou seja, na inicialização vale 0 e quanto a pilha estiver
cheia, vale N).
O arquivo a ser submetido deve incluir apenas
1. os #include necessários para a execução do seu código,
2. a declaração da estrutura necessária e
3. a função solicitada.
Author: John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
  int *dados;
  int N, topo;
} pilha;

int desempilha (pilha *p, int *y){
    if(p->topo == 0){
        return 0;
    }
    p->topo--;
    *y= p->dados[p->topo];

    return 1;
}
