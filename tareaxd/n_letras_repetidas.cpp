/*
Nombre: David Vallejo
Ejercicio: 10 - Letras más repetidas
Descripción: Determina las N letras más repetidas en una cadena ingresada por el usuario, mostrando la letra y su frecuencia.
*/

#include <iostream>
#include <string>
using namespace std;

//funcion que me dice si ya conte una letra para no volverla a repetir

int yaApareciow(string cad, int pos){
    for(int i = 0; i < pos; i++){
        if(cad[pos] == cad[i]){
            return 1;
        }
    }
    return 0;
}

//Cuenta todas las veces que aparece cada letra de la cadena
int contar(string cad, char letra){
    int contador = 0;
    for(int i = 0; i < cad.length(); i++){
        if(cad[i] == letra){
            contador++;
        }
    }
    return contador;
}

//funcion que encuentra la letra que mas se ha repetido en toda la cadena 
int encontrarMax(string cad){
    int max = 0;

    for(int i = 0; i < cad.length(); i++){
        if(yaApareciow(cad, i) == 0){
            int rep = contar(cad, cad[i]);

            if(rep > max){
                max = rep;
            }
        }
    }

    return max;
}

//procedimiento que imprime la o las letras que mas se han repetido en la cadena 

void imprimirMax(string cad, int max){
    for(int i = 0; i < cad.length(); i++){
        if(yaApareciow(cad, i) == 0){
            int rep = contar(cad, cad[i]);

            if(rep == max){
                cout << cad[i] << " : " << rep << endl;
            }
        }
    }
}

int main(){
    string cad;

    cout << "Ingrese la cadena: ";
    getline(cin, cad);                   //Permite el ingreso de espacios y no solo palabras

    int max = encontrarMax(cad);         //Llamamos a la funcion para saber cual fue la letra que mas se repitio
    imprimirMax(cad, max);               //Llamo al procedimiento que imprime la letra
    
    return 0;
}