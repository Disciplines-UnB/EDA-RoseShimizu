/*
Cartas

Considere uma pilha de n cartas enumeradas de 1 até n, sendo que a carta 1 está no topo e a carta n está na base. A
seguinte operação é realizada enquanto tiver duas ou mais cartas na pilha:
Jogue fora a carta do topo e mova a próxima carta (que ficou no topo) para a base da pilha.
Sua tarefa é escrever um programa que leia o valor de n e imprima na tela a sequência de cartas descartadas e a última
carta da pilha.
Entrada
A entrada é composta por um único valor inteiro n (n ≥ 2).
Saída
Observe os exemplos abaixo.
Exemplo de Entrada 1
6
Exemplo de Saída 1
Cartas descartadas: 1, 3, 5, 2, 6
Carta restante: 4
Exemplo de Entrada 2
7
Exemplo de Saída 2
Cartas descartadas: 1, 3, 5, 7, 4, 2
Carta restante: 6
Exemplo de Entrada 3
12
Exemplo de Saída 3
Cartas descartadas: 1, 3, 5, 7, 9, 11, 2, 6, 10, 4, 12
Carta restante: 8

Author: mojificação por John L. Gardenghi
*/

#include <stdio.h>
#include <stdlib.h>

void descarta_cartas(int n){
    int *cartas = malloc(sizeof(int) * n * 2), *cartas_descartadas = malloc(sizeof(int) * n);
    int inicio = 0, fim = n - 1, fim_descarte = 0;
    for (int i = 0; i < n; i++){cartas[i] = i + 1;}
    for (int i = 1; i < n; i++){cartas_descartadas[fim_descarte++] = cartas[inicio]; cartas[++fim] = cartas[inicio + 1]; inicio += 2;}
    printf("Cartas descartadas: %d", cartas_descartadas[0]);
    for (int j = 1; j < fim_descarte; j++){printf(", %d", cartas_descartadas[j]);}
    printf("\n"); printf("Carta restante: %d", cartas[inicio]); printf("\n");
}

int main(){
    int num;
    scanf("%d", &num);
    descarta_cartas(num);
    return 0;
}
