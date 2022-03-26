#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // Biblioteca para gerar numero random

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int n1, n2, opcao;
    printf("Você deseja: \n 1 - SOMAR\n 2 - SUBTRAIR\n 3 - DIVIDIR\n 4 - MULTIPLICAR \n Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nDigite os 2 valores: ");
    scanf("%d %d", &n1, &n2);

    switch(opcao){
    case 1:
        printf("O resultado da soma de %d e %d é: %d\n", n1, n2, n1+n2);
        break;
    case 2:
        printf("O resultado da subtração de %d e %d é: %d\n", n1, n2, n1-n2);
        break;
    case 3:
        printf("O resultado da divisão de %d e %d é: %d\n", n1, n2, n1/n2);
        break;
    case 4:
        printf("O resultado da multiplicação de %d e %d é: %d\n", n1, n2, n1*n2);
        break;
    };

    //Pausa o programa após executar
    system("pause");
}

