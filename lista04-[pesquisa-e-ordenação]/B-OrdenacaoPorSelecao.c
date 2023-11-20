/*
SELEÇÃO
Simples! Apenas ordene os números lidos da entrada padrão utilizando o Algoritmo de Ordenação SELEÇÃO. Não tente
trapacear rodando outra função pronta ou outro algoritmo de ordenação. Eu posso ver o seu código 8ˆ)
ENTRADA
A entrada possui um único caso de teste com uma quantidade arbitrária de números, a entrada termina quando o arquivo
terminar (EOF). Os números cabem em um inteiro de 32bits.
Sabemos que cada caso de teste não possui mais que 1000 elementos.
SAÍDA
Imprima os mesmos números ordenados de forma não decrescente. Os números devem ser separados por espaço e não
deve sobrar espaço após o último número que deve ter uma quebra de linha.
EXEMPLO
Exemplo de Entrada
7 3 2 5 4 3
Saída para o exemplo de entrada acima
2 3 3 4 5 7
Author: Bruno Ribas
*/

#include <stdio.h>

void swap(int *xp, int *yp) {int temp = *xp;*xp = *yp; *yp = temp;}

void selectionSort(int arr[], int n, int index) {
    if(index == n) {return;}
    int min_index = index;
    for(int j = index + 1; j < n; j++){if (arr[j] < arr[min_index]){min_index = j;}}
    swap(&arr[min_index], &arr[index]);
    selectionSort(arr, n, index + 1);
}

int main() {
    int arr[1000], n = 0, num;
    while (scanf("%d", &num) != EOF) {
        arr[n++] = num;
        if (n >= 1000){break;}
    }

    selectionSort(arr, n, 0);
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {printf(" ");}
    }
    printf("\n");
    return 0;
}

/*
- **Estabilidade**: Não é estável. Pode alterar a ordem de elementos iguais.
- **In-Place**: Sim, é in-place. Não usa espaço extra significativo além do espaço necessário para os elementos a serem ordenados.
- **Adaptabilidade**: Não é adaptável. Sua eficiência não melhora com listas parcialmente ordenadas.
- **Complexidade Temporal**:
  - Pior caso: O(n²)
  - Melhor caso: O(n²)
  - Caso médio: O(n²)
- **Complexidade Espacial Auxiliar**: O(1) para a versão iterativa, mas a versão recursiva tem uma complexidade espacial adicional devido à pilha de chamadas da recursão.
*/
