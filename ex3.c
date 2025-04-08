#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
	int quantidade, i;
	float resistencia, somaInversos = 0.0, resistenciaTotal;

	printf("Digite a quantidade de resistores em paralelo: ");
	scanf("%d", &quantidade);

	for (i = 1; i <= quantidade; i++) {
		printf("Digite o valor da resistencia %d (em ohms): ", i);
		scanf("%f", &resistencia);

		if (resistencia != 0) {
			somaInversos += 1.0 / resistencia;
		} else {
			printf("resistencia nao pode ser zero. Ignorando esse valor.\n");
		}
	}

	if (somaInversos > 0) {
		resistenciaTotal = 1.0 / somaInversos;
		printf("\nA resistencia equivalente total em paralelo C): %.2f ohms\n", resistenciaTotal);
	} else {
		printf("\n nao foi possivel calcular a resistencia total.\n");
	}

	return 0;

}