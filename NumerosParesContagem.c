#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional
    int cont = 10;

    //while
    while(cont <= 20 ){
        printf("\n%d", cont);
        cont = cont + 2;
    }

    //dowhile
    cont = 10;
    do{
        printf("\n%d", cont);
        cont = cont + 2;
    }while(cont <= 20);

    //for
    for(cont = 10; cont <= 20; cont = cont + 2){
        printf("\n%d", cont);
    }



    //Pausa o programa após executar
    system("pause");
}
