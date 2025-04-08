#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
int main() {
    float comprimento, angulo_inicial_graus, angulo_inicial_rad, angulo_atual, G=9.8;
    int tempo_total;

    printf("Informe o comprimento do pêndulo: ");
    scanf("%f", &comprimento);

    printf("Informe o ângulo inicial: ");
    scanf("%f", &angulo_inicial_graus);

    printf("Informe o tempo total da simulacao: ");
    scanf("%d", &tempo_total);

    // Converte o ângulo para radianos
    angulo_inicial_rad = angulo_inicial_graus * M_PI / 180;

    printf("\nSimulação do movimento do pendulo:\n");

    for (int t = 0; t <= tempo_total; t++) {
        angulo_atual = angulo_inicial_rad * cos(sqrt(G / comprimento) * t);
        printf("Tempo: %2d s Ângulo: %.2f graus\n", t, angulo_atual * 180 / M_PI);
        sleep(1); 
    }

    return 0;
}