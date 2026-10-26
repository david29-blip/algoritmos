#include <iostream>
#define EXT 500
using namespace std;
#include "utils.h"


int main(){

    int n, cont, cont2, x;
	int val[EXT];
    
	
	n = leerN(1,EXT);
	
	leerVector(n, val);
	
	cout << endl << "Vector que se ingreso: ";
	imprimirVector(n,val);

    for(int i = 0; i < n; i++){
        cont = 0;
        for(int j = 0; j < n; j++){
            if(val[i]==val[j]){
                cont = cont + 1;
            }
        }
        if(cont < cont2){
            x = val[i];
            cont2 = cont;
        }
    }

    cout << "xd";
    cout << "waza";

	if(x != 0){
        cout << endl << "El valor mas repetido es: " << x;
	}else{
		cout << endl << "No hubo valores repetidos. ";
	}

    return 0;
}
