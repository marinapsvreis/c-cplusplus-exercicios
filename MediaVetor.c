#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// #define TAM 3 // definindo uma constante

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    int qn;

    // Informe quantos numeros você quer tirar a média
    printf("\nQuantos números você quer tirar média?");
    scanf("%d", &qn);

    int vetor[qn], cont;
    float media = 0;

      // Recebendo os números
    for(cont = 0; cont < qn; cont++) {
        printf("\n Digite um número:");
        scanf("%d", &vetor[cont]);
    }

    // Informando os números digitados
    for (cont = 0; cont < qn; cont++){
        printf("\n O %dº número que você digitou foi: %d", cont + 1, vetor[cont]);
        media = media + vetor[cont];
    }

    media = media / qn;

    //Calculando a média
    printf ("\nA média entre esses números é: %.1f \n", media);

    //Pausa o programa após executar
    system("pause");
}
