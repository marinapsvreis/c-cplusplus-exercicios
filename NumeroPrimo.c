#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n, cont;

    printf("\nDigite um n�mero:");
    scanf("%d", &n);
    cont = n - 1;

    while (n % cont != 0){
        //printf("\nTentamos dividir %d por %d", n, cont);
        cont--;
    };

    if(cont == 1){
        printf("\nSeu n�mero � primo");
    } else {
        printf("\nSeu n�mero n�o � primo");
    }
}
