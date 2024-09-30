#include <stdio.h>

// Função para verificar se o número é perfeito
int e_numero_perfeito(int numero) {
    int soma_divisores = 0;

    // Encontrando os divisores próprios (exceto o próprio número)
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    // Comparando a soma dos divisores com o número original
    return soma_divisores == numero;
}

int main() {
    int numero;

    // Solicitando um número do usuário
    printf("Digite um numero para verificar se eh perfeito: ");
    scanf("%d", &numero);

    // Verificando se o número é perfeito
    if (e_numero_perfeito(numero)) {
        printf("%d eh um numero perfeito!\n", numero);
    } else {
        printf("%d nao eh um numero perfeito.\n", numero);
    }

    return 0;
}
