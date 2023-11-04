
/*
 Problema: Troca
 Escreva uma função
 void swap (int ∗a, int ∗b);
 que recebendo dois números números por referência a e b, troque os valores destas variáveis.
 Atenção: sua submissão deverá conter somente esta função.
 Entrada:
 O seu programa irá receber dois valores, como já especificados acima. Ele não fará nenhuma leitura
 da entrada padrão.
 Saída:
 A sua função não deve imprimir na sa´ıda padr˜ao e nem retornar nada.
 Exemplos
 Exemplo de entrada
 Conteúdo na entrada padrão:
 100 150
 Saída para o exemplo de entrada acima
 Antes : 100 150
 Depois : 150 100
*/

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
};
