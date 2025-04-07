/*
Busca um numero em uma lista
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

bool BuscaNum(int lista[], int num, int inicio, int fim){
    if (inicio > fim){
        return false;
    }
    if (inicio == fim){
        return lista[inicio] == num;
    }

    int tamanho = fim - inicio;
    int meio = tamanho/2;
    return BuscaNum(lista, num, inicio, inicio+meio) || BuscaNum(lista, num, inicio+meio+1, fim);
}

int main(){
    int lista[] = {2,3,4,5,7,8,3};
    int tamanho = (sizeof(lista) / sizeof(lista[0])) - 1;
    int buscar = 6;

    BuscaNum(lista, buscar, 0, tamanho) ? cout<<"Encotrado": cout<<"Nao encontrado";


getchar();
return 0;
}