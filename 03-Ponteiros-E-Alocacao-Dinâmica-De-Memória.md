# Alocação de memória

Em C, a alocação de memória pode ser feita de duas maneiras: estática e dinâmica. A alocação estática ocorre quando o compilador aloca a memória necessária para uma variável no momento em que o programa é compilado. Já a alocação dinâmica ocorre durante a execução do programa e é controlada pelo programador.

A alocação dinâmica de memória é realizada através da função `malloc`, que reserva um bloco de memória com um tamanho específico e retorna um ponteiro para o início desse bloco. Para utilizar esse bloco de memória, o programador deve armazenar o endereço retornado pela função `malloc` em um ponteiro e acessar esse bloco de memória através do ponteiro.

Por exemplo, para alocar dinamicamente um bloco de memória com tamanho para armazenar 10 valores inteiros, podemos fazer o seguinte:

```c
int *p;
p = (int*) malloc(10 * sizeof(int));
```

Isso reserva um bloco de memória com tamanho suficiente para armazenar 10 valores inteiros e armazena o endereço do início desse bloco na variável `p`. O casting para `(int*)` é necessário porque a função `malloc` retorna um ponteiro genérico `void *` que precisa ser convertido para o tipo apropriado de ponteiro.

Para liberar a memória alocada dinamicamente, utilizamos a função `free` passando como argumento o ponteiro que aponta para o bloco de memória que foi previamente alocado:

```c
free(p);
```

É importante lembrar que a função `free` deve ser usada com cuidado e apenas para liberar a memória que foi alocada dinamicamente. Tentar liberar memória estática ou de outras fontes pode levar a comportamentos imprevisíveis no programa.

Outra coisa importante a se lembrar é que o ponteiro retornado pela função `malloc` deve ser sempre verificado, para garantir que a alocação de memória foi bem-sucedida. Se a alocação falhar, a função `malloc` retorna `NULL`, o que indica que a alocação de memória falhou.

Além disso, é importante liberar a memória alocada dinamicamente assim que ela não for mais necessária, para evitar vazamentos de memória (memory leaks).

## Liberando a memória
O `free(p)` não apaga o conteúdo de `p`, ele libera a memória alocada dinamicamente para que ela possa ser usada novamente pelo sistema operacional.

Quando você chama a função `free(p)`, a memória alocada para armazenar os dados apontados por `p` é marcada como disponível pelo sistema operacional, mas o conteúdo de `p` continua o mesmo. Ou seja, o valor de `p` ainda é o endereço da área de memória liberada, mas agora essa área não pertence mais ao programa.

Por isso, é importante não tentar acessar o conteúdo de `p` após chamar a função `free(p)`, pois essa área de memória pode ter sido usada por outro processo ou pode conter dados diferentes dos que estavam armazenados anteriormente.

Caso você queira "apagar" o conteúdo de `p`, ou seja, definir o ponteiro como nulo, basta atribuir o valor `NULL` a ele:
Para usar o `free` logo após a alocação de memória, basta armazenar o endereço retornado pela função `malloc` em um ponteiro e, posteriormente, passar esse ponteiro como argumento para a função `free`.

Por exemplo, para alocar dinamicamente um bloco de memória com tamanho para armazenar 10 valores inteiros e liberar a memória logo após o uso, podemos fazer o seguinte:

```c
int *p;
p = (int*) malloc(10 * sizeof(int));

// usar o bloco de memória alocado dinamicamente
// ...

// liberar a memória alocada dinamicamente
free(p);
```

Lembrando que é importante garantir que o ponteiro passado para a função `free` seja o mesmo ponteiro que foi retornado pela função `malloc`. E também é importante não tentar acessar o bloco de memória alocado dinamicamente após a chamada da função `free`, pois isso pode levar a comportamentos imprevisíveis no programa.
```c
p = NULL;
```

Dessa forma, o ponteiro `p` não aponta mais para nenhum endereço de memória válido.

