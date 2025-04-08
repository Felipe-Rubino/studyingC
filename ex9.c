#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main ()
{
	float forca, massa, aceleracao;
    printf("Calcular a força resultante de um objeto \n");
    printf("Digite qual será sua massa: \n");
    scanf("%f", &massa);
    printf("Digite qual será sua aceleracao: \n");
    scanf("%f", &aceleracao);
    forca = massa * aceleracao;
    printf("Resultado : %2.f \n", forca);
    return 0;
}