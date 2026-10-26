using namespace std;
#include <iostream>
#include "utils.h"

void imprimirPares(int n){
    if(n == 0){
        return;
    }
    imprimirPares(n - 1);
    cout << 2 * n << " ";
}

int Suma_digitos_numero(int n){
    if(n == 0){
        return 0;
    }

    return n % 10 + Suma_digitos_numero(n / 10);
}


int main(){
    int n;

    n = leerN(1,100);

    cout << "Los " << n << " primeros numeros pares son: ";
    imprimirPares(n);

    n = leerN(1,1000000);
    cout << "La suma de sus digitos es: " << Suma_digitos_numero(n);

    return 0;
}



