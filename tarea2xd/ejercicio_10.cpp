/*
Nombre: David Vallejo
Ejercicio: 10 - Organización de positivos y negativos
Descripción: Ingresar varios valores en un arreglo y reorganizarlos colocando primero los positivos en orden ascendente y luego los negativos en orden descendente.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Separa los valores positivos y negativos en diferentes vectores
int Separar(int n,int vector[], int posi[], int nega[]){
    int j = 0;
    int k = 0;
    for(int i = 0; i < n; i++){
        // Guarda positivos
        if(vector[i] >= 0){
            posi[j] = vector[i];
            j = j + 1;
        }
        // Guarda negativos
        else{
            nega[k] = vector[i];
            k = k + 1;
        }
    }
    // Retorna la cantidad de positivos
    return j;
}

// Une los vectores positivos y negativos en el vector original
void VectorResultante(int n1, int n2, int posi[], int nega[], int vector[]){
    int wa;
    // Copia los positivos al inicio
    for(int i=0; i < n1; i++){
        vector[i] = posi[i];
        wa = i;
    }
    wa = wa + 1;
    // Copia los negativos al final
    for(int j = 0; j < n2; j++){
        vector[wa] = nega[j];
        wa = wa + 1;
    }
}


int main(){

    int n, n1, n2;
    int vector[EXT];
    int positivos[EXT];
    int negativos[EXT];

    // Lectura del tamaño del vector
    n = leerN(1, EXT);

    // Ingreso de los valores
    leerVector(n, vector);

    // Separacion de positivos y negativos
    n1 = Separar(n, vector, positivos, negativos);
    n2 = n - n1;

    // Ordenamiento ascendente de positivos
    ordenarVectorAsc(n1, positivos);

    // Ordenamiento descendente de negativos
    ordenarVectorAsc(n2, negativos);
    InvertirVector(n2, negativos);

    cout << endl << "Vector resultante: " << endl;

    // Union de los vectores
    VectorResultante(n1, n2, positivos, negativos, vector);

    // Impresion del vector final
    imprimirVector(n, vector);

}

