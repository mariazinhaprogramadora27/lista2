#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL)); // Inicializando o gerador de n�meros aleat�rios

    // Gerar um n�mero aleat�rio entre 1 e 100
    n = rand() % 100 + 1;

    // Mostrar o n�mero gerado
    printf("Numero gerado: %d\n", n);

    // Calcular o quadrado do n�mero
    int quadrado = n * n;
    printf("Quadrado de %d: %d\n", n, quadrado);

    // Converter o quadrado em uma string para separa��o
    char str_quadrado[10];
    sprintf(str_quadrado, "%d", quadrado);

    // Determinar a posi��o de divis�o
    int len = strlen(str_quadrado);
    int parte1 = 0, parte2 = 0;

    // Separar o quadrado em duas partes
    if (len == 1) {
        parte1 = 0; // Caso o quadrado tenha apenas um d�gito
        parte2 = quadrado;
    } else {
        // O n�mero da direita sempre ser� a parte 2
        // A parte 1 ser� tudo que estiver � esquerda
        str_quadrado[len - 2] = '\0'; // Termina a string na posi��o d

