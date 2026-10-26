/*
Nombre: David Vallejo
Ejercicio: 9 - Raíces cuadradas generalizadas
Descripción: Imprime una tabla de raíces cuadradas para valores dentro de un rango definido por el usuario con un incremento específico.
*/

#include <iostream> 
#include <cmath>
using namespace std;

//Calcula las raices entre el intervalo con paso que haya dicho el usuario
void raices(double a, double b, double paso){
    cout << "Valor\tRaiz cuadrada" << endl;

    for(double i = a; i <= b; i += paso){
        cout << i << "\t" << sqrt(i) << endl;
    }
}

//Ingreso de datos y el control de los mismos
int main(){
    double a,b,paso;

    do{
        cout << "Ingrese el primer intervalo: ";
        cin >> a;
    }while(a < 0);

    do{
        cout << "Ingrese el segundo intervalo: ";
        cin >> b;
    }while(b < 0 or b <= a);

    do{
        cout << "Ingrese los incrementos que desea que realice el intervalo: ";
        cin >> paso;
    }while(paso <= 0);

    //llamo el procedimiento para calculas las raices
    raices(a,b,paso);

    return 0;

}