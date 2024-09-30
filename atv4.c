#include <stdio.h>
#include <math.h>  // Biblioteca para fabs() (valor absoluto)

// Função para calcular a raiz quadrada usando o método de Newton
double raiz_quadrada_newton(double numero, double precisao) {
    double estimativa = numero / 2.0;  // Estimativa inicial
    double anterior;

    // Itera até que a diferença entre a estimativa atual e a anterior seja menor que a precisão desejada
    do {
        anterior = estimativa;
        estimativa = (estimativa + numero / estimativa) / 2.0;  // Fórmula de Newton
    } while (fabs(estimativa - anterior) > precisao);  // Verifica a convergência

    return estimativa;
}

int main() {
    double numero;
    double precisao;

    // Solicita um número positivo ao usuário
    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Erro: O numero deve ser positivo.\n");
        return 1;
    }

    // Solicita a precisão desejada
    printf("Digite a precisao desejada (exemplo: 0.0001): ");
    scanf("%lf", &precisao);

    // Calcula a raiz quadrada usando o método de Newton
    double raiz = raiz_quadrada_newton(numero, precisao);

    // Exibe o resultado
    printf("A raiz quadrada de %.5lf eh aproximadamente %.5lf\n", numero, raiz);

    return 0;
}
