/*
Nombre: David Vallejo
Ejercicio: Invertir el orden de vocales en palabras
Descripcion: Ingresar una cadena de caracteres. Para cada palabra de la
cadena se extraen sus vocales, se ordenan alfabeticamente y se vuelven a
colocar en las posiciones donde originalmente habia vocales. Cualquier
caracter que no sea letra se considera separador y permanece sin cambios.
*/

using namespace std;
#include <iostream>
#include <string>


bool esVocal(char c){
    bool vocal = false;
    c = tolower(c);
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u'){
        vocal = true;
    }
    return vocal;
}

string ordenarVocales(string palabra){
    string vocales = "";
    // Extrae las vocales
    for(int i=0; i<palabra.length(); i++){
        if(esVocal(palabra[i])){
            vocales += palabra[i];
        }
    }
    // Ordena las vocales
    for(int i=0; i<vocales.length()-1; i++){
        for(int j=i+1; j<vocales.length(); j++){
            if(tolower(vocales[i]) > tolower(vocales[j])){
                char aux = vocales[i];
                vocales[i] = vocales[j];
                vocales[j] = aux;
            }
        }
    }
    // Reemplaza las vocales ordenadas
    int k = 0;
    for(int i=0; i<palabra.length(); i++){
        if(esVocal(palabra[i])){
            palabra[i] = vocales[k];
            k++;
        }
    }
    return palabra;
}

int main(){

    string frase;
    string palabra = "";
    string resultado = "";

    cout << "Ingrese una cadena: ";
    getline(cin, frase);

    for(int i=0; i<=frase.length(); i++){

        if(i < frase.length() and ((frase[i] >= 'A' and frase[i] <= 'Z') or (frase[i] >= 'a' and frase[i] <= 'z'))){
            palabra += frase[i];
        }
        else{
            if(!palabra.empty()){

                resultado += ordenarVocales(palabra);
                palabra = "";
            }
            if(i < frase.length()){
                resultado += frase[i];
            }
        }
    }
    cout << endl << "La nueva cadena con las vocales ordenadas es: " << resultado;

    return 0;
}

