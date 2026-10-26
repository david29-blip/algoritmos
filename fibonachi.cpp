/* 
    Programa que genere los n primeros terminos de la serie de fibonachi

    valores iniciales               Siguientes valores
    0,1                             1, 2, 3, 5, 8, 13, 21, .........
*/

#include <iostream>
using namespace std;

int main(){

    long long n, a, b, c, n1, xd, dx;

    do{
        cout << "Ingrese cuantos valores desea que tenga la serie (rango): ";
        cin >> n;
        if(n < 1){
            cout << "El valor no puede ser negativo o 0";
        }
    }while(n < 1);

    do{
        cout << "Ingrese cuantos valores finales desea de dicho rango: ";
        cin >> n1;
        if(n1 < 1 or n1 > n){
            cout << "El rango debe ser de (1 - " << n << ") " << endl; 
        }
    }while(n1 < 1 or n1 > n);

    a = 0;
    b = 1;
    
    for(int i = 1; i <= n; i++){
        cout << a << ", ";
        xd = a;
        dx = b;
        c=a+b;
		a=b;
		b=c;
    }
    cout << endl;
    for(int i = 0; i < n1; i++){
        c=dx - xd;
		dx=xd;
		xd=c;
        cout << dx << ", ";
    }


    return 0;
}

