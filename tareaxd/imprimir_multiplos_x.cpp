/*
Nombre: David Vallejo
Ejercicio: 4 - Múltiplos y promedio
Descripción: Genera los N múltiplos de un número X y calcula el promedio de aquellos que se encuentran dentro de un rango A y B.
*/

#include <iostream>
using namespace std;

//Calcula el promedio mediante la suma y el contador que hemos almacenado

float promedio(int suma, int contador){
    if(contador == 0){
        return 0;
    }else{
        return suma/contador;
    }
}

//genera cada multiplo de un valor x

int generarMultiplos(int x, int i){
    return i * x;
}

//procedimiento que imprime cada multiplo de x y almacena la suma y el contador en cada paso
void imprimirMultiplos(int n, int x, int a, int b){
    int suma,contador;
    suma = 0; 
    contador = 0;
    
    if(x == 0){
        cout << "Los multiplos de 0 es solo el 0" << endl;
        cout << "El promedio seria 0" << endl;
    }else{
        for(int i = 0; i < n; i++){
            int valor = generarMultiplos(i, x);

            cout << valor << endl;
            
            if(valor >= a and valor <= b){
                suma += valor;
                contador++;
            }

        }

        if(contador > 0){
            cout << "Promedio en el rango: " << promedio(suma, contador) << endl;
        }else{
            cout << "No hay valores dentro del rango" << endl;
        }

    }
}

//Funcion principal que controla que no se ingresen mal los datos para evitar problemas

int main(){
    int n,x,a,b;

    do{
        cout << "Ingrese el valor que desea buscar sus multiplos: ";
        cin >> x;
    }while(x < 0);

    do{
        cout << "Ingrese el numero de valores que desea encontrar: ";
        cin >> n;
    }while(n < 0);

    do{
        cout << "Ingrese el primer intervalo: ";
        cin >> a;
    }while(a < 0);

    do{
        cout << "Ingrese el segundo intervalo: ";
        cin >> b;
    }while(b < 0 or b <= a);

    //llama al procedimiento

    imprimirMultiplos(n,x,a,b);

    return 0;
}