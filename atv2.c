#include <stdio.h>
#include <stdlib.h>  // Biblioteca necessária para a função abs()

int soma_digitos(int numero) {
    int soma = 0;

    // Converte o número para positivo, caso seja negativo
    numero = abs(numero);

    // Loop para somar os dígitos
    while (numero != 0) {
        soma += numero % 10; // Adiciona o último dígito à soma
        numero /= 10;        // Remove o último dígito
    }

    return soma;
}

int main() {
    int numero;

    // Solicita um número ao usuário
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Chama a função para calcular a soma dos dígitos
    int resultado = soma_digitos(numero);

    // Exibe o resultado
    printf("A soma dos digitos de %d eh: %d\n", numero, resultado);

    return 0;
}
