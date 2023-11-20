/*
BOLHA
Simples! Apenas ordene os números lidos da entrada padrão utilizando o Algoritmo de Ordenação BOLHA. Não tente
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
#include <stdbool.h>

void bubbleSortRecursive(int arr[], int n) {
    bool swapped = false;
    if (n == 1) {return;}
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swapped = true;
        }
    }
    if (!swapped) {return;}
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    int arr[1000], n = 0, num;
    while (scanf("%d", &num) != EOF) {
        arr[n++] = num;
        if (n >= 1000) {break;}
    }
    bubbleSortRecursive(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {printf(" ");}
    }
    printf("\n");
    return 0;
}

/*
Características do Algoritmo de Ordenação Bolha:
Estável: Mantém a ordem de elementos iguais.
In-Place: Não usa espaço extra significativo.

Não Adaptável: Eficiência geralmente não melhora com listas parcialmente ordenadas.
Complexidade Temporal:
Pior caso: O(n²)
Melhor caso: O(n) (com otimização)
Caso médio: O(n²)
Complexidade Espacial Auxiliar: O(1)

**Cálculo Total de Comparações**:
   - Total de comparações = \( (n-1) + (n-2) + (n-3) + \ldots + 1 \)
   - Esta é uma série aritmética que pode ser sumarizada como \( \frac{n(n-1)}{2} \).
*/
