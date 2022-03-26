#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n, p, cont, resultado = 1;
    printf("\nInforme o número e a potencia desejada:");
    scanf("%d %d", &n, &p);

    for(cont = 0; cont < p; cont++){
        resultado = resultado * n;
    }

    printf("\nO resultado é: %d", resultado);

    printf("\n");


    //Pausa o programa após executar
    system("pause");
}

