/*
Maior substring
Sua tarefa nesse exercício é, dadas duas cadeias de caracteres str e sub, determinar recursivamente qual a maior subcadeia de str que começa e termina por sub.

Atenção: Você não pode usar laços na sua solução.

Entrada
A entrada é composta por duas linhas. A primeira linha contém str, que pode ter tamanho entre zero e 100, e a segunda linha contém sub, que pode ter tamanho entre 1 e 100.

Saída
A saída deve conter uma única linha com o tamanho da maior subcadeia de str que começa e termina por sub.

Exemplo de Entrada 1
catcowcat
cat
Exemplo de Saída 1
9
Exemplo de Entrada 2
catcowcat
cow
Exemplo de Saída 2
3
Exemplo de Entrada 3
cccatcowcatxx
cat
Exemplo de Saída 3
9

Author: John L. Gardenghi (adaptado do problema strDist do codingbat.com)
*/

#include <stdio.h>
#include <string.h>

#define MAX 101

int max(int a, int b) {
    return (a > b) ? a : b;
}

int encontraMaiorSubcadeia(char *str, char *sub, int str_len, int sub_len) {
    if (str_len < sub_len) {
        return 0;
    }

    if (strncmp(str, sub, sub_len) == 0 && strncmp(str + str_len - sub_len, sub, sub_len) == 0) {
        return str_len;
    }

    return max(encontraMaiorSubcadeia(str + 1, sub, str_len - 1, sub_len),
               encontraMaiorSubcadeia(str, sub, str_len - 1, sub_len));
}

int main() {
    char str[MAX];
    char sub[MAX];

    scanf("%s", str);
    scanf("%s", sub);

    int str_len = strlen(str);
    int sub_len = strlen(sub);

    int resultado = encontraMaiorSubcadeia(str, sub, str_len, sub_len);
    printf("%d\n", resultado);

    return 0;
}
