#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
	float principal, taxa, montante;
    int meses;

    printf("Digite o valor principal (em R$): ");
    scanf("%f", &principal);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%f", &taxa);

    printf("Digite o número de meses: ");
    scanf("%d", &meses);

    taxa = taxa / 100;

    montante = principal * pow(1 + taxa, meses);

    printf("\nMontante final após %d meses: R$ %.2f\n", meses, montante);

    return 0;
}