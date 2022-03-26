#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n, cont, aux = 1;

    printf("\nInforme quantos números impares você quer:");
    scanf("%d", &n);

    for(cont = 0; cont < n; cont++){
        printf("%d\n", aux);
        aux = aux + 2;
    }

    printf("\n");

    //Pausa o programa após executar
    system("pause");
}

