#include <stdio.h>
#include <math.h>  // Biblioteca para fabs() (valor absoluto)

// Fun��o para calcular a raiz quadrada usando o m�todo de Newton
double raiz_quadrada_newton(double numero, double precisao) {
    double estimativa = numero / 2.0;  // Estimativa inicial
    double anterior;

    // Itera at� que a diferen�a entre a estimativa atual e a anterior seja menor que a precis�o desejada
    do {
        anterior = estimativa;
        estimativa = (estimativa + numero / estimativa) / 2.0;  // F�rmula de Newton
    } while (fabs(estimativa - anterior) > precisao);  // Verifica a converg�ncia

    return estimativa;
}

int main() {
    double numero;
    double precisao;

    // Solicita um n�mero positivo ao usu�rio
    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    // Verifica se o n�mero � positivo
    if (numero < 0) {
        printf("Erro: O numero deve ser positivo.\n");
        return 1;
    }

    // Solicita a precis�o desejada
    printf("Digite a precisao desejada (exemplo: 0.0001): ");
    scanf("%lf", &precisao);

    // Calcula a raiz quadrada usando o m�todo de Newton
    double raiz = raiz_quadrada_newton(numero, precisao);

    // Exibe o resultado
    printf("A raiz quadrada de %.5lf eh aproximadamente %.5lf\n", numero, raiz);

    return 0;
}
