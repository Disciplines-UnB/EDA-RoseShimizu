/*
CARTAS
Beatriz gosta muito de jogar cartas com as amigas. Para treinar memória e raciocínio lógico, ela inventou um pequeno passatempo com cartas. Ela retira as cinco primeiras cartas do topo de um baralho bem embaralhado, e as coloca em sequência, da esquerda para a direita, na mesa, com as faces voltadas para baixo.
Então ela olha, por um breve instante, cada uma das cartas da sequência (e logo as recoloca na mesa, com a face para baixo). Usando apenas a sua memória, Beatriz deve agora dizer se a sequência de cartas está ordenada crescentemente, decrescentemente, ou não está ordenada.
De tanto jogar, ela está ficando cansada, e não confia em seu próprio julgamento para saber se acertou ou errou. Por isso, ela pediu para você fazer um programa que, dada uma sequência de cinco cartas, determine se a sequência dada está ordenada crescentemente, decrescentemente, ou não está ordenada.

Entradas: 
A entrada consiste de uma única linha que contém as cinco cartas da sequência. Os valores das cartas são representados por inteiros entre 1 e 13. As cinco cartas têm valores distintos.

Saídas:
Seu programa deve produzir uma única linha, contendo um único caractere maiúsculo: ‘C’ caso a sequência dada esteja ordenada crescentemente, ‘D’ se estiver ordenada decrescentemente, ou ‘N’ caso contrário.

Restrições:
• o valor de cada carta é um inteiro entre 1 e 13.

Exemplo
Entrada
1 2 3 5 6
Saída
C
Entrada
5 7 10 9 11
Saída
N
Entrada
12 10 4 3 2
Saída
*/

#include <stdio.h>

int main() {
    int C1, C2, C3, C4, C5;
    scanf("%d %d %d %d %d", &C1, &C2, &C3, &C4, &C5);
    if (C1 < 1 || C1 > 13 || C2 < 1 || C2 > 13 || C3 < 1 || C3 > 13 || C4 < 1 || C4 > 13 || C5 < 1 || C5 > 13){
        printf("ERROR\n");
        return 1;
    }
    if ( C1 <= C2 && C2<= C3 && C3 <= C4 && C4 <= C5){printf("C\n");}
    else if ( C1 >= C2 && C2 >= C3 && C3 >= C4 && C4 >= C5){printf("D\n");}
    else {printf("N\n");}
    return 0;
};
