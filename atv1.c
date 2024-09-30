#include <stdio.h>

// Fun��o para verificar se o n�mero � perfeito
int e_numero_perfeito(int numero) {
    int soma_divisores = 0;

    // Encontrando os divisores pr�prios (exceto o pr�prio n�mero)
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    // Comparando a soma dos divisores com o n�mero original
    return soma_divisores == numero;
}

int main() {
    int numero;

    // Solicitando um n�mero do usu�rio
    printf("Digite um numero para verificar se eh perfeito: ");
    scanf("%d", &numero);

    // Verificando se o n�mero � perfeito
    if (e_numero_perfeito(numero)) {
        printf("%d eh um numero perfeito!\n", numero);
    } else {
        printf("%d nao eh um numero perfeito.\n", numero);
    }

    return 0;
}
