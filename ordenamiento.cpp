#include <iostream>
#define EXT 500 

/* 
    esto permite definir una constante para poder usarla en vectores
    tipo  int val[EXT];
    ingresar los valores a procesar [1....EXT];

*/

using namespace std;
#include "utils.h"


int main(){
	int n;
	int val[EXT];
	
	n = leerN(1,EXT);
	
	leerVector(n, val);
	
	cout << endl << "Vector que se ingreso: ";
	imprimirVector(n,val);
	
	cout << endl << "Impresion reversa del vector: ";
	imprimirRevVector(n,val);
	
	//Aqui llame a la fucion para imprimir vector
	
	ordenarVectorAsc(n,val);
	cout << endl << "El vector ordenado ascendentemente es: ";
	imprimirVector(n,val);

    return 0;
	
}
