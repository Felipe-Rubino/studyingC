#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{   
    int area, raio;
    printf("Digite o raio do circulo : ");
    scanf("%d", &raio);
    area = M_PI * pow(raio, 2);
    printf("A área do círculo é : %d", area);
    return 0;
}
