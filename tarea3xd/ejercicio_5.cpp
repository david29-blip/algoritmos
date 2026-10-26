/*
Nombre: David Vallejo
Ejercicio: 5 - Convertir mayusculas a minusculas
Descripcion: Ingresar una frase y transformar todas las
letras mayusculas en minusculas.
*/

#include <iostream>
#include <string>

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

// Conversion de mayusculas a minusculas
string convertir(string a){

    for(int i=0; i<a.length(); i++){

        if(a[i]>='A' && a[i]<='Z'){
            a[i] = a[i] + 32;
        }

    }

    return a;
}

// Impresion de resultados
void mostrar(string a, string b){

    cout << endl;
    cout << "Frase original: " << a << endl;
    cout << "Frase convertida: " << b << endl;

}

int main(){

    string a, b;

    // Ingreso de la frase
    a = leerFrase();

    // Conversion de la frase
    b = convertir(a);

    // Presentacion de resultados
    mostrar(a,b);

    return 0;
}
