#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n, cont;

    printf("\nDigite um número:");
    scanf("%d", &n);
    cont = n - 1;

    while (n % cont != 0){
        //printf("\nTentamos dividir %d por %d", n, cont);
        cont--;
    };

    if(cont == 1){
        printf("\nSeu número é primo");
    } else {
        printf("\nSeu número não é primo");
    }
}
