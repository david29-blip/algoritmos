/*
    Programa modular que permita el intercambio de dos valores ingresados

    a   b
    10  20
    Respuesta
    20  10

*/

using namespace std;
#include <iostream>


void IngresarValores(int *valor){
    cout << endl << "Ingrese un valor: ";
    cin >> *valor;
}

void IntercambiarValores(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void ImprimirValores(int *a){
    cout << endl << "Valor almacenado es: " << *a;
}

int main(){
    int a,b;

    IngresarValores(&a);
    IngresarValores(&b);

    IntercambiarValores(&a, &b);

    ImprimirValores(&a);
    ImprimirValores(&b);

    // & es para ver la direccion de memoria
    // * es para ver el contenido de esa direccion de memoria

}