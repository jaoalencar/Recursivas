/*
Soma de lista: usando recursividade some os valores de uma lista de numeros
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int somalista(int lista[], int tamanho){
    
    if (tamanho == 0){
        return 0;
    }

    return lista[0] + somalista(lista+1 /*soma a quantidade de bites do primeiro elemento da lista*/, tamanho -1);
}

int main(){
    int lista [] = {1,2,3,4,5};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    cout<<"A soma da lista eh " << somalista(lista, tamanho);

getchar();
return 0;
}