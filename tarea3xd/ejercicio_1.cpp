/*
Nombre: David Vallejo
Ejercicio: 1 - Codificar caracteres de una cadena
Descripcion: Ingresar una cadena de caracteres. Si es una letra o un digito,
se reemplaza por el siguiente caracter. Z se transforma en A y 9 en 0.
Cualquier otro caracter se reemplaza por *. El caracter * marca el final
de la cadena.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Lectura de la cadena
string leerCadena(){
    string a;

    do{
        cout << "Ingrese una cadena: ";
        getline(cin,a);

        if(a==""){
            cout << "Valor incorrecto." << endl;
        }

    }while(a=="");

    return a;
}

// Codificacion de un caracter
char cambiar(char x){

    x = toupper(x);

    if(x=='Z'){
        return 'A';
    }

    if(x=='9'){
        return '0';
    }

    if(isalpha(x)){
        return x + 1;
    }

    if(isdigit(x)){
        return x + 1;
    }

    return '*';
}

// Codificacion de la cadena
string codificar(string a){

    string b = "";

    for(int i=0; i<a.length(); i++){

        if(a[i]=='*'){
            break;
        }

        b = b + cambiar(a[i]);
    }

    return b;
}

// Impresion de resultados
void mostrar(string a, string b){

    cout << endl;
    cout << "Cadena ingresada: " << a << endl;
    cout << "Cadena codificada: " << b << endl;
}

int main(){

    string a, b;

    // Ingreso de la cadena
    a = leerCadena();

    // Codificacion de la cadena
    b = codificar(a);

    // Presentacion de resultados
    mostrar(a,b);

    return 0;
}
