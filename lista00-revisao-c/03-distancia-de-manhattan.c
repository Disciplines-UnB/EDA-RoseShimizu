/*
DISTANCIA DE MANHATTAN
Maria é uma moradora de Nlogópolis, uma cidade na Nlogônia que tem uma característica muito interessante: todas as ruas da cidade ou são orientadas no sentido norte-sul ou são orientadas no sentido leste-oeste. Isso significa que, dadas duas ruas, ou elas são paralelas ou elas são perpendiculares entre si. Todas as ruas da cidade são de mão dupla e é possível seguir em qualquer direção em um cruzamento. Agora Maria está atrasada para uma reunião e precisa de sua ajuda. Dadas as coordenadas iniciais de Maria e da reunião, determine o número mínimo de cruzamentos que Maria deve atravessar para chegar ao seu destino. Esse número inclui o cruzamento onde ocorrerá a reunião mas não inclui a posição inicial de Maria.

Entrada
A única linha da entrada contém quatro inteiros, Xm, Ym, Xr, Yr, indicando as coordenadas de Maria (Xm, Ym) e da reunião (Xr, Yr). O ponto de partida de Maria nunca será igual ao local da reunião, ou seja, pelo menos uma das coordenadas será diferente.

Saída
Seu programa deve imprimir uma única linha contendo um único inteiro: o número mínimo de cruzamentos que Maria precisa atravessar para chegar até o local da reunião.

Restrições
0 ≤ Xm, Ym ≤ 1000
0 ≤ Xr
, Yr ≤ 1000

Exemplos:
Entrada
0 0 5 6
Saída
11
Entrada
52 75 120 75
Saída
68
*/

#include <stdio.h>

int main() {
    int Xm, Ym, Xr, Yr, dx, dy, distance;
    scanf("%d %d %d %d", &Xm, &Ym, &Xr, &Yr);
    if (Xm < 0 || Xm > 1000 || Ym < 0 || Ym > 1000 || Xr < 0 || Xr > 1000 || Yr < 0 || Yr > 1000) {
        printf("Coordenadas fora das restrições.\n");
        return 1; 
    }
    dx = Xr - Xm;
    dy = Yr - Ym;
    if (dx < 0) {dx = -dx;}
    if (dy < 0) {dy = -dy;}
    distance = dx + dy;
    printf("%d\n", distance);
    return 0;
};
