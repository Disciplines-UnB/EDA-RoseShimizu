/*
String ao contrário
Faça um programa que leia uma string e a imprima ao contrário.
Entrada
A entrada é composta por uma única linha contendo uma string de, no máximo, 500 caracteres, contendo letras (maiúsculas
e minúsculas, não acentuadas) e números.
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
#include <stdlib.h>
#include <string.h>

void stringcontrario(char *string, char *newstring, int index, int antiindex){
    if (index < strlen(string)){
        newstring[index] = string[antiindex]; index++; antiindex--; 
        stringcontrario(string, newstring, index, antiindex);
        }
}

int main(){
    char *string = malloc(510 * sizeof(char));
    scanf("%s", string);
    char *newstring = malloc(strlen(string) - 1 * sizeof(char));
    stringcontrario(string, newstring, 0, strlen(string) - 1);
    printf("%s\n", newstring);
    return 0;
}
