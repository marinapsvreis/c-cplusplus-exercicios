#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    //Declarando variaveis
    int n, soma, aux;

    //Informar n
    printf("\nInforme um número:");
    scanf("%d", &n);

    //Imprimir n
    printf("\nO número que você informou foi %d", n);

    //Informar n e seus antecessores
    printf("\nOs antecessores do número que você informou são:");

    for(aux = n - 1; aux >= 1; aux--){
        printf("\n%d", aux);
        soma = soma + aux;
    }

    printf("\nA soma desses antecessores com o número informado é: %d", soma);

    printf("\n");

    //Pausa o programa após executar
    system("pause");
}

