/*
Nombre: David Vallejo
Ejercicio: 4 - Contención de arreglos
Descripción: Determinar si todos los elementos de un arreglo están contenidos completamente en otro arreglo ingresado por el usuario.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Determina cual vector tiene mayor cantidad de elementos
int VectorMayor(int n, int n1){
    if(n > n1){
        return 1; // A es mayor
    }
    else if(n < n1){
        return 2; // B es mayor
    }
    else{
        return 3; // iguales
    }
}

// Verifica si un vector esta contenido en otro
bool Contenido(int n, int n1, int vector[], int vector2[], int mayor){
    int contador = 0;
    // Marca los elementos ya utilizados
    bool usados[EXT] = {false};
    // A es mayor, verificar si B está contenido en A
    if(mayor == 1){
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < n; j++){
                // Verifica igualdad y que no haya sido usado
                if(vector2[i] == vector[j] && !usados[j]){
                    contador++;
                    usados[j] = true;
                    break;
                }
            }
        }
        return contador == n1;
    }
    // B es mayor, verificar si A está contenido en B
    else if(mayor == 2){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n1; j++){
                if(vector[i] == vector2[j] && !usados[j]){
                    contador++;
                    usados[j] = true;
                    break;
                }
            }
        }
        return contador == n;
    }
    // Verifica si ambos vectores contienen los mismos elementos
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n1; j++){
                if(vector[i] == vector2[j] && !usados[j]){
                    contador++;
                    usados[j] = true;
                    break;
                }
            }
        }
        return contador == n;
    }
}


int main(){

    int n, n1, mayor;

    int A[EXT];
    int B[EXT];

    // Ingreso del vector A
    cout << endl << "Vector A: " << endl;
    n = leerN(1, EXT);
    leerVector(n, A);

    // Ingreso del vector B
    cout << endl << "Vector B: " << endl;
    n1 = leerN(1, EXT);
    leerVector(n1, B);

    // Determina cual vector tiene mayor tamaño
    mayor = VectorMayor(n, n1);

    // Verifica la contencion de los vectores
    if(Contenido(n, n1, A, B, mayor)){

        if(mayor == 1){
            cout << endl << "B esta contenido en A" << endl;
        }
        else if(mayor == 2){
            cout << endl << "A esta contenido en B" << endl;
        }
        else{
            cout << endl << "Ambos vectores contienen los mismos elementos" << endl;
        }
    }
    else{
        cout << endl << "No existe contencion" << endl;
    }

    return 0;
}

