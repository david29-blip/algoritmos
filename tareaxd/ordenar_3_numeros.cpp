/*
Nombre: David Vallejo
Ejercicio: 3 - Ordenamiento de números
Descripción: Permite ingresar tres números y ordenarlos de forma ascendente o descendente según la elección del usuario.
*/

#include <iostream>
using namespace std;

//funcion que busca el numero menor de los 3 ingresados

int buscarMenor(int a, int b, int c){
    int menor;

    if(a <= b and a <= c){
        menor = a;
    }else if(b <= a and b <= c){
        menor = b;
    }else{
        menor = c;
    }

    return menor;
}

//funcion que busca el numero mayor de los 3 ingresados
int buscarMayor(int a, int b, int c){
    int mayor;

    if(a >= b and a >= c){
        mayor = a;
    }else if(b >= a and b >= c){
        mayor = b;
    }else{
        mayor = c;
    }

    return mayor;
}

//funcion que calcula el numero del medio mediante operaciones matematicas
int buscarMedio(int a, int b, int c){
    int menor = buscarMenor(a,b,c);
    int mayor = buscarMayor(a,b,c);
    int medio;

    medio = a + b + c - menor - mayor;  

    return medio;
}

int main(){
    int a,b,c;
    char orden;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Ingrese el tercer numero: ";
    cin >> c;

    //controlo que que ingresen otros valores que no sean 1 o 2
    do{
        cout << "Ingrese 1 para ordenarlos ascendentemente o 2 para ordenar descedentemente: ";
        cin >> orden;

    }while(orden < '1' or orden > '2');

    //mediante lo que pide el usuario imprimo en orden ascendente o descendente

    if(orden == '1'){
        cout << buscarMenor(a,b,c) << " " << buscarMedio(a,b,c) << " " << buscarMayor(a,b,c) << endl;
    }else{
        cout << buscarMayor(a,b,c) << " " << buscarMedio(a,b,c) << " " << buscarMenor(a,b,c) << endl;
    }
    return 0;
}
