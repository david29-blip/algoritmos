/* 
    Programa de empleo de apuntadores
*/

using namespace std;
#include <iostream>


int main(){
    int a;
    int b;

    int *pa,*pb;


    cout << endl << "Valor para a: ";
    cin >> a;

    cout << endl << "Valor para b: ";
    cin >> b;

    pa = &a;
    pb = &b;

    cout << endl << "Valor contenido en a: " << a;
    cout << endl << "Direccion de memoria de a: " << &a;
    cout << endl << "Valor de pa: " << pa;
    cout << endl << "Valor apuntado por pa es: " << *pa;

    //a++;   //incrementa el valor de a 
    (*pa)++;  //incrementa el valor con el puntero

    cout << endl << "Valor contenido en a: " << a;
    cout << endl << "Direccion de memoria de a: " << &a;
    cout << endl << "Valor de pa: " << pa;
    cout << endl << "Valor apuntado por pa es: " << *pa;


    cout << endl << "Valor contenido en b: " << b;
    cout << endl << "Direccion de memoria de b: " << &b;
    cout << endl << "Valor de pb: " << pb;
    cout << endl << "Valor apuntado por pb es: " << *pb;

    //Los apuntadores son variables que almacenan direcciones de memoria
    //para declarar un apuntador <tipo> el signo * <nombre del puntero>;

    return 0;

}