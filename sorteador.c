#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // Biblioteca para gerar numero random

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional
    srand((unsigned)time(NULL)); // Habilitar o numero random

    //Variavel recebe um numero aleat�rio entre 0 e 9
    //int aleatorio = rand() % 10;

    //Variavel recebe um numero aleat�rio entre 1 e 10 (resolvendo o problema de n�o incluir 0)
    int aleatorio = (rand() % 10) + 1;

    printf("O numero sorteado foi: %d\n", aleatorio);


    //Pausa o programa ap�s executar
    system("pause");
}
