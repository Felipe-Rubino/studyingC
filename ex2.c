#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{   
    int valor;
    float celsius, kelvin, fahrenheit;
    printf("Digite qual temperatura você quer converter : \n ");
    printf(" \n Opção 1 : Celsius");
    printf(" \n Opção 2 : Fahrenheit");
    printf(" \n OPção 3 : Kelvin");
    scanf("%d", &valor);
    switch ( valor )
    {
        case 1 :
        
        printf(" \n Escreva a temperatura em Celsius e ela será convertida para as demais : ");
        
        scanf("%f", &celsius);
        
        kelvin = celsius + 273.15;
        fahrenheit = celsius * 9/5  + 32;
        
        printf("%.2f \n", kelvin);
        printf("%.2f \n", fahrenheit);
        break;
        
        case 2 :
        
        printf(" \n Escreva a temperatura em Kelvin e ela será convertida para as demais : ");
        
        scanf("%f", &kelvin);
        
        celsius = kelvin - 273.15;
        fahrenheit = (kelvin - 273.15) * 9/5 + 32;
        
        printf("%.2f \n", celsius);
        printf("%.2f \n", fahrenheit);
        break;
        
        case 3 :
        
        printf(" \n Escreva a temperatura em Fahrenheit e ela será convertida para as demais : ");
        
        scanf("%f", &fahrenheit);
        
        kelvin = (fahrenheit - 32) * 5/9;
        celsius = (fahrenheit - 32) * 5/9 + 273.15;
        
        printf("%.2f \n", kelvin);
        printf("%.2f \n", celsius);
    }
        
}