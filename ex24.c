#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
int main() {

	double x, seno_aprox = 0, seno_real, erro;
    int termos;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);

    printf("Digite o número de termos  ");
    scanf("%d", &termos);

    for (int n = 0; n < termos; n++) {
        int fat = 1;
        for (int i = 2; i <= (2 * n + 1); i++) {
            fat *= i;
        }

        double termo = pow(-1, n) * pow(x, 2 * n + 1) / fat;
        seno_aprox += termo;
    }

    seno_real = sin(x);
    erro = fabs(seno_real - seno_aprox);

    printf("\nSeno aproximado: %.10lf", seno_aprox);
    printf("\nSeno real      : %.10lf", seno_real);
    printf("\nErro absoluto  : %.10lf\n", erro);

    return 0;
}