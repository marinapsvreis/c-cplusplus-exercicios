#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    float n1, n2, n3, media;
    printf("Informe as 3 notas do aluno:");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;

    if(media >= 7){
        printf("\nA média do aluno foi %f e ele foi aprovado!", media);
    } else {
        printf("\nA média do aluno foi %f e ele foi reprovado!", media);
    }



    //Pausa o programa após executar
    system("pause");
}
