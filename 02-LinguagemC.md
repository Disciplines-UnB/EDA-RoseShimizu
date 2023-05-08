## Sobre a Linguagem C

A linguagem C é uma linguagem de programação de propósito geral que foi desenvolvida por Dennis Ritchie na década de 1970. Ela é amplamente utilizada para o desenvolvimento de sistemas operacionais, drivers de dispositivos, softwares de controle de processos e aplicativos em geral.

Algumas características importantes da linguagem C incluem sua eficiência em termos de desempenho e seu suporte a ponteiros, que permite uma maior flexibilidade no gerenciamento de memória e na manipulação de dados. Além disso, a linguagem C é bastante portável, o que significa que os programas escritos em C podem ser compilados e executados em uma ampla variedade de sistemas operacionais e arquiteturas de computadores.

A sintaxe da linguagem C é relativamente simples e consiste em uma série de comandos e estruturas de controle de fluxo, como loops e condicionais. Ela também inclui uma ampla variedade de bibliotecas padrão que fornecem funcionalidades úteis, como entrada e saída de dados, manipulação de strings e operações matemáticas.

Em resumo, a linguagem C é uma poderosa ferramenta de programação que oferece uma combinação única de eficiência, flexibilidade e portabilidade. Ela é uma das linguagens mais amplamente utilizadas no mundo da programação e é uma habilidade valiosa para qualquer desenvolvedor aprender.
_________________________________________________________________________________________________________________________________________________________________________
## Tipos de variáveis:
Em C, existem vários tipos de variáveis, cada uma com seu próprio tamanho em bytes, que representa a quantidade de memória necessária para armazenar um valor de determinado tipo. Aqui estão os tipos de variáveis mais comuns em C e seus respectivos tamanhos em bytes em uma arquitetura típica de 32 bits:

1. char: representa um caractere e ocupa 1 byte.
2. int: representa um número inteiro e ocupa 4 bytes, e pode armazenar valores inteiros em um intervalo de -2.147.483.648 a 2.147.483.647.
3. float: representa um número de ponto flutuante de precisão simples e ocupa 4 bytes, e pode armazenar números de ponto flutuante de precisão simples em um intervalo de +/- 3.40282347 x 10^38 com uma precisão de cerca de 7 dígitos decimais.
4. double: representa um número de ponto flutuante de precisão dupla e ocupa 8 bytes, e  pode armazenar números de ponto flutuante de precisão dupla em um intervalo de +/- 1.7976931348623157 x 10^308 com uma precisão de cerca de 15 dígitos decimais.
5. short int: representa um número inteiro curto e ocupa 2 bytes, e pode armazenar valores inteiros em um intervalo de -32.768 a 32.767.
6. long int: representa um número inteiro longo e ocupa 4 bytes, e pode armazenar valores inteiros em um intervalo de -2.147.483.648 a 2.147.483.647.
7. long long int: representa um número inteiro longo e ocupa 8 bytes, e pode armazenar valores inteiros em um intervalo de -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807.
8. unsigned char: representa um caractere sem sinal e ocupa 1 byte, e pode armazenar um único caractere sem sinal em um intervalo de 0 a 255 
9. unsigned int: representa um número inteiro sem sinal e ocupa 4 bytes.
10. unsigned short int: representa um número inteiro curto sem sinal e ocupa 2 bytes.
11. unsigned long int: representa um número inteiro longo sem sinal e ocupa 4 bytes.
12. unsigned long long int: representa um número inteiro longo sem sinal e ocupa 8 bytes, e pode armazenar valores inteiros sem sinal em um intervalo de 0 a 18.446.744.073.709.551.615.

Vale lembrar que esses tamanhos podem variar dependendo da arquitetura do computador.
_________________________________________________________________________________________________________________________________________________________________________
## Ler e imprimir variáveis:

| Tipo de variável | Como chamar | scanf() | printf() |
| --- | --- | --- | --- |
| `int` | `%d` | `scanf("%d", &num)` | `printf("O número é: %d\n", num)` |
| `float` | `%f` | `scanf("%f", &num)` | `printf("O número é: %f\n", num)` |
| `double` | `%lf` | `scanf("%lf", &num)` | `printf("O número é: %lf\n", num)` |
| `char` | `%c` | `scanf(" %c", &ch)` | `printf("O caractere é: %c\n", ch)` |
| `string` | `%s` | `scanf("%s", str)` | `printf("A string é: %s\n", str)` | 

### Para ler um número com uma precisão específica, você pode usar o especificador de formato `%f` seguido do número de casas decimais que você deseja ler, entre colchetes. Por exemplo, para ler um número com 3 casas de precisão, você pode usar `%f[3]` na função `scanf()`:

```c
#include <stdio.h>

int main() {
    float num;

    printf("Digite um número com 3 casas de precisão: ");
    scanf("%f[3]", &num);

    printf("O número digitado foi: %f\n", num);

    return 0;
}
```

### Para imprimir um número com uma precisão específica, você pode usar o especificador de formato `%f` seguido do número de casas decimais que você deseja imprimir, entre colchetes. Por exemplo, para imprimir um número com 5 casas de precisão, você pode usar `%.[5]f` na função `printf()`:

```c
#include <stdio.h>

int main() {
    float num = 3.14159;

    printf("O número com 5 casas de precisão é: %.5f\n", num);

    return 0;
}
```

Nesse exemplo, a função `printf()` irá imprimir o número `3.14159` com 5 casas de precisão após a vírgula, resultando em `3.14159`. Note que o ponto antes dos colchetes indica que não haverá casas decimais antes da vírgula.
_________________________________________________________________________________________________________________________________________________________________________
## Condicionais

### TERNÁRIA
A expressão ternária é uma forma concisa de escrever uma estrutura condicional em que um valor é atribuído a uma variável com base em uma condição. Em C, a sintaxe da expressão ternária é a seguinte:

```
condição ? valor_se_verdadeiro : valor_se_falso;
```

Onde `condição` é uma expressão que retorna um valor booleano (`true` ou `false`), `valor_se_verdadeiro` é o valor que será atribuído à variável se a condição for verdadeira, e `valor_se_falso` é o valor que será atribuído à variável se a condição for falsa.

Aqui está um exemplo de como usar a expressão ternária em C:

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int maior = (a > b) ? a : b;

    printf("O maior valor é: %d\n", maior);

    return 0;
}
```

Nesse exemplo, a variável `maior` recebe o valor de `a` se `a` for maior do que `b`, ou o valor de `b` caso contrário. A função `printf()` então imprime o valor da variável `maior`. No caso deste exemplo, a variável `maior` recebe o valor de `b` (que é maior do que `a`), e o programa imprime "O maior valor é: 20".


### If, Else If, Else
O `if`, `else if` e o `else` são estruturas condicionais em C que permitem que o programa execute diferentes blocos de código com base em uma determinada condição.

A sintaxe básica do `if` em C é a seguinte:

```
if (condição) {
    // código a ser executado se a condição for verdadeira
}
```

O bloco de código entre as chaves `{}` será executado somente se a condição entre os parênteses `()` for verdadeira. Se a condição for falsa, o bloco de código não será executado.

A sintaxe básica do `if-else` em C é a seguinte:

```
if (condição) {
    // código a ser executado se a condição for verdadeira
} 
else if (confição 2){
    // se a primeira confição não for execultada, vem para a segunda condição
}

else {
    // código a ser executado se as condições anteriores forem falsas
}
```

Nesse caso, se a condição for verdadeira, o bloco de código entre as chaves `{}` do `if` será executado. Se a condição for falsa, o bloco de código entre as chaves `{}` do `else` será executado.

Aqui está um exemplo de como usar o `if` e o `else` em C:

```c
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O número digitado é positivo.\n");
    } else if (num < 0) {
        printf("O número digitado é negativo.\n");
    } else {
        printf("O número digitado é zero.\n");
    }

    return 0;
}
```

Nesse exemplo, a variável `num` é lida do usuário usando a função `scanf()`. Em seguida, um bloco de código condicional é usado para determinar se o número é positivo, negativo ou zero. Se o número for maior que zero, o programa imprimirá "O número digitado é positivo.". Se o número for menor que zero, o programa imprimirá "O número digitado é negativo.". Caso contrário, o programa imprimirá "O número digitado é zero.".
_________________________________________________________________________________________________________________________________________________________________________
## Loops

A linguagem C oferece três tipos de loops: `while`, `do-while` e `for`. Cada tipo de loop tem suas próprias características e é adequado para diferentes situações.

1. `while`: o loop `while` é usado para repetir um bloco de código enquanto uma condição for verdadeira. A sintaxe é a seguinte:

```c
while (condição) {
    // bloco de código a ser executado enquanto a condição for verdadeira
}
```

2. `do-while`: o loop `do-while` é semelhante ao loop `while`, mas a condição é testada no final do bloco de código. Isso garante que o bloco de código seja executado pelo menos uma vez. A sintaxe é a seguinte:

```c
do {
    // bloco de código a ser executado pelo menos uma vez
} while (condição);
```

3. `for`: o loop `for` é usado para repetir um bloco de código um número conhecido de vezes. A sintaxe é a seguinte:

```c
for (inicialização; condição; atualização) {
    // bloco de código a ser repetido
}
```

Aqui está um exemplo de cada tipo de loop:

```c
#include <stdio.h>

int main() {
    int i;

    // exemplo de while
    i = 0;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // exemplo de do-while
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);
    printf("\n");

    // exemplo de for
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
```

Neste exemplo, cada tipo de loop é usado para imprimir os números de 0 a 9. O primeiro loop é um loop `while`, o segundo é um loop `do-while` e o terceiro é um loop `for`.

_________________________________________________________________________________________________________________________________________________________________________
## Ponteiros

Um ponteiro é uma variável que contém o endereço de memória de outra variável. Em C, para declarar um ponteiro, usamos o operador `*` junto com o tipo de dado que o ponteiro aponta.

Por exemplo, para declarar um ponteiro que aponta para uma variável inteira, podemos usar o seguinte código:

```c
int *p;
```

Isso declara uma variável `p` que é um ponteiro para um valor inteiro.

Para obter o endereço de memória de uma variável, podemos usar o operador `&`. Por exemplo, se tivermos uma variável `x`, podemos obter seu endereço de memória com o seguinte código:

```c
int x = 10;
int *p = &x;
```

Isso define `p` como um ponteiro que aponta para o endereço de memória da variável `x`.

Podemos atribuir um valor para o endereço de memória apontado pelo ponteiro, usando o operador de desreferência `*`. Por exemplo, para atribuir o valor `20` para a variável `x`, podemos fazer o seguinte:

```c
*p = 20;
```

Isso atribui o valor `20` para o endereço de memória apontado por `p`, que é o endereço de memória da variável `x`.

Podemos ler o valor armazenado no endereço de memória apontado pelo ponteiro, também usando o operador de desreferência `*`. Por exemplo, para imprimir o valor armazenado na variável `x`, podemos fazer o seguinte:

```c
printf("%d\n", *p);
```

Isso imprime o valor armazenado no endereço de memória apontado por `p`, que é o valor da variável `x`.

Outra coisa importante a se lembrar é que o ponteiro deve ser inicializado antes de ser usado. Se um ponteiro não for inicializado, ele pode apontar para um endereço de memória aleatório, o que pode causar comportamento imprevisível no programa.

Também é importante ter cuidado ao acessar memória através de ponteiros, pois isso pode levar a erros de segmentação (segmentation faults) se o ponteiro apontar para uma área inválida de memória.
