#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    float a, b, c;
    printf ("Digite 3 valores:");
    scanf ("%f %f %f", &a, &b, &c);

    printf("\nOs valores que voc� digitou s�o:\n A = %f \n B = %f \n C = %f", a, b, c);
    printf("\n A multiplica��o deles �: %f", a * b * c);

}
