#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h> // biblioteca para comparar booleano

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n, resto;
    printf("Digite um número inteiro:");
    scanf("%d", &n);
    resto = n % 2;

    if(resto == 0){
        printf("O número %d é par\n", n);
    } else {
        printf("O número %d não é par\n", n);
    }

    // != quer dizer diferente


    //Pausa o programa após executar
    system("pause");
}

