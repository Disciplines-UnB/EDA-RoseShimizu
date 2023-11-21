/*
Ordenação
Esse é um problema bem simples, mas vou te pedir uma solução desafiadora! Ordene um conjunto de n números
armazenados num vetor v usando o algoritmo de ordenação por inserção ou por seleção. Mas você deve submeter apenas
sua função de ordenação com o seguinte protótipo:
void ordena (int *v, int n);
Não use funções prontas: desenvolva a sua. Ah! Sua função não pode usar laços.
Author: John L. Gardenghi
*/

void insercaoAuxiliar(int *v, int n, int j) {
    if (j < 0 || v[j] <= v[j + 1]) {
        return;
    }

    int temp = v[j];
    v[j] = v[j + 1];
    v[j + 1] = temp;

    insercaoAuxiliar(v, n, j - 1);
}

void ordena(int *v, int n) {
    if (n <= 1) {
        return;
    }

    ordena(v, n - 1);
    insercaoAuxiliar(v, n, n - 2);
}
