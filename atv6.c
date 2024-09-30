#include <stdio.h>

// Fun��o para verificar se um n�mero � palindr�mico
int e_palindromico(int numero) {
    int reverso = 0, original = numero, digito;

    // Calcula o reverso do n�mero
    while (numero != 0) {
        digito = numero % 10;          // Obt�m o �ltimo d�gito
        reverso = reverso * 10 + digito; // Constr�i o n�mero reverso
        numero /= 10;                  // Remove o �ltimo d�gito


