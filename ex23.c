#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
int main() {

	double x, cos_aprox = 0, cos_real, erro;
    int termos;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);

    printf("Digite o número de termos : ");
    scanf("%d", &termos);

    for (int n = 0; n < termos; n++) {
        int fat = 1;
        for (int i = 2; i <= 2 * n; i++) {
            fat *= i;
        }

        double termo = pow(-1, n) * pow(x, 2 * n) / fat;
        cos_aprox += termo;
    }

    cos_real = cos(x);
    erro = fabs(cos_real - cos_aprox);

    printf("\nCosseno aproximado: %.10lf", cos_aprox);
    printf("\nCosseno real      : %.10lf", cos_real);
    printf("\nErro absoluto     : %.10lf\n", erro);

    return 0;
}