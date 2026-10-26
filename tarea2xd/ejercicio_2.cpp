/*
Nombre: David Vallejo
Ejercicio: 2 - Mejores calificaciones
Descripción: Permitir el ingreso de un arreglo de estudiantes y otro de calificaciones, para posteriormente mostrar el listado de los estudiantes con mejores notas.
*/

#include <iostream>
#include <string>
#include <iomanip>
#define EXT 500
using namespace std;
#include "utils.h"

// Ordena las calificaciones ascendentemente junto con los nombres
void ordenarVector(int n, int vector[], string vector2[]){
	for(int p=0; p < n-1; p++){
		for(int c = p+1; c < n; c++){
			if(vector[p] > vector[c]){
				int aux;
				aux = vector[p];
				vector[p] = vector[c];
				vector[c] = aux;
                // Intercambia tambien los nombres
                string aux2;
				aux2 = vector2[p];
				vector2[p] = vector2[c];
				vector2[c] = aux2;
			}
		} 
	}
}

// Permite ingresar los nombres de los estudiantes
void NombresEstudiantes(int n, string Estudiantes[]){
    cout << endl << "Estudiantes: " << endl;
    for(int i=0; i < n; i++){
	    cout << endl << "Ingrese el nombre del estudiante [" << i + 1 << "]: ";	
	    getline(cin, Estudiantes[i]);
	}
}

// Permite ingresar las calificaciones de cada estudiante
void CalificacionesPorEstudiante(int n, int vector[], string vector2[]){
    for(int i = 0; i < n; i++) {
        do{
            cout << "Ingrese la calificacion de " << vector2[i] << ": ";
	        cin >> vector[i];
        // Valida que la nota este entre 0 y 10
        }while(vector[i] < 0 or vector[i] > 10);

    }    
}

// Imprime la tabla de estudiantes y calificaciones
void Impresion(int n, string vector[], int vector2[]){
    cout << left << setw(25) << "ESTUDIANTE" << setw(15) << "CALIFICACION" << endl;
    for(int i=0; i < n; i++){
        cout << left << setw(25) << vector[i] << setw(15) << vector2[i] << endl;
    }

}

// Imprime los estudiantes con mejores calificaciones
void Impresionrev(int n, int n1, string vector[], int vector2[]){
    cout << left << setw(25) << "ESTUDIANTE" << setw(15) << "CALIFICACION" << endl;
    // Recorre desde las notas mas altas
    for(int i=n-1; i >= n-n1 ; i--){
        cout << left << setw(25) << vector[i] << setw(15) << vector2[i] << endl;
    }

}

// Solicita la cantidad de estudiantes a mostrar
int NumeroDeEstudiantes(int n){
    int n1;
    do{
        cout << "Ingrese la cantidad de cuantos estudiantes desea obtener de los que tienen mejores calificaciones: ";
        cin >> n1;
    // Valida que el valor este dentro del rango
    }while(n1 < 1 or n1 > n);

    return n1;
}

int main(){

    int n, n1;

    string Estudiantes[EXT];
    int Calificaciones[EXT];

    // Lectura de la cantidad de estudiantes
    n = leerN(1, EXT);

    cin.ignore(); 

    // Ingreso de nombres
    NombresEstudiantes(n, Estudiantes);

    // Ingreso de calificaciones
    CalificacionesPorEstudiante(n, Calificaciones, Estudiantes);

    // Impresion original
    Impresion(n, Estudiantes, Calificaciones);

    // Ordenamiento de calificaciones y nombres
    ordenarVector(n, Calificaciones, Estudiantes);

    // Cantidad de mejores estudiantes a mostrar
    n1 = NumeroDeEstudiantes(n);

    // Impresion de mejores calificaciones
    Impresionrev(n, n1, Estudiantes, Calificaciones);

    return 0;

}
