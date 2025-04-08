#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main ()
{
	int opcao;
    float V, I, R;

    printf("Escolha o que deseja calcular:\n");
    printf("Tensão\n");
    printf("Corrente\n");
    printf("Resistência\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite a corrente (A): ");
            scanf("%f", &I);
            printf("Digite a resistência (Ohms): ");
            scanf("%f", &R);
            V = I * R;
            printf("Tensão (V) = %.2f volts\n", V);
            break;

        case 2:
            printf("Digite a tensão (V): ");
            scanf("%f", &V);
            printf("Digite a resistência (Ohms): ");
            scanf("%f", &R);
            I = V / R;
            printf("Corrente (I) = %.2f amperes\n", I);
            break;

        case 3:
            printf("Digite a tensão (V): ");
            scanf("%f", &V);
            printf("Digite a corrente (A): ");
            scanf("%f", &I);
            R = V / I;
            printf("Resistência (R) = %.2f ohms\n", R);
            break;
    }

    return 0;
}