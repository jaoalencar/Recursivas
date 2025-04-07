/*
Fatorial de um numero usando função recursiva -> n! = n * (n-1) * (n-1) * ... * 1
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//FUNÇÃO FATORIAL
int fatorial(int n){
    //FUNÇÃO DE FINALIDADE
    if (n==1){
        return n;
    }
    //EXECUTA O FATORIAL CHAMANDO FATORIAL
    return n*fatorial(n-1);
}

int main(){
    //VARIAVEIS
    int n, Fatorial;
    //MENU INICIAL
    cout << "Inicio" << endl;
    cout << "Digite o numero do fatorial: "; cin >> n;
    //COLETA O VALOR FATORIAL
    Fatorial = fatorial(n);
    
    //FINALIZA O CODIGO MOSTRANDO O FATORIAL
    cout << n << "!" << " = " << Fatorial;
cout << "\n----------FIM DO CODIGO----------\n";
getchar();
return 0;
}