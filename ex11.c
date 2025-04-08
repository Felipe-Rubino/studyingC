#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main ()
{
	float v0, angulo, rad, G=9.8;
    float altura_maxima, alcance;

    printf("Digite a velocidade inicial (m/s): ");
    scanf("%f", &v0);

    printf("Digite o ângulo de lançamento (graus): ");
    scanf("%f", &angulo);

    rad = angulo * M_PI / 180.0;

    altura_maxima = pow(v0 * sin(rad), 2) / (2 * G);

    alcance = (pow(v0, 2) * sin(2 * rad)) / G;

    printf("Altura máxima: %.2f metros\n", altura_maxima);
    printf("Alcance horizontal: %.2f metros\n", alcance);

    return 0;
}