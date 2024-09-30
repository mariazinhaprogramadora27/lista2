#include <stdio.h>
#include <stdbool.h>

int soma_quadrados_digitos(int numero) {
    int soma = 0;

    // Calcula a soma dos quadrados dos dígitos
    while (numero > 0) {
        int digito = numero % 10;  // Obtém o último dígito
        soma += digito * digito;    // Adiciona o quadrado do dígito à soma
        numero /= 10;               // Remove o último dígito
    }

    return soma;
}

bool e_numero_feliz(int numero) {
    int resultado = numero;
    int numeros_vistos[1000] = {0}; // Array para armazenar números já vistos
    int indice = 0;

    // Enquanto o resultado não for 1
    while (resultado != 1) {
        // Verifica se o número já foi visto (loop)
        for (int i = 0; i < indice; i++) {
            if (numeros_vistos[i] == resultado) {
                return false; // Entra em loop
            }
        }

        // Armazena o número atual
        numeros_vistos[indice++] = resultado;

        // Calcula a soma dos quadrados dos dígitos
        resultado = soma_quadrados_digitos(resultado);
    }

    return true; // Número é feliz
}

int main() {
    int numero;

    // Solicita ao usuário um número
    printf("Digite um numero para verificar se ele e feliz: ");
    scanf("%d", &numero);

    // Verifica se o número é feliz
    if (e_numero_feliz(numero)) {
        printf("%d e um numero feliz.\n", numero);
    } else {
        printf("%d nao e um numero feliz.\n", numero);
    }

    return 0; // Encerra o programa
}

