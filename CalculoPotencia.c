#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n, p, cont, resultado = 1;
    printf("\nInforme o n�mero e a potencia desejada:");
    scanf("%d %d", &n, &p);

    for(cont = 0; cont < p; cont++){
        resultado = resultado * n;
    }

    printf("\nO resultado �: %d", resultado);

    printf("\n");


    //Pausa o programa ap�s executar
    system("pause");
}

