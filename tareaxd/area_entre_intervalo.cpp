/*
Nombre: David Vallejo
Ejercicio: 2 - Área de círculos
Descripción: Genera el área de los círculos cuyos radios están comprendidos entre dos valores A y B ingresados por el usuario.
*/

#include <iostream>
#include <cmath>
using namespace std;

//Esta funcion se encarga de calcular el area de cada valor del intervalo

float calcularArea(int r){
    double pi;
    pi = 3.14159265;
    return pi * pow(r,2);
}

//Recorre el intervalo para calcular el area con ese numero como radio

void areaCirculo(int a, int b){
    for(int i = a; i <= b; i++){

        cout << "El area del circulo de radio " << i << " es: " << calcularArea(i) << endl;
        
    }
}

//Se encarga de pedir datos y validarlos

int main(){
    int a,b;

    do{
        cout << "Ingrese el primer intervalo: ";
        cin >> a;
    }while(a < 0);

    do{
        cout << "Ingrese el segundo intervalo: ";
        cin >> b;
    }while(b < 0 or b <= a);

    //llama al procedimiento

    areaCirculo(a,b);

    return 0;

}