#include <stdio.h>
#include <stdlib.h>

void main (){
    int vetor[3];
    vetor[0] = 0 ;
    vetor[1] = 1 ;
    vetor[2] = 2 ;

    printf("\nO primeiro espaco na memória do vetor eh %d que deveria ser igual a %d", &vetor, vetor);

}
