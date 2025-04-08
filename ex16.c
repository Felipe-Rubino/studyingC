#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
int main() {
	int n, i;
    int vetor1[n], vetor2[n], soma[n];

	printf("Digite o tamanho dos vetores: ");
	scanf("%d", &n);

	printf("Digite os elementos do primeiro vetor:\n");
	for (i = 0; i < n; i++) {
		printf("vetor1[%d]: ", i);
		scanf("%d", &vetor1[i]);
	}

	printf("Digite os elementos do segundo vetor:\n");
	for (i = 0; i < n; i++) {
		printf("vetor2[%d]: ", i);
		scanf("%d", &vetor2[i]);
	}

	for (i = 0; i < n; i++) {
		soma[i] = vetor1[i] + vetor2[i];
	}

	printf("Vetor resultante da soma:\n");
	for (i = 0; i < n; i++) {
		printf("soma[%d] = %d\n", i, soma[i]);
	}

	return 0;
}