#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    float a;
    float b;
    printf ("Digite o primeiro valor:");
    scanf ("%f", &a);

    printf ("Digite o segundo valor:");
    scanf ("%f", &b);

    float c = abs(a - b); //valor absoluto, se for negativo vira positivo

    printf("\nA média entre a e b é: %f", c);

}
