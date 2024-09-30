#include <stdio.h>
#include <stdlib.h>  // Para rand() e srand()
#include <time.h>    // Para time()

// Função para determinar o vencedor
void determinar_vencedor(int jogador, int computador) {
    // Exibe as escolhas
    printf("Voce escolheu: ");
    if (jogador == 1) printf("Pedra\n");
    else if (jogador == 2) printf("Papel\n");
    else printf("Tesoura\n");

    printf("O computador escolheu: ");
    if (computador == 1) printf("Pedra\n");
    else if (computador == 2) printf("Papel\n");
    else printf("Tesoura\n");

    // Determina o resultado com base nas regras do jogo
    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 1 && computador == 3) ||  // Pedra vence Tesoura
               (jogador == 2 && computador == 1) ||  // Papel vence Pedra
               (jogador == 3 && computador == 2)) {  // Tesoura vence Papel
        printf("Voce venceu!\n");
    } else {
        printf

