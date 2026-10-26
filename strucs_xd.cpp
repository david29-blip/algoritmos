/*
    Programa que permite el ingreso e impresion de los datos de los estudiantes
    de un listado
*/
using namespace std;
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
    estud aux;
    cout << endl << "Ingrese el nombre: ";
    getline(cin, aux.nombre);
    cout << endl << "Ingrese la edad: ";
    aux.edad = leerN(1,90);
    return aux;
}
//segunda version de leer registro
void leerRegistro2(estud *rr){     //funcion que perimite el ingreso de campos de un resgistro estudiante

    cout << endl << "Ingrese el nombre: ";
    getline(cin, rr->nombre);
    cout << endl << "Ingrese la edad: ";
    rr->edad = leerN(1,90);
}

void ImprimirRegistro(estud reg){     //imprime el contenido de los campos de un resgistro

    cout << "Nombre: " << reg.nombre << endl;
    cout << "Edad: " << reg.edad << endl;    
}

int main(){

    estud est;    //declaracion de una variable de tipo registro

    //est = leerRegistro();
    leerRegistro2(&est);

    cout << "Datos del estudiante" << endl;
    ImprimirRegistro(est);  

}