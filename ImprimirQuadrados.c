#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    //Declarando variaveis
    int n = 1;
    int numeros[n], cont;

    // Informando o tamanho do vetor
    printf("\nQuantos numeros voc� quer calcular os quadrados?");
    scanf("%d", &n);

    // Informando os n�meros
    for(cont = 0; cont < n; cont++){
    printf("\nDigite os numeros:");
    scanf("%d", &numeros[cont]);
    }

    // Informando os n�meros digitados e seus quadrados
    for(cont = 0; cont < n; cont++){
    printf("\nO quadrado de %d � %d", numeros[cont], numeros[cont]*numeros[cont]);
    }

    printf("\n");

    //Pausa o programa ap�s executar
    system("pause");
}
