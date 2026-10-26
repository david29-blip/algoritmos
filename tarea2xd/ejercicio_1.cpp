/*
Nombre: David Vallejo
Ejercicio: 1 - Intercalar arreglos ordenados
Descripción: Ingresar dos arreglos, ordenar el primero de forma ascendente y el segundo de forma descendente. Luego, intercalar ordenadamente ambos arreglos en uno nuevo.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Intercala los elementos de los dos vectores en un tercero
void Intercalar(int n, int Vector1[], int Vector2[], int Vector3[]){
    int n1 = n*2;
    int j = 0;
    // Recorre el vector resultante
    for(int i=0; i < n1; i++){
        // Inserta elemento del primer vector
        Vector3[i] = Vector1[j];
        i = i + 1;
        // Recorre el segundo vector desde el final
        n = n -1;
        // Inserta elemento del segundo vector
        Vector3[i] = Vector2[n];
        j = j + 1;
    }
}


int main(){
    int n;
    int Vector1[EXT];
    int Vector2[EXT];
    int Vector3[EXT];

    // Lectura del tamaño del vector
    n = leerN(1,EXT);

    // Ingreso del primer vector
    cout << endl << "Vector numero 1: " << endl;
    leerVector(n, Vector1);

    // Ingreso del segundo vector
    cout << endl << "Vector numero 2: " << endl;
    leerVector(n, Vector2);

    // Ordenamiento ascendente de los vectores
    ordenarVectorAsc(n, Vector1);
    ordenarVectorAsc(n, Vector2);

    // Impresion del primer vector ascendente
    cout << endl << "Vector ordenado ascendentemente: " << endl;
    imprimirVector(n, Vector1);

    // Impresion del segundo vector descendente
    cout << endl << "Vector ordenado descendentemente: " << endl;
    imprimirRevVector(n, Vector2);

    // Intercalacion de los vectores
    cout << endl << "Vector intercalado: " << endl;
    Intercalar(n, Vector1, Vector2, Vector3);

    // Impresion del vector resultante
    imprimirVector(n*2, Vector3);    

    return 0;
}

