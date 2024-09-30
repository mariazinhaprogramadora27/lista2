#include <stdio.h>

int main() {
    int numero, soma = 0, i = 1;

    // Solicita ao usu�rio um n�mero
    printf("Digite um numero para verificar se ele e triangular: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � negativo
    if (numero < 0) {
        printf("Numero invalido! Apenas numeros naturais sao aceitos.\n");
        return 1;  // Encerra o programa com um c�digo de erro
    }

    // Loop para somar os n�meros naturais
    while (soma < numero) {
        soma += i;  // Adiciona o pr�ximo n�mero natural � soma
        i++;        // Incrementa i para o pr�ximo n�mero
    }

    // Verifica se a soma � igual ao n�mero fornecido
    if (soma == numero) {
        printf("%d e um numero triangular.\n", numero);
    } else {
        printf("%d nao e um numero triangular.\n", numero);
    }

    return 0;  // Encerra o programa com sucesso
}

