/*
Nombre: David Vallejo
Ejercicio: 5 - Circunferencia (radio fijo)
Descripción: Determina los puntos de coordenadas enteras que cumplen la ecuación X^2 + Y^2 = 25.
*/

#include <iostream>
#include <cmath>
using namespace std;

//Procedimiento que imprime las coordenadas que cumplen la ecuacion

void coordenadas(){

    for(int x = -5; x <= 5; x++){
        for(int y = -5; y <= 5; y++){
            if(pow(x,2) + pow(y,2) == 25){
                cout << "(" << x << ", " << y << ")" << endl;
            }
        }
    }
}


int main(){

    //llama al procedimiento

    coordenadas();

    return 0;
}