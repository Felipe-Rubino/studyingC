#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    float massa, velocidade, energia;

    printf("Digite a massa do objeto kg: ");
    scanf("%f", &massa);

    printf("Digite a velocidade do objeto (em m/s): ");
    scanf("%f", &velocidade);

    energia = 0.5 * massa * pow(velocidade, 2);

    printf("\nEnergia Cinética: %.2f Joules\n", energia);

    return 0;
}