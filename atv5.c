#include <stdio.h>

void calcula_hora_termino(int hora_inicial, int minuto_inicial, int duracao_horas, int duracao_minutos) {
    int hora_final, minuto_final;

    // Soma os minutos
    minuto_final = minuto_inicial + duracao_minutos;

    // Verifica se os minutos somados passam de 60 e converte para horas extras
    if (minuto_final >= 60) {
        hora_inicial += minuto_final / 60;  // Adiciona as horas extras
        minuto_final = minuto_final % 60;   // Ajusta os minutos
    }

    // Soma as horas
    hora_final = hora_inicial + duracao_horas;

    // Ajusta para o formato de 24 horas
    if (hora_final >= 24) {
        hora_final = hora_final % 24;  // Se passar de 24 horas, ajusta para o formato correto
    }

    // Exibe o resultado no formato HH:MM
    printf("Hora de termino: %02d:%02d\n", hora_final, minuto_final);
}

int main() {
    int hora_inicial, minuto_inicial;
    int duracao_horas, duracao_minutos;

    // Solicita a hora inicial e os minutos iniciais
    printf("Digite a hora inicial (0-23): ");
    scanf("%d", &hora_inicial);

    printf("Digite os minutos iniciais (0-59): ");
    scanf("%d", &minuto_inicial);

    // Solicita a duração em horas e minutos
    printf("Digite a duracao em horas: ");
    scanf("%d", &duracao_horas);

    printf("Digite a duracao em minutos: ");
    scanf("%d", &duracao_minutos);

    // Verifica se

