#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h> // biblioteca para comparar booleano

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n, resto;
    printf("Digite um n�mero inteiro:");
    scanf("%d", &n);
    resto = n % 2;

    if(resto == 0){
        printf("O n�mero %d � par\n", n);
    } else {
        printf("O n�mero %d n�o � par\n", n);
    }

    // != quer dizer diferente


    //Pausa o programa ap�s executar
    system("pause");
}

