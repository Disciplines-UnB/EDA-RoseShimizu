/*
ZERINHO OU UM

O jogo conhecido como Zerinho ou Um e utilizado para determinar um ganhador entre tres jogadores. Cada jogador escolhe o valor zero ou um; apos um comando (geralmente um dos competidores anuncia em voz alta Zerinho ou... Um!), todos os participantes mostram o valor escolhido, utilizando uma das maos: se o valor escolhido e um, o competidor mostra o dedo indicador estendido; se o valor escolhido e zero, mostra a mao com todos os dedos fechados. O ganhador e aquele que tiver escolhido um valor diferente de todos os outros; se nao ha um jogador com valor diferente de todos os outros (por exemplo todos os jogadores escolhem zero), nao ha ganhador. Escreva um programa em C que receba os valores que os tres jogadores colocaram e determine quem venceu a brincadeira. PS: Qual a brincadeira favorita do computador? Zerinho ou um!

Entrada:
A primeira linha da entrada contem tres numeros inteiros que correspondem respectivamente o valor escolhido pelo jogador A, o valor escolhido pelo jogador B e o valor escolhido pelo jogador C. O valor escolhido pelos jogadores podem assumir o valor 0 ou 1.

Saída:
Seu programa deve mostrar quem dos tres jogadores ganhou a partida: A, B ou C. Se nenhum jogador ganhou, exiba a mensagem empate. Verifique os exemplos para entender melhor o formato da saida
*/


#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (!(A == 0 || A == 1) && !(B == 0 || B == 1) && !(C == 0 || C == 1)){return 1;}
    if (A != B && A != C){printf("A\n");}
    if (B != A && B != C){printf("B\n");}
    if (C != A && C != B){printf("C\n");}
    if (A == B && A == C){printf("empate\n");}
    return 0;
};
