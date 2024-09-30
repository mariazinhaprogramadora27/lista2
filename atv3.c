#include <stdio.h>
#include <math.h>  // Biblioteca necessária para pow()

// Função para contar o número de dígitos
int conta_digitos(int numero) {
    int contador = 0;

    // Lidar com caso de número zero
    if (numero == 0) {
        return 1;
    }

    // Contagem de dígitos
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}


int e_numero_armstrong(int numero) {
    int numero_original = numero;
    int soma = 0;
    int digitos = conta_digitos(numero);


    while (numero != 0) {
        int digito = numero % 10;
        soma += pow(digito, digitos);
        numero /= 10;
    }


    return soma == numero_original;
}

int main() {
    int numero;


    printf("Digite um numero inteiro: ");


    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida. Por favor, digite um numero inteiro.\n");
    }


    if (e_numero_armstrong(numero)) {
        printf("%d eh um numero de Armstrong!\n", numero);
    } else {
        printf("%d nao eh um numero de Armstrong.\n", numero);
    }

    return 0;
}
