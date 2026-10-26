#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"

bool estaRepetido(int val, int pos, int vector[], int nv){
	for(int i=0; i < nv; i++){
		if((val == vector[i]) and (pos != i)){
			return true;
		}
	}
	return false;
}

int main(){

    int n;
	int val[EXT];
	int rep[EXT];

	int nr = 0;  // numero de repeticiones 
	
	n = leerN(1,EXT);
	
	leerVector(n, val);
	
	cout << endl << "Vector que se ingreso: ";
	imprimirVector(n,val);

    for(int i=0; i < n; i++){
		if(estaRepetido(val[i], i, val, n)){
			if(!estaRepetido(val[i], i, rep, nr)){
				rep[nr] = val[i];
				nr++;
			}
		}
	}

	if(nr !=0){
		cout << endl << "Valores repetidos: ";
		imprimirVector(nr,rep);
	}else{
		cout << endl << "No hubo valores repetidos. ";
	}

    return 0;
}