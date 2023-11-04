/*
Fibonacci
A famosa sequência de Fibonacci é aquela em que um elemento é definido como sendo a soma dos dois anteriores. 
Sua tarefa, neste exercício, é implementar, utilizando recursão, a função de Fibonacci de forma eficiente.
Você deve submeter um arquivo contendo a função recursiva
long int fibonacci (int n);
em que 
n é o elemento da série que sua função deve retornar ( 1 ≤ n ≤ 80).

Por exemplo, se sua função for chamada da forma:

fibonacci(1)
ela deve retornar 1.

Se for chamada da forma:

fibonacci(11)
ela deve retornar 89.
*/

#include <stdio.h>
#include <stdlib.h>

unsigned long int array[81] ;

long int fibonacci(int posicao_n) {
    if((posicao_n <= 2) && array[posicao_n] == NULL) {array[posicao_n] = 1;}
    else if (array[posicao_n] == NULL) {array[posicao_n] = fibonacci(posicao_n - 2) + fibonacci(posicao_n - 1);}
    return array[posicao_n];
};
