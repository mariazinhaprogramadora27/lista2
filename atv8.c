#include <stdio.h>

int main() {
    int numero, soma = 0, i = 1;

    // Solicita ao usuário um número
    printf("Digite um numero para verificar se ele e triangular: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Numero invalido! Apenas numeros naturais sao aceitos.\n");
        return 1;  // Encerra o programa com um código de erro
    }

    // Loop para somar os números naturais
    while (soma < numero) {
        soma += i;  // Adiciona o próximo número natural à soma
        i++;        // Incrementa i para o próximo número
    }

    // Verifica se a soma é igual ao número fornecido
    if (soma == numero) {
        printf("%d e um numero triangular.\n", numero);
    } else {
        printf("%d nao e um numero triangular.\n", numero);
    }

    return 0;  // Encerra o programa com sucesso
}

