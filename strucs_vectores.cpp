/*
    Programa que permite el ingreso e impresion de los datos de los estudiantes
    de un listado
*/
using namespace std;
#define EXT 500
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include "utils.h"

struct estud{       //definicion del tipo resgistro
    string nombre;
    int edad;  
};

estud leerRegistro(){     //funcion que perimite el ingreso de campos de un resgistro estudiante
    cin.ignore();
    estud aux;
    cout << endl << "Ingrese el nombre: ";
    getline(cin, aux.nombre);
    cout << endl << "Ingrese la edad: ";
    aux.edad = leerN(1,90);
    return aux;
}
//segunda version de leer registro
void leerRegistro2(estud *rr){     //funcion que perimite el ingreso de campos de un resgistro estudiante
    
    cin.ignore();
    cout << endl << "Ingrese el nombre: ";
    getline(cin, rr->nombre);
    cout << endl << "Ingrese la edad: ";
    rr->edad = leerN(1,90);
}

void ImprimirRegistro(estud reg){     //imprime el contenido de los campos de un resgistro

    cout << "Nombre: " << reg.nombre << endl;
    cout << "Edad: " << reg.edad << endl;    
}

void ordenarRegistrosEdad(estud r[], int n1){ //funcion que ordena los datos de los registros del vector
    for(int i = 0; i <= n1-2; i++){       //ciclo for del pivote
        for(int j = i+1; j <= n1-1; j++){ //seleccion del elemento con el que se compara el pivote
            if(r[i].edad > r[j].edad){    //pivote es mayor
                estud aux = r[i];         //intercambiar valores
                r[i] = r[j];
                r[j] = aux;
            }
        }
    }
}

void ordenarRegistrosAlfabetica(estud r[], int n1){ //funcion que ordena los datos de los registros del vector
    for(int i = 0; i <= n1-2; i++){       //ciclo for del pivote
        for(int j = i+1; j <= n1-1; j++){ //seleccion del elemento con el que se compara el pivote
            if(r[i].nombre.compare(r[j].nombre)> 0){    //pivote es mayor
                estud aux = r[i];         //intercambiar valores
                r[i] = r[j];
                r[j] = aux;
            }
        }
    }
}

int main(){

    estud est[EXT];    //declaracion de un vector de tipo registro
    int n;

    n = leerN(1,EXT);
    
    for(int i = 0; i < n; i++){
        cout << endl << "Ingreso de datos del estudiante No. " << i + 1;
        leerRegistro2(&est[i]);
    }

    cout << endl << "Datos originales de los estudiantes";
    for(int i = 0; i < n; i++){
        cout << endl << "Datos del estudiante No. " << i + 1 << endl;
        ImprimirRegistro(est[i]);
    }

    ordenarRegistrosAlfabetica(est,n);
    cout << endl << "Datos ordenados de los estudiantes";
    for(int i = 0; i < n; i++){
        cout << endl << "Datos del estudiante No. " << i + 1 << endl;
        ImprimirRegistro(est[i]);
    }

}