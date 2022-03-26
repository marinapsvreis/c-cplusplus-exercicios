// Bibliotecas basicas

#include <stdio.h>
#include <stdlib.h>

#include <locale.h> // Habilita o uso de acentos porém precisa do comando abaixo
setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

//Pausa o programa após executar (inserir no fim do codigo)
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

vetor[3]; // Vetor com alocação em 0, 1, 2
matriz[2, 2] // Matriz com alocação em 0,0 + 0,1 + 1,0 + 1,1
*ponteiro // Variavel que recebe endereço de memória e não o conteúdo dela, serve para apontar para um endereço de outra variavel // é possivel fazer ponteiro do ponteiro


//Imprimindo na tela

printf("%d, %.2f, %b, %c", variavelinteira, variavelfloat, variavelbool, variavelchar);

\n // Pula linha

cout >> "" >> variavel >> ""; // C++


//Coletando dados do usuário
scanf("%d, %f, %b, %c", &int, &float, &bool, &char);

cin << variavel;



//Operadores Lógicos

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


//Estruturas de repetição

while(condicional){

}

do {

} while (condicional)

for(declara contador; compara contador; incrementa contador){

}

//Funções

void funcao (parametro){
    // Dentro da função ela só reconhece as variaveis declaradas no parametro ou aqui dentro (Escopo Local primerom depois o GLOBAL por exemplo #define (constante)
}

// Podem ser parametros da função, vetores (que já são ponteiros, matrizes, e variaveis em geral)
// OBS: Vetor já é ponteiro por exemplo:

int vetor[3]; // Declarando vetor de inteiros
printf("\nO primeiro espaco na memória do vetor eh %d que deveria ser igual a %d", &vetor, vetor); //Imprime na mesma frase o endereço 2 vezes

//É possivel fazer operações com endereços de vetores por exemplo
&vetor + 1; // Isso é igual ao endereço do vetor[1]





