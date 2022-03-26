#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string> // Biblioteca c++
#include <iostream> // Biblioteca c++
// #define TAM 3 // definindo uma constante

using namespace std; // Declarar para evitar ficar chamando função std ::  toda hora


int main(){

    setlocale(LC_ALL,""); // Usar linguagem do sistema operacional

    //Criando uma matriz
    int matriz [2][2], aux, aux2, i, j;

    //Lendo valores para a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << "\n Digite um número: ";
            cin >> matriz[i][j];
        }
    }

    //Imprimindo valores informados
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[i][j];
        }

        cout << "\n";
    }

    //Imprimindo valores com linhas invertidas

    aux = matriz [0][0];
    aux2 = matriz [0][1];
    matriz [0][0] = matriz [1][0];
    matriz [0][1] = matriz [1][1];
    matriz [1][0] = aux;
    matriz [1][1] = aux2;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[i][j];
        }

        cout << "\n";
    }




    //Pausa o programa após executar
    system("pause");

    return 0; //No c++ tem declarar a função principal main como inteira e precisa retornar 0.
}

