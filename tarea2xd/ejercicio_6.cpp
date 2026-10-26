/*
Nombre: David Vallejo
Ejercicio: 6 - Límite de repeticiones
Descripción: Permitir el ingreso de valores en un arreglo admitiendo únicamente un máximo de N repeticiones para cada elemento.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Permite ingresar valores controlando el limite de repeticiones
void VectorConRepeticionesPermitidas(int rep, int n, int vector[]){
    int contador;
    for(int i = 0; i < n; i++){
        do{
            contador = 0;
            cout << endl << "Ingrese el numero de la posicion [" << i << "]: ";
            cin >> vector[i];
            // Compara con las posiciones anteriores
            for(int j = 0; j < i; j++){
                // Cuenta cuantas veces se repite el valor
                if(vector[i] == vector[j]){
                    contador++;
                }
            }
            // Verifica si supera el limite permitido
            if(contador >= rep){
                cout << endl << "Supera el limite permitido de repeticiones: " << endl;
            }
        // Repite mientras exceda el limite
        }while(contador >= rep);
    }  
}

// Solicita el numero maximo de repeticiones permitidas
int NumeroDeRepeticiones(int n1){
    int n;
    do{
		cout << endl << "Ingrese la cantidad de veces maxima que desea repetir los valores: ";
		cin >> n;
    // Valida que el numero este dentro del rango
	}while(n < 0 or n > n1);
	return n;
}


int main(){

    int n, repeticiones;

    int Vector[EXT];

    // Lectura del tamaño del vector
    n = leerN(1,EXT);

    // Lectura del limite de repeticiones
    repeticiones = NumeroDeRepeticiones(n);

    cout << endl << "Vector con las repeticiones permitidas: " << endl;

    // Ingreso del vector con limite de repeticiones
    VectorConRepeticionesPermitidas(repeticiones, n, Vector);

    // Impresion del vector
    imprimirVector(n, Vector);

    return 0;

}



