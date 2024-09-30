#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL)); // Inicializando o gerador de números aleatórios

    // Gerar um número aleatório entre 1 e 100
    n = rand() % 100 + 1;

    // Mostrar o número gerado
    printf("Numero gerado: %d\n", n);

    // Calcular o quadrado do número
    int quadrado = n * n;
    printf("Quadrado de %d: %d\n", n, quadrado);

    // Converter o quadrado em uma string para separação
    char str_quadrado[10];
    sprintf(str_quadrado, "%d", quadrado);

    // Determinar a posição de divisão
    int len = strlen(str_quadrado);
    int parte1 = 0, parte2 = 0;

    // Separar o quadrado em duas partes
    if (len == 1) {
        parte1 = 0; // Caso o quadrado tenha apenas um dígito
        parte2 = quadrado;
    } else {
        // O número da direita sempre será a parte 2
        // A parte 1 será tudo que estiver à esquerda
        str_quadrado[len - 2] = '\0'; // Termina a string na posição d

