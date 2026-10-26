/*
Nombre: David Vallejo
Ejercicio: 10 - Invertir caracteres de cada palabra
Descripcion: Ingresar una frase y proceder a invertir
los caracteres de cada palabra.
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

// Inversion de una palabra
string invertir(string a){

    string b = "";

    for(int i=a.length()-1; i>=0; i--){

        b = b + a[i];

    }

    return b;
}

// Procesamiento de la frase
string procesar(string a){

    string palabra;
    string res = "";

    stringstream ss(a);

    while(ss >> palabra){

        res = res + invertir(palabra) + " ";

    }

    if(res!=""){
        res.erase(res.length()-1,1);
    }

    return res;
}

// Impresion de resultados
void mostrar(string a, string b){

    cout << endl;
    cout << "Frase original: " << a << endl;
    cout << "Frase invertida: " << b << endl;

}

int main(){

    string a, b;

    // Ingreso de la frase
    a = leerFrase();

    // Inversion de las palabras
    b = procesar(a);

    // Presentacion de resultados
    mostrar(a,b);

    return 0;
}
