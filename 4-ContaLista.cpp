#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int ContaNumRepetidos(int lista[], int num, int tamanho){
    if(tamanho == 0){
        return 0;
    }
    if(lista[0] == num){
        return 1 + ContaNumRepetidos(lista+1, num, tamanho-1);
    }
    else{
        return ContaNumRepetidos(lista+1, num, tamanho-1);
    }
}

int main(){
    int lista[] = {4, 2, 5, 1, 3, 2, 5, 4, 1, 3};
    int procura;
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    cout<<"Digite o valor que quer procurar na lista: ";cin>>procura;
    cout << "Voce tem " << ContaNumRepetidos(lista, procura, tamanho) << " numeros na lista";
    
cout<<endl;
system("pause");
return 0;
}