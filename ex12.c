#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main ()
{
	float kg, gramas, libras, oncas;

    printf("Digite a massa em quilogramas (kg): ");
    scanf("%f", &kg);

    gramas = kg * 1000;
    libras = kg * 2.20462;
    oncas = kg * 35.274;

    printf("Gramas: %.2f g\n", gramas);
    printf("Libras: %.2f lb\n", libras);
    printf("Onças: %.2f oz\n", oncas);

    return 0;
}