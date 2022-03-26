#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int l1, l2, l3;
    printf("Informe os comprimento dos 3 lados do triangulo:");
    scanf("%d %d %d", &l1, &l2, &l3);

    if(l1 == l2 && l2 && l3){
        printf("\nEsse triangulo é um triangulo equilatero");
    } else {
        printf("\nEsse triangulo não é um triangulo equilatero");
    }



    //Pausa o programa após executar
    system("pause");
}
