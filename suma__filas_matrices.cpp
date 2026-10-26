/*  Elaborar un programa que permita el ingreso de una matriz 2D
    y proceda a calcular la sumatoria de los elementos de cada fila

*/

#include <iostream>
using namespace std;
#define NF 5
#define NC 5
#include "utils.h"

int main(){
    int f, c;
    int mat[NF][NC];

    cout << endl << "Definicion de la cantidad de filas a emplear";
    f = leerN(1, NF);
    cout << endl << "Definicion de la cantidad de columnas a emplear";
    c = leerN(1, NC);

    leerMatriz(f, c, mat);

    imprimirMatriz(f,c,mat);

    SumarColumnas(f,c,mat);


//    SumarFilas(f,c,mat);
    for(int i = 0; i < f; i++){      //recorre las filas de la matriz
        int sum = SumaElementosVector(mat[i], c);
        cout << endl << "Suma de los valores de la fila [" << i << "]: " << sum;
    }

    for(int i = 0; i < f; i++){      //recorre las filas de la matriz
        cout << endl;
        ordenarVectorAsc(f, mat[i]);
    }

    cout << endl << "Filas ordenadas ascedentemente" << endl;
    imprimirMatriz(f,c,mat);

    for(int j = 0; j < c; j++){  
        int aux[NC];
        for(int i = 0; i < c; i++){
            aux[i] = mat[i][j];
        }
        ordenarVectorAsc(c, aux);
        for(int i = 0; i < f; i++){
            mat[i][j] = aux[i];
        }
    } 
    cout << endl << "Columnas ordenadas ascedentemente" << endl;
    imprimirMatriz(f,c,mat);

    return 0;

    
}

