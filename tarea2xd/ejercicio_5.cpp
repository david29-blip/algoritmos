/*
Nombre: David Vallejo
Ejercicio: 5 - Arreglo sin repeticiones
Descripción: Ingresar valores en un arreglo validando que no existan elementos repetidos.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Permite ingresar valores evitando elementos repetidos
void VectorSinRepeticiones(int n, int vector[]){
    int contador;
    for(int i = 0; i < n; i++){
        do{
            contador = 0;
            cout << endl << "Ingrese el numero de la posicion [" << i << "]: ";
            cin >> vector[i];
            // Compara con las posiciones anteriores
            for(int j = 0; j < i; j++){
                // Verifica si el valor ya existe
                if(vector[i] == vector[j]){
                    contador++;
                    cout << endl << "Numero repetido. Ingrese otro: " << endl;
                }
            }
        // Repite mientras exista repeticion
        }while(contador > 0);
    }  
}


int main(){

    int n;
    int Vector[EXT];

    // Lectura del tamaño del vector
    n = leerN(1,EXT);

    cout << endl << "Vector sin valores repetidos: " << endl;

    // Ingreso de valores sin repeticion
    VectorSinRepeticiones(n, Vector);

    // Impresion del vector
    imprimirVector(n, Vector);

    return 0;

}

