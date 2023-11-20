/*
Ordenação eficiente
Esse é um problema bem simples! Ordene um conjunto de números lidos usando um algoritmo de ordenação eficiente.
Não use funções prontas: desenvolva a sua.
Entrada
A entrada é composta por duas linhas. A primeira contém a quantidade n de elementos que devem ser ordenados. A
segunda contém os n números separados por espaço.
Saída
Sua saída deve conter os números ordenados de forma não decrescente. Os números devem ser separados por espaço e não
deve sobrar espaço após o último número que deve ter uma quebra de linha.
Exemplo de Entrada 1
6
7 3 2 5 4 3
Exemplo de Saída 1
2 3 3 4 5 7
Author: Bruno Ribas
*/

#include <stdio.h>

void swap(int *a, int *b){int temp = *a;*a = *b;*b = temp;}

int medianOfThree(int *arr, int a, int b, int c){
    if ((arr[a] - arr[b]) * (arr[c] - arr[a]) >= 0) 
        return a;
    else if ((arr[b] - arr[a]) * (arr[c] - arr[b]) >= 0)
        return b;
    else
        return c;
}

int partition(int arr[], int low, int high){
    int pivotIndex = medianOfThree(arr, low, high, (low + high)/2);
    swap(&arr[pivotIndex], &arr[high]);
    int pivot = arr[high], i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {i++; swap(&arr[i], &arr[j]);}
    }
    swap(&arr[i + 1], &arr[high]);
    return(i + 1);
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1); quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){scanf("%d", &arr[i]);}
    quickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if (i < n - 1) {printf(" ");}
    }
    printf("\n");
    return 0;
}

/*
- **Estabilidade**: Não é estável. Pode alterar a ordem de elementos iguais.
- **In-Place**: Sim, é in-place. Não usa espaço extra significativo além do espaço necessário para os elementos a serem ordenados.
- **Adaptabilidade**: Não é adaptável. Sua eficiência não melhora significativamente com listas parcialmente ordenadas.
- **Complexidade Temporal**:
  - Pior caso: O(n²) - geralmente ocorre com escolhas ruins de pivôs.
  - Melhor caso: O(n log n) - acontece quando as partições são balanceadas.
  - Caso médio: O(n log n) - para a maioria das entradas aleatórias.
- **Complexidade Espacial Auxiliar**: O(log n) - devido à pilha de chamadas da recursão para o caso médio e melhor caso. No pior caso, pode degradar para O(n).

Este código foi otimizado para escolher melhores pivôs (mediana de três), o que pode melhorar a performance do Quicksort, especialmente em listas que poderiam causar o pior caso com escolhas de pivôs simples.
*/
