/*
Nombre: David Vallejo
Ejercicio: 2 - Contabilizar letras por cadena
Descripcion: Ingresar varias cadenas de texto y determinar
la cantidad de letras que contiene cada una.
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

// Conteo de letras
int contar(string a){

    int cont = 0;

    for(int i=0; i<a.length(); i++){

        if((a[i]>='a' && a[i]<='z') ||
           (a[i]>='A' && a[i]<='Z')){

            cont = cont + 1;
        }

    }

    return cont;
}

// Impresion de resultados
void mostrar(string cad[], int letras[], int n){

    cout << endl;

    for(int i=0; i<n; i++){

        cout << "Cadena " << i+1 << ": ";
        cout << cad[i] << endl;

        cout << "Cantidad de letras: ";
        cout << letras[i] << endl << endl;
    }

}

int main(){

    int n;

    // Ingreso de la cantidad de cadenas
    n = leerN();

    string cad[n];
    int letras[n];

    // Lectura y conteo de letras
    for(int i=0; i<n; i++){

        cad[i] = leerCadena(i);

        letras[i] = contar(cad[i]);
    }

    // Presentacion de resultados
    mostrar(cad,letras,n);

    return 0;
}