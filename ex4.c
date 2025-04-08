#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    float nota1, nota2, nota3, media, menor;
    printf("Digite a nota da primeira prova! ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova! ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova! ");
    scanf("%f", &nota3);
    
    if (nota1 <= nota2 && nota1 <= nota3) {
        menor = nota1;
    } else if (nota2 <= nota1 && nota2 <= nota3) {
        menor = nota2;
    } else {
        menor = nota3;
    }
    
    media = (nota1 + nota2 + nota3 - menor) / 2;
    
    printf("\nMédia das duas maiores notas: %.2f\n", media);

    if (media >= 6.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}