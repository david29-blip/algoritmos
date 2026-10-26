/*
Nombre: David Vallejo
Ejercicio: 4 - Separar nombres y apellidos
Descripcion: Ingresar una lista de estudiantes y generar
una lista de primeros nombres, otra de segundos nombres,
otra de primeros apellidos y otra de segundos apellidos.
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Lectura de la cantidad de estudiantes
int leerN(){
    string a;
    int n;
    bool valido;

    do{
        valido = true;

        cout << "Ingrese la cantidad de estudiantes: ";
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

// Lectura del nombre completo
string leerNombre(int i){
    string a;
    string x1, x2, x3, x4, extra;
    bool valido;

    do{
        valido = true;

        cout << "Ingrese el nombre completo del estudiante ";
        cout << i+1 << ": ";

        getline(cin,a);

        if(a==""){
            valido = false;
        }

        if(valido){

            x1 = "";
            x2 = "";
            x3 = "";
            x4 = "";

            stringstream ss(a);

            ss >> x1;
            ss >> x2;
            ss >> x3;
            ss >> x4;

            if(x1=="" || x2=="" || x3=="" || x4==""){
                valido = false;
            }

            if(ss >> extra){
                valido = false;
            }
        }

        if(!valido){
            cout << "Debe ingresar 2 nombres y 2 apellidos." << endl;
        }

    }while(!valido);

    return a;
}

// Separacion de nombres y apellidos
void separar(string a, string &n1, string &n2, string &a1, string &a2){

    stringstream ss(a);

    ss >> n1;
    ss >> n2;
    ss >> a1;
    ss >> a2;
}

// Impresion de una lista
void mostrar(string val[], int n, string titulo){

    cout << endl << titulo << endl;

    for(int i=0; i<n; i++){

        cout << i+1 << ". " << val[i] << endl;

    }
}

int main(){

    int n;

    // Ingreso de la cantidad de estudiantes
    n = leerN();

    string pNom[n];
    string sNom[n];
    string pApe[n];
    string sApe[n];

    string a;

    // Lectura y separacion de datos
    for(int i=0; i<n; i++){

        a = leerNombre(i);

        separar(a,pNom[i],sNom[i],pApe[i],sApe[i]);

    }

    // Presentacion de resultados
    mostrar(pNom,n,"PRIMEROS NOMBRES");
    mostrar(sNom,n,"SEGUNDOS NOMBRES");
    mostrar(pApe,n,"PRIMEROS APELLIDOS");
    mostrar(sApe,n,"SEGUNDOS APELLIDOS");

    return 0;
}
