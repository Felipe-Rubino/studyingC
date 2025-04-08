#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    
    char palavra[20];
    int tamanho;
    
    printf("Insira uma palavra : ");
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    for(int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho -i -1]) {
            printf("\n a palavra nao é um palindromo ");
            return 0;
        }
    }
    printf("\nA palavra inserida eh um palindromo.");
}