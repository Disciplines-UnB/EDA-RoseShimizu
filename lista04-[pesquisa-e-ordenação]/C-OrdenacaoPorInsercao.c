/*
INSERÇÃO
Simples! Apenas ordene os números lidos da entrada padrão utilizando o Algoritmo de Ordenação INSERÇÃO. Não tente
trapacear rodando outra função pronta ou outro algoritmo de ordenação. Eu posso ver o seu código 8ˆ)
ENTRADA
A entrada possui um único caso de teste com uma quantidade arbitrária de números, a entrada termina quando o arquivo
terminar (EOF). Os números cabem em um inteiro de 32bits.
Sabemos que cada caso de teste não possui mais que 50000 elementos.
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

void insertionSortRecursive(int arr[], int n) {
    if (n <= 1) {return;}
    insertionSortRecursive(arr, n - 1);
    int last = arr[n - 1], j = n - 2;
    while(j >= 0 && arr[j] > last){arr[j + 1] = arr[j]; j--;}
    arr[j + 1] = last;
}

int main() {
    int arr[50000], n = 0, num;
    while(scanf("%d", &num) != EOF){
        arr[n++] = num;
        if(n >= 50000){break;}
    }

    insertionSortRecursive(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if (i < n - 1) {printf(" ");}
    }
    printf("\n");
    return 0;
}

/*
- **Estabilidade**: É estável. Mantém a ordem de elementos iguais.
- **In-Place**: Sim, é in-place. Não usa espaço extra significativo além do espaço necessário para os elementos a serem ordenados.
- **Adaptabilidade**: É adaptável. Se a lista está parcialmente ordenada, o algoritmo pode ser mais eficiente.
- **Complexidade Temporal**:
  - Pior caso: O(n²) - quando os elementos estão na ordem inversa.
  - Melhor caso: O(n) - quando os elementos já estão ordenados.
  - Caso médio: O(n²) - para uma entrada aleatória.
- **Complexidade Espacial Auxiliar**: O(1) para a versão iterativa, mas a versão recursiva tem uma complexidade espacial adicional devido à pilha de chamadas da recursão.
*/
