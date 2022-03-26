#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    //Declarando variaveis
    int n = 1;
    int numeros[n], cont;

    // Informando o tamanho do vetor
    printf("\nQuantos numeros você quer calcular os quadrados?");
    scanf("%d", &n);

    // Informando os números
    for(cont = 0; cont < n; cont++){
    printf("\nDigite os numeros:");
    scanf("%d", &numeros[cont]);
    }

    // Informando os números digitados e seus quadrados
    for(cont = 0; cont < n; cont++){
    printf("\nO quadrado de %d é %d", numeros[cont], numeros[cont]*numeros[cont]);
    }

    printf("\n");

    //Pausa o programa após executar
    system("pause");
}
