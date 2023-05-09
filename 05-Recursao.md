# Recursão

## Algoritmos Recursivos
Recursão é um conceito importante em programação que permite que uma função chame a si mesma repetidamente até que uma condição de parada seja alcançada. Em C, assim como em outras linguagens de programação, a recursão é implementada por meio de funções que se chamam repetidamente, normalmente com argumentos diferentes, até que a condição de parada seja alcançada.

A seguir estão alguns pontos importantes a serem considerados ao trabalhar com recursão em C:

- A função recursiva deve ter uma condição de saída clara para evitar loops infinitos.
- Cada chamada recursiva da função cria uma nova instância da função no topo da pilha de chamadas, o que significa que a recursão pode rapidamente esgotar a memória disponível.
- A recursão pode levar a um código mais simples e legível em algumas situações, mas também pode ser menos eficiente do que soluções iterativas em termos de desempenho e uso de memória.

Aqui está um exemplo simples de função recursiva em C que calcula o fatorial de um número:

```c
int fatorial(int n) {
    if (n == 0) {  // condição de parada
        return 1;
    } else {
        return n * fatorial(n-1);  // chamada recursiva
    }
}
```

Neste exemplo, a função `fatorial` calcula o fatorial de um número inteiro `n` utilizando recursão. Se `n` for igual a 0, a função retorna 1 como condição de saída. Caso contrário, a função chama a si mesma com o argumento `n-1`, o que eventualmente levará a uma chamada recursiva com o argumento 0 e, assim, atingirá a condição de saída.

É importante lembrar que a recursão pode não ser a melhor opção em todos os casos e, em alguns casos, pode ser preferível usar uma solução iterativa para melhorar o desempenho ou reduzir o uso de memória.

## Exemplos de Algoritimos recursivos
Claro, aqui estão alguns exemplos de funções recursivas:

1. Fatorial: a função fatorial é um exemplo clássico de uma função recursiva. Ela é definida por:

```c
int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}
```

Essa função calcula o fatorial de um número inteiro `n`. Ela utiliza a definição matemática do fatorial, que é `n! = n * (n-1) * (n-2) * ... * 1`. Observe que a função `fatorial` chama a si mesma com o argumento `n-1`, o que faz com que a recursão ocorra até que `n` seja igual a 0.

2. Sequência de Fibonacci: a sequência de Fibonacci é outra função recursiva famosa. Ela é definida por:

```c
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
```

Essa função retorna o `n`-ésimo número da sequência de Fibonacci. A sequência começa com os números 0 e 1, e cada número subsequente é a soma dos dois números anteriores. A função `fibonacci` chama a si mesma duas vezes, com os argumentos `n-1` e `n-2`, o que faz com que a recursão ocorra até que `n` seja igual a 0 ou 1.

3. Busca binária: a busca binária é um algoritmo de busca eficiente que também é implementado de forma recursiva. Aqui está um exemplo de código:

```c
int busca_binaria(int array[], int esquerda, int direita, int elemento) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (array[meio] == elemento) {
            return meio;
        }

        if (array[meio] > elemento) {
            return busca_binaria(array, esquerda, meio-1, elemento);
        }

        return busca_binaria(array, meio+1, direita, elemento);
    }

    return -1;
}
```

Essa função recebe um array de inteiros `array`, os índices `esquerda` e `direita` que indicam o intervalo em que o elemento pode estar, e o elemento a ser buscado `elemento`. Ela utiliza a técnica de busca binária para encontrar o elemento no array. A função chama a si mesma recursivamente com índices atualizados até que o elemento seja encontrado ou a busca seja concluída sem sucesso.

## Método da Divisão e Conquista
