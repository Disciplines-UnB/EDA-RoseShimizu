/*
Elevator Trouble
You are on your way to your first job interview as a program tester, and you are already late. The
interview is in a skyscraper and you are currently in floor s, where you see an elevator. Upon
entering the elevator, you learn that it has only two buttons, marked "UP u" and "DOWN d". You
conclude that the UP-button takes the elevator u floors up (if there aren't enough floors, pressing
the UP-button does nothing, or at least so you assume), whereas the DOWN-button takes you d
stories down (or none if there aren't enough). Knowing that the interview is at floor g, and that
there are only f floors in the building, you quickly decide to write a program that gives you the
amount of button pushes you need to perform. If you simply cannot reach the correct floor, your
program halts with the message "use the stairs".
Given input f, s, g, u and d (floors, start, goal, up, down), find the shortest sequence of button
presses you must press in order to get from s to g, given a building of floors, or output "use the
stairs" if you cannot get from s to g by the given elevator.
Input
The input will consist of one line, namely f s g u d, where 1 <= s, g <= f <= 1000000 and 0 <= u, d
<= 1000000. The floors are one-indexed, i.e. if there are 10 stories, s and g be in [1; 10].
Output
You must reply with the minimum numbers of pushes you must make in order to get from s to g, or
output "use the stairs" if it is impossible given the conguration of the elevator.
Example
Input:
10 1 10 2 1
Output:
6
Input:
100 2 1 1 0
Output:
use the stairs
*/
#include <stdio.h>
#include <stdlib.h>

int min_apertar(int a, int b, int c, int d, int e){
    int *visitados = malloc(sizeof(int) * (a + 1));
    for (int i = 1; i <= a; i++){visitados[i] = 0;}
    int *fila = malloc(sizeof(int) * (a + 1));
    int inicio = 0, fim = 0;
    fila[fim++] = b;
    visitados[b] = 1;

    int apertos = 0, quantidade = 1;
    while (inicio < fim){
        int quantidade_nova = 0;
        for (int i = 0; i < quantidade; i++){
            int atual = fila[inicio++];
            if (atual == c){free(visitados); free(fila); return apertos;}
            int andar_acima = atual + d, andar_abaixo = atual - e;
            if (andar_acima <= a && visitados[andar_acima] == 0){visitados[andar_acima] = 1; fila[fim++] = andar_acima; quantidade_nova++;}
            if (andar_abaixo >= 1 && visitados[andar_abaixo] == 0){visitados[andar_abaixo] = 1; fila[fim++] = andar_abaixo; quantidade_nova++;}
        }apertos++; quantidade = quantidade_nova;
    }

    free(visitados);
    free(fila);
    return -1;
}

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int apertos = min_apertar(a, b, c, d, e);
    if(apertos  == -1){printf("use the stairs\n");}
    else{printf("%d\n", apertos);}
    return 0;
}
