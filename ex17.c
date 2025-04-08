#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
int main() {
    
    srand(time(NULL));
    
    int tamanho = rand() % 91 + 10; 
    float vetor[tamanho];

    
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = ((float)rand() / RAND_MAX) * 100.0;
    }

    float maior = vetor[0];
    float menor = vetor[0];
    float soma = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
        soma += vetor[i];
    }

    float media = soma / tamanho;

    printf("Tamanho do vetor: %d\n", tamanho);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}