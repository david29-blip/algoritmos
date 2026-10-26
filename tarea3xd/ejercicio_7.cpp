/*
Nombre: David Vallejo
Ejercicio: 7 - Apellidos mas repetidos
Descripcion: Ingresar una lista de nombres completos y
determinar los apellidos mas repetidos.
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
    string x1,x2,x3,x4,extra;
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

// Separacion de datos
void separar(string a, string &n1, string &n2, string &a1, string &a2){

    stringstream ss(a);

    ss >> n1;
    ss >> n2;
    ss >> a1;
    ss >> a2;

}

// Lectura de cuantos apellidos mostrar
int leerTop(){

    string a;
    int n;
    bool valido;

    do{

        valido = true;

        cout << "Cuantos apellidos desea mostrar: ";
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

// Ordenamiento por frecuencia
void ordenar(int frec[], string ape[], int n){

    int aux;
    string aux2;

    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-i-1; j++){

            if(frec[j] < frec[j+1]){

                aux = frec[j];
                frec[j] = frec[j+1];
                frec[j+1] = aux;

                aux2 = ape[j];
                ape[j] = ape[j+1];
                ape[j+1] = aux2;

            }

        }

    }

}

// Impresion de resultados
void mostrar(string ape[], int frec[], int n){

    cout << endl;

    for(int i=0; i<n; i++){

        cout << i+1 << ". ";
        cout << ape[i];
        cout << " -> ";
        cout << frec[i];
        cout << " vez(es)" << endl;

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

    // Union de los apellidos
    int total = n * 2;

    string todos[total];

    for(int i=0; i<n; i++){

        todos[i] = pApe[i];
        todos[i+n] = sApe[i];

    }

    // Conteo de frecuencias
    string apeUnicos[total];
    int frec[total];
    int cant = 0;

    for(int i=0; i<total; i++){

        bool existe = false;

        for(int j=0; j<cant; j++){

            if(todos[i] == apeUnicos[j]){

                frec[j]++;

                existe = true;

                break;
            }

        }

        if(!existe){

            apeUnicos[cant] = todos[i];
            frec[cant] = 1;

            cant++;

        }

    }

    // Ordenamiento de frecuencias
    ordenar(frec,apeUnicos,cant);

    int top;

    // Lectura de la cantidad a mostrar
    top = leerTop();

    if(top > cant){
        top = cant;
    }

    // Presentacion de resultados
    mostrar(apeUnicos,frec,top);

    return 0;
}
