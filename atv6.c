#include <stdio.h>

// Função para verificar se um número é palindrômico
int e_palindromico(int numero) {
    int reverso = 0, original = numero, digito;

    // Calcula o reverso do número
    while (numero != 0) {
        digito = numero % 10;          // Obtém o último dígito
        reverso = reverso * 10 + digito; // Constrói o número reverso
        numero /= 10;                  // Remove o último dígito


