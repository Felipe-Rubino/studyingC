#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
	float metros, centimetros, milimetros, quilometros;

	printf("Digite a medida em metros: ");
	scanf("%f", &metros);

	centimetros = metros * 100;
	milimetros = metros * 1000;
	quilometros = metros / 1000;

	printf("\n Resultado:\n");
	printf("Centimetros: %.2f cm\n", centimetros);
	printf("Milimetros: %.2f mm\n", milimetros);
	printf("Quilometros: %.5f km\n", quilometros);

	return 0;
}