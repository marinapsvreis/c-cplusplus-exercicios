// Bibliotecas basicas

#include <stdio.h>
#include <stdlib.h>

#include <locale.h> // Habilita o uso de acentos por�m precisa do comando abaixo
setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

//Pausa o programa ap�s executar (inserir no fim do codigo)
system("pause");

//Limpeza do buffer
fflush(stdin);


// Declarando Variaveis

int n; //numeros inteiros
float nq; // numeros com virgula
bool vf; // true / false - 0 / 1
char l; // uma letra
string palavra[255]; // um conjuntos de letras/palavras + tamanho de caracteres permitidos
struct estrutura; // um tipo de variavel que pode ser criado no programa

vetor[3]; // Vetor com aloca��o em 0, 1, 2
matriz[2, 2] // Matriz com aloca��o em 0,0 + 0,1 + 1,0 + 1,1
*ponteiro // Variavel que recebe endere�o de mem�ria e n�o o conte�do dela, serve para apontar para um endere�o de outra variavel // � possivel fazer ponteiro do ponteiro


//Imprimindo na tela

printf("%d, %.2f, %b, %c", variavelinteira, variavelfloat, variavelbool, variavelchar);

\n // Pula linha

cout >> "" >> variavel >> ""; // C++


//Coletando dados do usu�rio
scanf("%d, %f, %b, %c", &int, &float, &bool, &char);

cin << variavel;



//Operadores L�gicos

&& = AND
|| = OR

++ = + 1
-- = - 1
== = igual
= = recebe

//


//Condicional

if (){

} else if(){
} else {
}

switch(opcao)
case 1:
    break;
case 2:
    break;


//Estruturas de repeti��o

while(condicional){

}

do {

} while (condicional)

for(declara contador; compara contador; incrementa contador){

}

//Fun��es

void funcao (parametro){
    // Dentro da fun��o ela s� reconhece as variaveis declaradas no parametro ou aqui dentro (Escopo Local primerom depois o GLOBAL por exemplo #define (constante)
}

// Podem ser parametros da fun��o, vetores (que j� s�o ponteiros, matrizes, e variaveis em geral)
// OBS: Vetor j� � ponteiro por exemplo:

int vetor[3]; // Declarando vetor de inteiros
printf("\nO primeiro espaco na mem�ria do vetor eh %d que deveria ser igual a %d", &vetor, vetor); //Imprime na mesma frase o endere�o 2 vezes

//� possivel fazer opera��es com endere�os de vetores por exemplo
&vetor + 1; // Isso � igual ao endere�o do vetor[1]





