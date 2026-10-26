/*
Nombre: David Vallejo
Ejercicio: 8 - Números capicúa
Descripción: Generar un listado ordenado de números enteros comprendidos entre A y B cuya lectura sea igual de izquierda a derecha y viceversa.
*/

#include <iostream>
#include <cmath>
#define EXT 500
using namespace std;
#include "utils.h"

// Genera un listado de numeros capicua entre A y B
int Listado(int a, int b, int vector[]){
    int aux, invertido, dig, j;
    j = 0;
    // Recorre todos los numeros entre A y B
    for(int i = a; i <= b; i++){
        // Obtiene el valor absoluto del numero
        aux = abs(i);
        invertido = 0;
        // Invierte los digitos del numero
        while(aux > 0){
            dig = aux % 10;
            invertido = invertido * 10 + dig;
            aux = aux / 10;
        }
        // Verifica si el numero es capicua
        if(abs(i) == invertido){
            vector[j] = i;
            j = j + 1;
        }
    }
    return j;
}


int main(){

    int a, b, n;
    int vector[EXT];

    // Lectura del primer valor
    cout << "Ingrese el primero valor: ";
    cin >> a;

    // Lectura y validacion del segundo valor
    do{
        cout << "Ingrese el segundo valor: ";
        cin >> b;

    }while(b<=a);

    // Generacion del listado de numeros capicua
    n = Listado(a,b, vector);

    // Impresion del listado
    imprimirVector(n, vector);
}

