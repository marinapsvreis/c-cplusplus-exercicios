#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// #define TAM 3 // definindo uma constante

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int qn;

    // Informe quantos numeros voc� quer tirar a m�dia
    printf("\nQuantos n�meros voc� quer tirar m�dia?");
    scanf("%d", &qn);

    int vetor[qn], cont;
    float media = 0;

      // Recebendo os n�meros
    for(cont = 0; cont < qn; cont++) {
        printf("\n Digite um n�mero:");
        scanf("%d", &vetor[cont]);
    }

    // Informando os n�meros digitados
    for (cont = 0; cont < qn; cont++){
        printf("\n O %d� n�mero que voc� digitou foi: %d", cont + 1, vetor[cont]);
        media = media + vetor[cont];
    }

    media = media / qn;

    //Calculando a m�dia
    printf ("\nA m�dia entre esses n�meros �: %.1f \n", media);

    //Pausa o programa ap�s executar
    system("pause");
}
