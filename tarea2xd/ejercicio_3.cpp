/*
Nombre: David Vallejo
Ejercicio: 3 - Fibonacci inverso
Descripción: Generar los N primeros términos de la serie de Fibonacci y almacenarlos en un arreglo en orden inverso al que fueron generados.
*/

#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

// Genera la serie de Fibonacci en orden inverso
void Fibonnaci(int n, int vector[]){
    int c;
    int a = 0;
    int b = 1;
    // Posicion final del vector
    int n1 = n - 1;

    for(int i = 1; i <= n; i++){
        // Guarda el termino en orden inverso
        vector[n1] = a;
        // Genera el siguiente termino de Fibonacci
        c = a + b;
		a = b;
		b = c;
        // Retrocede en el vector
        n1 = n1 - 1;
    }
}

int main(){
    int n;

    int Serie[EXT];

    // Lectura de la cantidad de terminos
    n = leerN(1, EXT);

    // Generacion de la serie
    Fibonnaci(n, Serie);

    // Impresion de la serie
    imprimirVector(n, Serie);

    return 0;

}
