/*
Botas
A divisão de Suprimentos de Botas e Calçados do Exército comprou um grande número de paresde botas de vários
tamanhos para seus soldados. No entanto, por uma falha de empacotamento da fábrica contratada, nem todas as caixas
entregues continham um par de botas correto, com duasbotas do mesmo tamanho, uma para cada pé. O sargento mandou
que os recrutas retirassem todasas botas de todas as caixas para reembalá-las, desta vez corretamente.
Quando o sargento descobriu que você sabia programar, ele solicitou com a gentileza habitual que você escrevesse um
programa que, dada a lista contendo a descrição de cada bota entregue, determina quantos pares corretos de botas poderão
ser formados no total.
Entrada
Cada uma das linhas descreve uma bota, contendo um número inteiro M e uma letra L, separados por um espaço em
branco. M indica o número do tamanho da bota (30 ≤ M ≤ 60) e L indica o pé da bota: L='D' indica que a bota é para
o pé direito, L='E' indica que a bota é para o pé esquerdo. A entrada termina com EOF.
Saída
Seu programa deve imprimir uma única linha contendo um único número inteiro indicando o número total de pares
corretos de botas que podem ser formados.
Exemplo de Entrada 1
40 D
41 E
41 D
40 E
Exemplo de Saída 1
2
Exemplo de Entrada 2
38 E
39 E
40 D
38 D
40 D
37 E
Exemplo de Saída 2
1
Author: Olimpíada Brasileira de Informática, Fase 1, 2017 (mojificação por John L. Gardenghi)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int bota_esq[61] = {0}, bota_dir[61] = {0}, conta_pares = 0, tamanho;
    char pe;

    while (scanf("%d %c", &tamanho, &pe) != EOF){
        if (pe == 68){bota_dir[tamanho]++;}
        else{bota_esq[tamanho]++;}
    }

    for (int i = 30; i < 61; i++){
        if (bota_dir[i] < bota_esq[i]){conta_pares += bota_dir[i];}
        else{conta_pares += bota_esq[i];}
    }

    printf("%d\n", conta_pares);
    return 0;
}
