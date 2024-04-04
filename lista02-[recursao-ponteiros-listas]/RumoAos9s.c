/*
Um truque bem conhecido para descobrir se um inteiro N é um múltiplo de nove é computar a soma S dos seus dígitos. Se
S é um múltiplo de nove, então N também é. Este é um teste recursivo e a profundidade da recursão necessária para obter
a resposta para o número N é chamada o grau-9 de N.
Sua tarefa é, dado um inteiro positivo N, determinar se ele é um múltiplo de nove e, caso ele seja, qual o seu grau-9.
Entrada
A entrada é um arquivo tal que cada linha contém um inteiro positivo. Uma linha contendo o número 0 indica o fim da
entrada. Os números fornecidos na entrada possuem até 1000 dígitos. Saída
Saida
A saída do programa deve indicar, para cada número da entrada, se ele é um múltiplo de nove e, caso ele seja, o seu
grau-9. Veja o exemplo de saída para saber o formato esperado da saída.
Exemplo de Entrada
999999999999999999999
9
9999999999999999999999999999998
0
Exemplo de Saída:
999999999999999999999 is a multiple of 9 and has 9-degree 3.
9 is a multiple of 9 and has 9-degree 1.
9999999999999999999999999999998 is not a multiple of 9.
*/
#include <stdio.h>

int digitSum(int n) {
    if (n / 10 == 0) return n;
    else {return digitSum(n / 10) + n % 10;}
}

int degree9(int num) {
    int count = 0;
    if (num < 10) return 1;
    else {num = digitSum(num); return degree9(num) + 1;}
}

int calculateSum(char *string) {
    int sum = 0;
    if (*string == '\0') {return *string;}
    else {sum = (*string) - '0' + calculateSum(string + 1); return sum;}
}

int main() {
    char string[10000]; int x;
    while (scanf("%s", string) && calculateSum(string) != 0) {
        x = degree9(calculateSum(string));
        if (x == 0) break;
        if (calculateSum(string) == 9) x = 1;
        if (calculateSum(string) % 9 == 0) {printf("%s is a multiple of 9 and has 9-degree %i.\n", string, x);}
        else {printf("%s is not a multiple of 9.\n", string);}
    }
    return 0;
}
