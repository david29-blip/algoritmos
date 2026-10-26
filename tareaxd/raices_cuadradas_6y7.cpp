/*
Nombre: David Vallejo
Ejercicio: 8 - Tabla de raíces cuadradas
Descripción: Imprime una tabla con las raíces cuadradas de los valores comprendidos entre 6.0 y 7.5 con incrementos de 0.001.
*/

#include <iostream> 
#include <cmath>
using namespace std;

//Calcula las raices entre el intervalo con paso 0.001
void raices(){
    cout << "Valor\tRaiz cuadrada" << endl;

    for(double i = 6.0; i <= 7.5; i += 0.001){
        cout << i << "\t" << sqrt(i) << endl;
    }
}

int main(){

    //llamo el procedimiento
    raices();

    return 0;

}
