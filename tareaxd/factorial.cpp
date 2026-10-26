/*
Nombre: David Vallejo
Ejercicio: 1 - Factorial
Descripción: Calcula el factorial de un número ingresado por el usuario utilizando programación modular.
*/

#include <iostream>
using namespace std;

//calcula el factorial recorriendo cada numero hasta llegar al valor ingresado
int factorial(int numero){
    int factorial = 1;

    for(int i=1; i<=numero ; i++){
        factorial = factorial * i;
    }

    return factorial;
}

//controla que el numero no sea negativo para evitar fallos

int main(){
    int numero;

    do{
        cout << "Ingrese un numero: ";
        cin >> numero;
    }while(numero < 0);

    //llama a la funcion

    cout << "El factorial es: " << factorial(numero);

    return 0;
}