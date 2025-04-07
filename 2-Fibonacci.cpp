/*
Seguência de Fibonacci -> usando recursividade faça uma função que calcule o enésimo numero de FIbonacci 
(Fn = Fn-1+Fn-2)
*/

/*
1 - 1 
2 - 1 = 1
3 - 1 + 1 = 2
4 -     1 + 2 = 3
5 -         2 + 3 = 5
6 -             3 + 5 = 8
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int fibonatti(int n){
    if (n == 1 || n == 0){
        return n;
    }
    return fibonatti(n-1) + fibonatti(n-2);
}

int main(){
    int n;
    cout<<"Digite o enesimo numero que deseja saber da seguencia de fibonatti: ";cin>>n;
    cout << fibonatti(n);

getchar();
return 0;
}