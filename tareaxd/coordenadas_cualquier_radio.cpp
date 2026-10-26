/*
Nombre: David Vallejo
Ejercicio: 6 - Circunferencia generalizada
Descripción: Determina los puntos de coordenadas enteras que cumplen la ecuación X^2 + Y^2 = r^2, donde r es ingresado por el usuario.
*/

#include <iostream>
#include <cmath>
using namespace std;

//Procedimiento que imprime las coordenadas que cumplen la ecuacion

void coordenadas(int r){

    for(int x = -r; x <= r; x++){
        for(int y = -r; y <= r; y++){
            if(pow(x,2) + pow(y,2) == pow(r,2)){
                cout << "(" << x << ", " << y << ")" << endl;
            }
        }
    }
}

//Pide datos y los controla en este caso solo el radio

int main(){
    int r;

    do{
        cout << "Ingrese el radio del circulo: ";
        cin >> r;
    }while(r < 0);
    //llama al procedimiento
    coordenadas(r);

    return 0;
}