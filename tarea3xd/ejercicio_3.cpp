/*
Nombre: David Vallejo
Ejercicio: 3 - Eliminar letras N y n
Descripcion: Leer varias cadenas de texto y eliminar
todas las letras N y n de cada una de ellas.
*/

#include <iostream>
#include <string>

using namespace std;

// Lectura de la cantidad de cadenas
int leerN(){
    string a;
    int n;
    bool valido;

    do{
        valido = true;

        cout << "Ingrese la cantidad de cadenas: ";
        getline(cin,a);

        if(a==""){
            valido = false;
        }

        for(int i=0; i<a.length() && valido; i++){
            if(a[i]<'0' || a[i]>'9'){
                valido = false;
            }
        }

        if(valido){
            n = stoi(a);

            if(n<1){
                valido = false;
            }
        }

        if(!valido){
            cout << "Valor incorrecto." << endl;
        }

    }while(!valido);

    return n;
}

// Lectura de una cadena
string leerCadena(int i){
    string a;

    do{
        cout << "Ingrese la cadena " << i+1 << ": ";
        getline(cin,a);

        if(a==""){
            cout << "Valor incorrecto." << endl;
        }

    }while(a=="");

    return a;
}

// Eliminacion de las letras N y n
string eliminar(string a){

    for(int i=0; i<a.length(); i++){

        if(a[i]=='N' || a[i]=='n'){

            a.erase(i,1);

            i--;
        }

    }

    return a;
}

// Impresion de resultados
void mostrar(string cad[], int n){

    cout << endl;

    for(int i=0; i<n; i++){

        cout << "Cadena " << i+1 << ": ";
        cout << cad[i] << endl;

    }

}

int main(){

    int n;

    // Ingreso de la cantidad de cadenas
    n = leerN();

    string cad[n];

    // Lectura y procesamiento de cadenas
    for(int i=0; i<n; i++){

        cad[i] = leerCadena(i);

        cad[i] = eliminar(cad[i]);

    }

    // Presentacion de resultados
    mostrar(cad,n);

    return 0;
}
