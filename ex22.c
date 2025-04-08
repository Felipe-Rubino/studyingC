#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
int main() {

	int matriz[10][10];
    int linhas, colunas;

    printf("Digite o número de linhas (máx %d): ", 10);
    scanf("%d", &linhas);
    printf("Digite o número de colunas (máx %d): ", 10);
    scanf("%d", &colunas);

    srand(time(NULL));

    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior e menor valor de cada linha:\n");
    for (int i = 0; i < linhas; i++) {
        int maior = matriz[i][0];
        int menor = matriz[i][0];
        for (int j = 1; j < colunas; j++) {
            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
        printf("Linha %d -> Maior: %d | Menor: %d\n", i + 1, maior, menor);
    }

    printf("\nMaior e menor valor de cada coluna:\n");
    for (int j = 0; j < colunas; j++) {
        int maior = matriz[0][j];
        int menor = matriz[0][j];
        for (int i = 1; i < linhas; i++) {
            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
        printf("Coluna %d -> Maior: %d | Menor: %d\n", j + 1, maior, menor);
    }

    return 0;
}