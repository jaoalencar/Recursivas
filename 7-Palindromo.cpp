/*
7. Verificar se uma palavra é um palíndromo: Crie uma função recursiva para verificar se uma palavra é um palíndromo (ex: "arara" é um palíndromo).
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

    void inverteRec(const char *palavra, char *copia, int &i){
        if (*palavra == '\0')
        {
            return;
        }
        inverteRec(palavra+1, copia, i);
        copia[i] = *palavra;
        i++;
    }

char *inverter(const char *palavra){
    //Coleta o tamanho da palavra
    int tam = 0;
    while (palavra[tam] != '\0')
    {
        tam++;
    }
    
    //Cria a palavra de cópia;
    char *copia = new char [tam +1];
    //Condição de parada, quando chegar no caractere final
    int i = 0;
    inverteRec(palavra, copia, i);
    copia[tam] = '\0';

    return copia;
}

    bool isPalindromoRec(const char *entrada,const char *saida){
        if (*entrada == '\0'){
            return true;
        }
        
        return (*entrada==*saida) && isPalindromoRec(entrada + 1, saida + 1);
    }

bool isPalindromo(const char *palavra){
    char *invertida = inverter(palavra);
    return isPalindromoRec(palavra, invertida);
}

int main(){
    char palavra[] = "casa";
    char teste[] = "arara";
    cout << isPalindromo(teste);
getchar();
return 0;
}