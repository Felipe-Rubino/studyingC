#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
int main() {
    int opcao;
    float velocidade, ms, kmh, mph;

    printf("Escolha a unidade de entrada da velocidade:\n");
    printf("Metros por segundo\n");
    printf("Quilômetros por hora\n");
    printf("Milhas por hora\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    switch(opcao) {
        case 1:
            ms = velocidade;
            kmh = ms * 3.6;
            mph = ms * 2.23694;
            break;
        case 2:
            kmh = velocidade;
            ms = kmh / 3.6;
            mph = ms * 2.23694;
            break;
        case 3:
            mph = velocidade;
            ms = mph * 0.44704;
            kmh = ms * 3.6;
            break;
    }

    printf("\nConversões:\n");
    printf("Metros por segundo: %.2f m/s\n", ms);
    printf("Quilometros por hora: %.2f km/h\n", kmh);
    printf("Milhas por hora: %.2f mph\n", mph);

    return 0;
}