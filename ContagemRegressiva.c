#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional
    int cont = 10;

    //while
    while(cont >= 0){
        printf("\n%d", cont);
        cont--;
    }

    //dowhile
    cont = 10;
    do{
        printf("\n%d", cont);
        cont--;
    }while(cont >= 0);

    //for
    for(cont = 10; cont >= 0; cont--){
        printf("\n%d", cont);
    }



    //Pausa o programa após executar
    system("pause");
}
