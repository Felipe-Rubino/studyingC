#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
int main() {
    
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int vetor1[100], vetor2[100], comuns[100];
    int totalComuns = 0;

    srand(time(NULL)); 

    printf("\nVetor 1: ");
    for (int i = 0; i < n; i++) {
        vetor1[i] = rand() % 100;
        printf("%d ", vetor1[i]);
    }
    printf("\nVetor 2: ");
    for (int i = 0; i < n; i++) {
        vetor2[i] = rand() % 100;
        printf("%d ", vetor2[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vetor1[i] == vetor2[j]) {
                bool jaExiste = false;
                for (int k = 0; k < totalComuns; k++) {
                    if (comuns[k] == vetor1[i]) {
                        jaExiste = true;
                        break;
                    }
                }
                if (!jaExiste) {
                    comuns[totalComuns++] = vetor1[i];
                }
            }
        }
    }

    printf("\nElementos comuns: ");
    if (totalComuns == 0) {
        printf("Nenhum elemento comum encontrado.\n");
    } else {
        for (int i = 0; i < totalComuns; i++) {
            printf("%d ", comuns[i]);
        }
        printf("\n");
    }
        return 0;
}
