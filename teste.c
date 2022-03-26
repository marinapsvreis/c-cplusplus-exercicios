#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca que permite acentos

void main (){
    //Permite acentos
    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional
    //Imprime na tela
    printf ("Olá");

    //Declarar variavel inteira, quebrada, letra
    int a = 5;
    float b = 5.5;
    char letra = 'm';

    //Imprimir a variavel inteira e \n pula linha
    printf ("\nO atual valor de a é: %d", a);
    printf ("\nO atual valor de a é: %f", b);

    //Lendo valor inteiro
    printf ("\nDigite um novo valor para a:");
    scanf (" %d", &a);

    printf ("\nO novo valor de a é: %d", a);

    //Lendo valor quebrado
    printf ("\nDigite um novo valor para b:");
    scanf (" %f", &b);

    printf ("\nO novo valor de a é: %f", b);

    //Lendo valor unico caractere letra
    printf ("\nDigite uma nova letra para c:");
    fflush(stdin); // Limpar o buffer sempre bom antes de trabalhar com char
    scanf (" %c", &letra);

    printf ("\nO novo valor de a é: %c", letra);

}
