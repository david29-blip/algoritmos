/*
Nombre: David Vallejo
Ejercicio: 9 - Rotación de arreglos
Descripción: Permitir el ingreso de varios números en un arreglo y mover los últimos N elementos hacia las primeras posiciones.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Mueve los ultimos N elementos al inicio del vector
void Rotar(int n, int vector[], int n1){

    int aux[EXT];
    int j = 0;

    // Copia los ultimos elementos al inicio del auxiliar
    for(int i = n - n1; i < n; i++){
        aux[j] = vector[i];
        j++;
    }

    // Copia el resto de elementos
    for(int i = 0; i < n - n1; i++){
        aux[j] = vector[i];
        j++;
    }
    // Copia nuevamente al vector original
    for(int i = 0; i < n; i++){
        vector[i] = aux[i];
    }
}

int main(){

    int n, n1;
    int vector[EXT];

    // Lectura del tamaño del vector
    n = leerN(1, EXT);

    // Ingreso de los valores
    leerVector(n, vector);

    // Lectura y validacion de la cantidad de elementos a mover
    do{
        cout << "Cuantos valores desea mover al inicio: ";
        cin >> n1;
    }while(n1 <= 0 or n1 > n);

    // Rotacion del vector
    Rotar(n, vector, n1);

    cout << endl << "Vector modificado:" << endl;

    // Impresion del vector resultante
    imprimirVector(n, vector);

    return 0;
}
