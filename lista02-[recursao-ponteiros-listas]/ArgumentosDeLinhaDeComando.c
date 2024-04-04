/*
A função mais importante de uma aplicação escrita em C é a função main(). Ela é comumente definida retornando int e
sem parâmetros:
int main() 
É possível passar argumentos de linha de comando para aplicações escritas em C. Argumentos de linha de comando são
informados após o nome do programa nas invocações de aplicações através de interpretadores de linha de comando.
Para informar parâmetros de linha de comando, é necessário definir main() com dois argumentos: o primeiro argumento é
o número de argumentos informados através da linha de comando e o segundo é a lista contendo cada um dos argumentos
de linha de comando informados.
int main(int argc, char **argv) 
• argc é um inteiro que armazena a quantidade de argumentos informados pelo usuário, incluindo o nome do programa.
• o valor de argc deve ser não negativo.
• argv é um vetor de ponteiros para char listando todos os argumentos.
• se argc for maior do que zero, os elementos de argv[0] a argv[argc-1] conterão ponteiros para strings.
• argv[0] é o nome do programa.
Neste exercício, você deverá apresentar a quantidade de argumentos informados através da linha de comando e imprimi-los
em sequencia, separados por linhas.
Entrada
A entrada é uma chamada de linha de comando para a execução da aplicação, chamada na qual são informados os
parâmetros de linha de comando.
Saída
A saída é a impressão em console da quantidade de argumentos informados e os valores desses argumentos, cada um
impresso em linha separada.
Exemplo de Entrada
./meu_programa alo mundo
Exemplo de Saída
2
alo
mundo
Exemplo de Entrada
./meu_programa um dois tres quatro cinco seis sete oito nove dez
Exemplo de Saída
10
um
dois
tres
quatro
cinco
seis
sete
oito
nove
1
dez
Exemplo de Entrada
./meu_programa
Exemplo de Saída
0
Author: Tiago Alves
*/

#include <stdio.h>

int main(int argc, char **argv) {
    printf("%d\n", argc - 1); 

    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]); 
    }
    return 0;
}
