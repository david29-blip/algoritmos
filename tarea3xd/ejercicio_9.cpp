/*
Nombre: David Vallejo
Ejercicio: 9 - Caracter mayor y menor de cada palabra
Descripcion: Ingresar una frase y determinar el caracter
mayor y menor de cada palabra.
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Lectura de la frase
string leerFrase(){

    string a;

    do{

        cout << "Ingrese una frase: ";
        getline(cin,a);

        if(a==""){
            cout << "Valor incorrecto." << endl;
        }

    }while(a=="");

    return a;
}

// Obtencion del caracter mayor
char mayor(string a){

    char x = a[0];

    for(int i=1; i<a.length(); i++){

        if(a[i] > x){
            x = a[i];
        }

    }

    return x;
}

// Obtencion del caracter menor
char menor(string a){

    char x = a[0];

    for(int i=1; i<a.length(); i++){

        if(a[i] < x){
            x = a[i];
        }

    }

    return x;
}

// Procesamiento de la frase
void procesar(string a){

    string palabra;

    stringstream ss(a);

    while(ss >> palabra){

        cout << "Palabra: " << palabra << endl;
        cout << "Mayor: " << mayor(palabra) << endl;
        cout << "Menor: " << menor(palabra) << endl;
        cout << endl;

    }

}

int main(){

    string a;

    // Ingreso de la frase
    a = leerFrase();

    // Procesamiento de la frase
    procesar(a);

    return 0;
}
