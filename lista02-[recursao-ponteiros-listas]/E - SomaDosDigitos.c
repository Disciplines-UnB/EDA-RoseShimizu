/*
Soma dos dígitos
Dado um inteiro não negativo, sua tarefa é escrever uma função recursiva que calcule a soma de todos os dígitos deste número.

Atenção: Você não pode usar laços na sua solução.

Entrada
A entrada é composta por uma única linha contendo um inteiro não negativo 
n (0 ≤ n ≤ 10^12).

Saída
A saída deve conter uma única linha com a soma dos dígitos do inteiro dado na entrada.

Exemplo de Entrada 1
126
Exemplo de Saída 1
9
Exemplo de Entrada 2
49
Exemplo de Saída 2
13
  
Author: John L. Gardenghi (adaptado do problema sumDigits do codingbat.com)
*/

#include <stdio.h>

int Soma(long int n) {
    if (n <= 0){return 0;} 
    else {int resultado = n % 10 + Soma(n / 10); return resultado;
    }
};

int main(){
    long int n;
    scanf("%ld", &n);
    printf("%d\n", Soma(n));
    return 0;
}
