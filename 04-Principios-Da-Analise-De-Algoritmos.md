# Princípios da Análise de Algoritmos

## Complexidade Computacional

Certamente! A complexidade computacional é uma medida que descreve o desempenho de um algoritmo, ou seja, o tempo e o espaço necessários para resolver um problema com uma entrada de tamanho `n`. A complexidade é influenciada pelo número de operações que o algoritmo precisa realizar em função do tamanho da entrada.

Existem duas formas de medir a complexidade de um algoritmo: complexidade de tempo e complexidade de espaço. A complexidade de tempo mede quantas operações o algoritmo precisa executar para resolver um problema em função do tamanho da entrada. Já a complexidade de espaço mede a quantidade de memória que o algoritmo precisa para armazenar seus dados em função do tamanho da entrada.

Existem diferentes tipos de notação utilizados para descrever a complexidade computacional, sendo os mais comuns a notação Big O (O), a notação Theta (Θ) e a notação Omega (Ω). A notação Big O é a mais utilizada e descreve o limite superior do tempo de execução do algoritmo em função do tamanho da entrada.

Por exemplo, considere um algoritmo de busca linear que recebe uma lista de `n` elementos e precisa encontrar um elemento específico. Esse algoritmo tem uma complexidade de tempo de O(n), pois o número de operações necessárias para encontrar o elemento aumenta linearmente com o tamanho da lista. Ou seja, se o tamanho da lista for dobrado, o número de operações necessárias para encontrar o elemento também será dobrado.

É importante lembrar que a complexidade computacional é uma medida teórica e que pode variar dependendo da implementação do algoritmo e do hardware em que ele é executado. Além disso, é importante escolher o algoritmo mais adequado para o problema em questão, levando em consideração tanto a complexidade de tempo quanto a de espaço.


## Analise de Complexidade Computacional 

###  Análise assintótica: notação Big-O

A análise assintótica é uma técnica utilizada para analisar o desempenho de um algoritmo quando o tamanho da entrada tende ao infinito. Ela é importante porque nos permite comparar algoritmos e escolher o mais adequado para resolver um determinado problema.

Uma das notações mais comuns utilizadas na análise assintótica é a notação Big-O. Ela é usada para descrever a complexidade de tempo de um algoritmo, ou seja, quantas operações ele realiza em função do tamanho da entrada.

A notação Big-O é escrita como O(f(n)), onde f(n) é uma função que descreve a complexidade de tempo do algoritmo em relação ao tamanho da entrada n. A notação Big-O representa o pior caso de complexidade, ou seja, o número máximo de operações que o algoritmo pode realizar em função do tamanho da entrada.

Por exemplo, se um algoritmo tem complexidade O(n), isso significa que ele realiza no máximo um número de operações proporcional a n. Se a entrada do algoritmo for dobrada, o número de operações também será dobrado.

A notação Big-O também pode ser usada para descrever a complexidade de espaço de um algoritmo, ou seja, quanto espaço de memória ele usa em função do tamanho da entrada.

É importante ressaltar que a notação Big-O descreve apenas o comportamento assintótico do algoritmo e não leva em conta fatores como a constante multiplicativa ou a ordem dos termos. Por exemplo, um algoritmo com complexidade O(2n) é equivalente a um algoritmo com complexidade O(n) em termos de comportamento assintótico.

Em resumo, a notação Big-O é uma ferramenta útil para descrever a complexidade de tempo e espaço de um algoritmo e permite comparar a eficiência de diferentes algoritmos para resolver um determinado problema.


### O(1), O(2), O(3)
O(1), O(2), O(3) são casos especiais de complexidade computacional, onde o tempo de execução do algoritmo é constante, independente do tamanho da entrada. Aqui estão alguns exemplos:

- O(1): Algoritmos que possuem um tempo de execução constante, independentemente do tamanho da entrada. Um exemplo é a busca de um elemento em uma tabela hash.

- O(2): Algoritmos que possuem um tempo de execução constante, mas que realizam duas operações em vez de uma. Um exemplo é a multiplicação de dois números de um dígito.

- O(3): Algoritmos que possuem um tempo de execução constante, mas que realizam três operações em vez de uma. Um exemplo é o cálculo do cubo de um número.

É importante notar que, embora esses casos especiais sejam extremamente eficientes em termos de tempo de execução, eles geralmente são limitados em sua capacidade de processamento e são aplicáveis apenas a problemas específicos. Além disso, esses casos especiais podem ser afetados por outras restrições, como a quantidade de memória necessária para executar o algoritmo ou as limitações do hardware em que ele é executado.

### O(f(n))
A complexidade de um algoritmo é definida como O(f(n)), onde f(n) é uma função que determina o tempo de execução do algoritmo em relação ao tamanho da entrada (geralmente representado por n). Aqui estão alguns exemplos de algoritmos e sua complexidade:

- O(n): Algoritmos que percorrem um array ou lista uma única vez, ou que têm um loop simples com uma condição de parada baseada em n.

- O(n log n): Algoritmos de ordenação como o merge sort, quicksort e heapsort.

- O(n^2): Algoritmos que possuem dois loops aninhados, como uma busca em matriz ou um algoritmo de ordenação bubble sort.

- O(n^3): Algoritmos que possuem três loops aninhados, como algumas operações em matrizes tridimensionais.

- O(n^k): Algoritmos que possuem k loops aninhados, onde k é um número fixo.

- O(2^n): Algoritmos que envolvem a geração de todas as combinações possíveis de um conjunto de tamanho n, como a solução por força bruta de alguns problemas NP-completos.

É importante notar que a complexidade de um algoritmo não leva em consideração constantes ou termos de menor ordem. Por exemplo, um algoritmo que realiza 2n operações seria considerado O(n), assim como um algoritmo que realiza n + 1000 operações. A complexidade de um algoritmo também não considera as características específicas do hardware ou do ambiente em que ele é executado, e é uma medida de pior caso, ou seja, representa o tempo máximo que o algoritmo levará para ser executado.

## Exemplos de Analise de Complexidade Computacional 

### Exemplo 1: Soma de números

O seguinte código em C soma os números de 1 até n:

```c
int soma(int n) {
  int resultado = 0;
  for (int i = 1; i <= n; i++) {
    resultado += i;
  }
  return resultado;
}
```

A complexidade de tempo desse algoritmo é O(n), pois o número de operações aumenta linearmente com o tamanho da entrada (no caso, `n`). A complexidade de espaço é O(1), pois o algoritmo utiliza uma quantidade constante de memória (uma variável `resultado` e um loop que utiliza uma variável `i`).

### Exemplo 2: Busca binária

O seguinte código em C realiza uma busca binária em uma lista ordenada de números:

```c
int busca_binaria(int lista[], int tamanho, int chave) {
  int inicio = 0, fim = tamanho - 1, meio;
  while (inicio <= fim) {
    meio = (inicio + fim) / 2;
    if (lista[meio] == chave) {
      return meio;
    } else if (lista[meio] < chave) {
      inicio = meio + 1;
    } else {
      fim = meio - 1;
    }
  }
  return -1;
}
```

A complexidade de tempo desse algoritmo é O(log n), pois o número de operações diminui exponencialmente a cada iteração do loop. A complexidade de espaço é O(1), pois o algoritmo utiliza uma quantidade constante de memória (três variáveis inteiras: `inicio`, `fim` e `meio`).

### Exemplo 3: Multiplicação de matrizes

O seguinte código em C realiza a multiplicação de duas matrizes:

```c
void multiplicar_matrizes(int a[][COLUNAS], int b[][COLUNAS], int c[][COLUNAS]) {
  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      c[i][j] = 0;
      for (int k = 0; k < COLUNAS; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}
```

A complexidade de tempo desse algoritmo é O(n^3), pois o número de operações aumenta com o cubo do tamanho da entrada (no caso, `n`). A complexidade de espaço é O(n^2), pois o algoritmo utiliza três matrizes de tamanho `n`x`n`.

É importante notar que a análise de complexidade de um algoritmo depende das operações básicas envolvidas na implementação do mesmo. Em geral, a análise considera o número de iterações de loops, o número de operações aritméticas, o número de chamadas a funções e outras operações relevantes para o problema em questão.


### Exemplo 4 - Algoritmo com loop for:
```c
for (int i = 0; i < n; i++) {
    printf("%d\n", i);
}
```
Este algoritmo tem uma complexidade linear O(n), pois ele executa n iterações do loop.

### Exemplo 5 -Algoritmo com loop while:
```c
int i = 0;
while (i < n) {
    printf("%d\n", i);
    i++;
}
```
Este algoritmo também tem uma complexidade linear O(n), pois ele executa no máximo n iterações do loop.

### Exemplo 6 - Algoritmo com loop for aninhado:
```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        printf("%d %d\n", i, j);
    }
}
```
Este algoritmo tem uma complexidade quadrática O(n*m), pois ele executa n x m iterações do loop.

### Exemplo 7 - Algoritmo com condicional if:
```c
if (n % 2 == 0) {
    printf("n é par\n");
} else {
    printf("n é ímpar\n");
}
```
Este algoritmo tem uma complexidade constante O(1), pois ele executa apenas uma operação condicional.

### Exemplo 8 - Algoritmo com condicional if-else aninhado:
```c
if (n < 10) {
    printf("n é menor que 10\n");
} else if (n < 100) {
    printf("n é menor que 100\n");
} else {
    printf("n é maior ou igual a 100\n");
}
```
Este algoritmo também tem uma complexidade constante O(1), pois ele executa no máximo três operações condicionais simples.

É importante lembrar que a complexidade computacional de um algoritmo pode variar dependendo da entrada de dados. Por exemplo, se um algoritmo tiver um loop que executa de 1 a n vezes, a complexidade será O(n), mas se o loop executar de 1 a n/2 vezes, a complexidade será O(n/2), que é equivalente a O(n).

### Exemplo 9 - O(2^n)
Segue um exemplo em código C de uma função que usa um algoritmo de força bruta para resolver o problema do subconjunto:

```c
#include <stdio.h>

void subset(int arr[], int n) {
    int i, j;
    for (i = 0; i < (1 << n); i++) {
        printf("{ ");
        for (j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    subset(arr, n);
    return 0;
}
```

Nesse exemplo, a função `subset` recebe um vetor `arr` de tamanho `n` e gera todos os possíveis subconjuntos desse vetor usando um algoritmo de força bruta. O loop externo executa 2^n iterações, pois há 2^n possíveis subconjuntos. O loop interno verifica quais elementos do vetor devem ser incluídos em cada subconjunto e os imprime na tela. Esse algoritmo tem complexidade O(2^n) devido ao número de possíveis subconjuntos.

### Exemplo 10 - O(n^3)
Segue um exemplo em código C de uma função que realiza a multiplicação de duas matrizes usando três loops aninhados:

```c
#include <stdio.h>

void matrix_mult(int A[][3], int B[][3], int C[][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[3][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};
    int B[3][3] = {{9, 8, 7},
                  {6, 5, 4},
                  {3, 2, 1}};
    int C[3][3];
    matrix_mult(A, B, C);
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

Nesse exemplo, a função `matrix_mult` recebe duas matrizes `A` e `B` de tamanho 3x3 e retorna a matriz resultante `C` da multiplicação dessas matrizes. Para isso, são usados três loops aninhados, onde o loop mais externo executa n vezes, o loop do meio executa n vezes e o loop mais interno executa n vezes, resultando em uma complexidade de O(n^3).

Exemplo 11 - O(n^3)
```c
void printTriplets(int arr[], int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
            }
        }
    }
}
```
