/*
6. Inverter uma string: Escreva uma função recursiva para inverter uma string (ex: "abc" -> "cba").
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void inverteRec(const char *origem, char *destino, int &i){
    if(*origem == '\0'){
        return;
    }
    inverteRec(origem+1, destino, i);
    destino[i++] = *origem;
}

char *invertePalavra(const char *palavra){
    //Pegar o tamanho da palavra
    int tam = 0;
    while (palavra[tam] != '\0')
    {
        tam++;
    }
    char *invertida = new char [tam+1];
    int i = 0;
    inverteRec(palavra, invertida, i);
    invertida[tam] = '\0';
    cout << invertida;
    return invertida;
}

/* FAZENDO SEM RECURSIVIDADE
char *invertePalavra(const char *palavra){
    
    Nessa função ele retorna um ponteiro ou seja,
    um ponto na mémoria que leva a um bloco de caracteres igual a "palavra",
    mas invertida. Para isso ele pega o ponto da memória que está o bloco de caracteres de palavras
    e cria o novo ponteiro. :)
    

    //pega o tamanho da palavra
    int tam = 0;
    while (palavra[tam] != '\0')
    {
        tam++;
    }
    
    //Cria de maneira dimamica uma variavel cópia do mesmo tamanhho que a palavra informada
    char *copia = new char [tam+1];

    //Inverte a palavra com for
    for (int i = 0; i < tam; i++)
    {
        copia[tam - i - 1] = palavra[i]; 
    }
    //coloca o fim da frase
    copia[tam] = '\0';
    return copia;
}*/

int main(){
    char frase[] = "Teste do ponteiro";
    char *palavracopia = invertePalavra(frase);
    
    
    cout << palavracopia;
getchar();
return 0;
}
