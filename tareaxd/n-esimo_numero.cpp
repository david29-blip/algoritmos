/*
Nombre: David Vallejo
Ejercicio: 7 - Dígito fraccionario
Descripción: Obtiene el N-ésimo dígito de la parte decimal de un número real ingresado por el usuario.
*/

#include <iostream>
using namespace std;

//funcion que revisa si el numero es negativo para cambiarlo a positivo
double positivo(double num){
    if(num < 0){
        num = num * (-1);
    }
    return num;
}

//busca el numero que se encuentra en la posicion que ingreso el usuario
int buscarNumero(double num, int n){
    double decimal;
    int resp;

    decimal = num - (int)num;
    
    for(int i = 0; i < n; i++){
        decimal = decimal * 10;
    }
    
    decimal += 1e-9;

    resp = (int)decimal;
    
    return resp%10;

}
//Controla el ingreso de datos para evitar errores
int main(){
    double numero;
    int n;

    cout << "Ingrese el numero real: ";
    cin >> numero;

    //Llamo a la funcion para revisar si es positivo o negativo

    numero = positivo(numero);

    do{
        cout << "Ingrese la posicion que desea buscar despues del punto decimal: ";
        cin >> n;
    }while(n <= 0);

    //Imprimo con un mensaje la funcion de buscar el numero

    cout << "El digito que busco es: " << buscarNumero(numero,n) << endl;


}