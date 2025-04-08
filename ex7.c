#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main ()
{
	float principal, taxa, montante;
    int meses;

    printf("Digite o valor inicial do investimento (R$): ");
    scanf("%f", &principal);

    printf("Digite o tempo do investimento (em meses): ");
    scanf("%d", &meses);

    montante = principal;

    srand(time(NULL)); 

    for (int i = 1; i <= meses; i++) {
        taxa = ((float)rand() / RAND_MAX) * (0.05 - 0.005) + 0.005;

        montante = montante * (1 + taxa);

        printf("Mês %2d Juros: %.2f%% Montante: R$ %.2f\n", i, taxa * 100, montante);
    }

    printf("\nValor final após %d meses: R$ %.2f\n", meses, montante);

    return 0;
}