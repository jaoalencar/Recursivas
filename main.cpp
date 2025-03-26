#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void imprimir(int numero){
    if(numero>10){
        return;
    }

    cout<<numero<<endl;
    imprimir(numero + 1 );   
}

int main(){
    imprimir(1);

getchar();
return 0;
}