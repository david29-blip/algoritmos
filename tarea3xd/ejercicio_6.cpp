/*
Nombre: David Vallejo
Ejercicio: 6 - Convertir numeros romanos a decimales
Descripcion: Ingresar valores expresados en numeros romanos
y transformarlos a su equivalente decimal.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Obtencion del valor romano
int valor(char x){

    x = toupper(x);

    if(x=='I') return 1;
    if(x=='V') return 5;
    if(x=='X') return 10;
    if(x=='L') return 50;
    if(x=='C') return 100;
    if(x=='D') return 500;
    if(x=='M') return 1000;

    return 0;
}

// Lectura de la cantidad
int leerN(){

    string a;
    int n;
    bool valido;

    do{

        valido = true;

        cout << "Ingrese la cantidad de numeros romanos: ";
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

// Lectura de un numero romano
string leerRomano(int i){

    string a;
    bool valido;

    do{

        valido = true;

        cout << "Ingrese el numero romano " << i+1 << ": ";
        getline(cin,a);

        if(a==""){
            valido = false;
        }

        for(int j=0; j<a.length() && valido; j++){

            char x = toupper(a[j]);

            if(x!='I' && x!='V' && x!='X' &&
               x!='L' && x!='C' && x!='D' &&
               x!='M'){

                valido = false;
            }

        }

        if(!valido){
            cout << "Numero romano incorrecto." << endl;
        }

    }while(!valido);

    return a;
}

// Conversion a decimal
int convertir(string a){

    int total = 0;

    for(int i=0; i<a.length(); i++){

        int actual = valor(a[i]);
        int sig = valor(a[i+1]);

        if(actual < sig){
            total = total - actual;
        }else{
            total = total + actual;
        }

    }

    return total;
}

// Impresion de resultados
void mostrar(string val[], int n){

    cout << endl;

    for(int i=0; i<n; i++){

        cout << val[i] << " = ";
        cout << convertir(val[i]) << endl;

    }

}

int main(){

    int n;

    // Ingreso de la cantidad
    n = leerN();

    string val[n];

    // Lectura de los numeros romanos
    for(int i=0; i<n; i++){

        val[i] = leerRomano(i);

    }

    // Presentacion de resultados
    mostrar(val,n);

    return 0;
}
