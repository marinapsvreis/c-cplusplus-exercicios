#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    float a = 0;
    float b = 0;
    printf ("Digite o primeiro valor:");
    scanf ("%f", &a);

    printf ("Digite o segundo valor:");
    scanf ("%f", &b);

        float c = a + b;

    printf("\nA soma de a e b é: %f", c);

    c = (a + b) / 2;

    printf("\nA média entre a e b é: %f", c);

}


