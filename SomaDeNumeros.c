#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    //Declarando variaveis
    int n, soma, aux;

    //Informar n
    printf("\nInforme um n�mero:");
    scanf("%d", &n);

    //Imprimir n
    printf("\nO n�mero que voc� informou foi %d", n);

    //Informar n e seus antecessores
    printf("\nOs antecessores do n�mero que voc� informou s�o:");

    for(aux = n - 1; aux >= 1; aux--){
        printf("\n%d", aux);
        soma = soma + aux;
    }

    printf("\nA soma desses antecessores com o n�mero informado �: %d", soma);

    printf("\n");

    //Pausa o programa ap�s executar
    system("pause");
}

