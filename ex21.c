#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
int main() {

	int matriz[10][10], rotHorario[10][10], rotAntiHorario[10][10];
    int n;

    printf("Digite o tamanho da matriz quadrada até %d: ", 10);
    scanf("%d", &n);

    srand(time(NULL));

    printf("\nMatriz original:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotHorario[j][n - 1 - i] = matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotAntiHorario[n - 1 - j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz rotacionada 90° no sentido horário:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", rotHorario[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz rotacionada 90° no sentido anti-horário:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", rotAntiHorario[i][j]);
        }
        printf("\n");
    }

    return 0;
}