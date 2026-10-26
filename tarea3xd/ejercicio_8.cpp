/*
Nombre: David Vallejo
Ejercicio: 8 - Lista desordenada de iniciales
Descripcion: Ingresar una lista de nombres verificando
su ortografia y generar una lista desordenada de iniciales.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Lectura de la cantidad de nombres
int leerN(){

    string a;
    int n;
    bool valido;

    do{

        valido = true;

        cout << "Ingrese la cantidad de nombres: ";
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

// Verificacion de letras y espacios
bool verificar(string a){

    for(int i=0; i<a.length(); i++){

        if(!isalpha(a[i]) && a[i]!=' '){
            return false;
        }

    }

    return true;
}

// Verificacion de mayusculas iniciales
bool mayusculas(string a){

    if(!isupper(a[0])){
        return false;
    }

    for(int i=1; i<a.length(); i++){

        if(a[i-1]==' ' && !isupper(a[i])){
            return false;
        }

    }

    return true;
}

// Lectura de un nombre
string leerNombre(int i){

    string a;
    bool valido;

    do{

        valido = true;

        cout << "Ingrese el nombre " << i+1 << ": ";
        getline(cin,a);

        if(a==""){
            valido = false;
        }

        if(valido && !verificar(a)){
            valido = false;
        }

        if(valido && !mayusculas(a)){
            valido = false;
        }

        if(!valido){
            cout << "Nombre incorrecto." << endl;
        }

    }while(!valido);

    return a;
}

// Generacion de iniciales
string iniciales(string a){

    string b = "";

    b = b + a[0];
    b = b + ".";

    for(int i=1; i<a.length(); i++){

        if(a[i-1]==' '){

            b = b + a[i];
            b = b + ".";

        }

    }

    return b;
}

// Desordenamiento de las iniciales
void desordenar(string val[], int n){

    srand(time(NULL));

    for(int i=0; i<n; i++){

        int x = rand()%n;

        string aux = val[i];
        val[i] = val[x];
        val[x] = aux;

    }

}

// Impresion de resultados
void mostrar(string val[], int n){

    cout << endl;

    for(int i=0; i<n; i++){

        cout << i+1 << ". ";
        cout << val[i] << endl;

    }

}

int main(){

    int n;

    // Ingreso de la cantidad de nombres
    n = leerN();

    string nombres[n];
    string ini[n];

    // Lectura de nombres
    for(int i=0; i<n; i++){

        nombres[i] = leerNombre(i);

    }

    // Generacion de iniciales
    for(int i=0; i<n; i++){

        ini[i] = iniciales(nombres[i]);

    }

    // Desordenamiento de iniciales
    desordenar(ini,n);

    // Presentacion de resultados
    mostrar(ini,n);

    return 0;
}
