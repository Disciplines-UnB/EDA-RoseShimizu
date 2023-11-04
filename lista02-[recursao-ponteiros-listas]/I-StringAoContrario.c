/*
String ao contrário
Faça um programa que leia uma string e a imprima ao contrário.

Atenção: Você não pode usar laços na sua solução.

Entrada
A entrada é composta por uma única linha contendo uma string de, no máximo, 500 caracteres, contendo letras (maiúsculas e minúsculas, não acentuadas) e números.

Saída
A saída deve conter uma única linha com a string impressa ao contrário.

Exemplo de Entrada 1
amor
Exemplo de Saída 1
roma

Exemplo de Entrada 2
paralelepipedo
Exemplo de Saída 2
odepipelelarap

Author: John L. Gardenghi
*/



#include <stdio.h>

void inverterString(char *string) {
    if (*string == '\0') {return;}
    inverterString(string + 1);
    printf("%c", *string);
}

int main() {
    char string[501];
    scanf("%s", string);  
    inverterString(string);
    printf("\n");
    return 0;
}
