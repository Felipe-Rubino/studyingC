#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
int main() {

	int vetor[100], n;

	printf("Digite a quantidade de elementos : ");
	scanf("%d", &n);

	srand(time(NULL));

	printf("\nVetor: ");
	for (int i = 0; i < n; i++) {
		vetor[i] = rand() % 100; 
		printf("%d ", vetor[i]);
	}

	float soma = 0;
	for (int i = 0; i < n; i++) {
		soma += vetor[i];
	}
	float media = soma / n;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (vetor[i] > vetor[j]) {
				int temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
	float mediana;
	if (n % 2 == 0)
		mediana = (vetor[n/2 - 1] + vetor[n/2]) / 2.0;
	else
		mediana = vetor[n/2];

	int moda = vetor[0], maxRepeticoes = 0;
	for (int i = 0; i < n; i++) {
		int cont = 0;
		for (int j = 0; j < n; j++) {
			if (vetor[j] == vetor[i])
				cont++;
		}
		if (cont > maxRepeticoes) {
			maxRepeticoes = cont;
			moda = vetor[i];
		}
	}

	float somaQuadrados = 0;
	for (int i = 0; i < n; i++) {
		somaQuadrados += pow(vetor[i] - media, 2);
	}
	float desvio = sqrt(somaQuadrados / n);

	printf("\n Estatisticas:");
	printf("Media: %.2f\n", media);
	printf("Mediana: %.2f\n", mediana);
	printf("Moda: %d\n", moda);
	printf("Desvio padrao: %.2f\n", desvio);

	return 0;
}