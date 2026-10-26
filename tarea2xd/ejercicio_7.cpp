/*
Nombre: David Vallejo
Ejercicio: 7 - Eliminación de repetidos
Descripción: Ingresar un arreglo y eliminar todos los valores repetidos, dejando únicamente elementos únicos.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Elimina los elementos repetidos del vector
int EliminarRepetidos(int n, int vector[]){
    for(int i=0; i < n; i++){
        // Compara el elemento actual con los siguientes
        for(int j = i + 1; j < n; j++){
            // Verifica si existe repeticion
            if(vector[i] == vector[j]){
                // Desplaza los elementos hacia la izquierda
                for(int xd = j; xd < n - 1; xd++){
                    vector[xd] = vector[xd + 1];
                }
                // Reduce el tamaño logico del vector
                n--;
                // Revisa nuevamente la posicion actual
                j--;
            }
        }
    }
    return n;
}


int main(){

    int n, n1;
    int Vector[EXT];

    // Lectura del tamaño del vector
    n = leerN(1, EXT);

    // Ingreso de los valores del vector
    leerVector(n, Vector);

    // Eliminacion de elementos repetidos
    n1 = EliminarRepetidos(n, Vector);

    cout << endl << "Vector sin repetidos:" << endl;

    // Impresion del vector resultante
    imprimirVector(n1, Vector);

    return 0;
}

