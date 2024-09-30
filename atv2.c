#include <stdio.h>
#include <stdlib.h>  // Biblioteca necess�ria para a fun��o abs()

int soma_digitos(int numero) {
    int soma = 0;

    // Converte o n�mero para positivo, caso seja negativo
    numero = abs(numero);

    // Loop para somar os d�gitos
    while (numero != 0) {
        soma += numero % 10; // Adiciona o �ltimo d�gito � soma
        numero /= 10;        // Remove o �ltimo d�gito
    }

    return soma;
}

int main() {
    int numero;

    // Solicita um n�mero ao usu�rio
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Chama a fun��o para calcular a soma dos d�gitos
    int resultado = soma_digitos(numero);

    // Exibe o resultado
    printf("A soma dos digitos de %d eh: %d\n", numero, resultado);

    return 0;
}
