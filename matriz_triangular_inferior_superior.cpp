#include <iostream>
using namespace std;
#define NF 10
#define NC 10
#define EXT 20
#include "utils.h"

int main(){
    int f, c;
    int mat[NF][NC];
    int aux1[EXT];

    cout << endl << "Definicion de la cantidad de filas a emplear";
    f = leerN(1, NF);
    cout << endl << "Definicion de la cantidad de columnas a emplear";
    c = leerN(1, NC);


    leerMatriz(f, c, mat);

    imprimirMatriz(f,c,mat);


    bool superior = false;
    bool inferior = false;


    superior = TriangularSuperior(f,c,mat);
    inferior = TraingularInferior(c,mat);


    OrdenarTriangularInferiorASC(c,mat,aux1);
    OrdenarTriangularSuperiorDESCENDENTE(f,c,mat,aux1);
    imprimirMatriz(f,c,mat);


    if(superior and inferior){
        cout << "no es ninguna w xd";
    }else if(superior){
        cout << "es triangular superior";
    }else if(inferior){
        cout << "es triangular inferior";
    }else{
        cout << "no es ninguna w xd";
    }

    return 0;

}
