#include <stdio.h>
#include <stdbool.h>

int soma_quadrados_digitos(int numero) {
    int soma = 0;

    // Calcula a soma dos quadrados dos d�gitos
    while (numero > 0) {
        int digito = numero % 10;  // Obt�m o �ltimo d�gito
        soma += digito * digito;    // Adiciona o quadrado do d�gito � soma
        numero /= 10;               // Remove o �ltimo d�gito
    }

    return soma;
}

bool e_numero_feliz(int numero) {
    int resultado = numero;
    int numeros_vistos[1000] = {0}; // Array para armazenar n�meros j� vistos
    int indice = 0;

    // Enquanto o resultado n�o for 1
    while (resultado != 1) {
        // Verifica se o n�mero j� foi visto (loop)
        for (int i = 0; i < indice; i++) {
            if (numeros_vistos[i] == resultado) {
                return false; // Entra em loop
            }
        }

        // Armazena o n�mero atual
        numeros_vistos[indice++] = resultado;

        // Calcula a soma dos quadrados dos d�gitos
        resultado = soma_quadrados_digitos(resultado);
    }

    return true; // N�mero � feliz
}

int main() {
    int numero;

    // Solicita ao usu�rio um n�mero
    printf("Digite um numero para verificar se ele e feliz: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � feliz
    if (e_numero_feliz(numero)) {
        printf("%d e um numero feliz.\n", numero);
    } else {
        printf("%d nao e um numero feliz.\n", numero);
    }

    return 0; // Encerra o programa
}

