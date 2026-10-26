#include <iostream>
using namespace std;


int main(){

    int f1 = 3;
    int c1 = 4;
    int a[f1][c1];

    cout << endl << "Ingreso de elementos de la matriz" << endl;
    for(int i=0;i<f1;i++){
        for(int j=0;j<c1;j++){
            cout << "Ingresa el numero para la posicion [" << i << "," << j << "]: "; 
            cin >> a[i][j];
        }
    }	

    for(int i = 0; i < f1; i++){  
        int aux;
        for(int j = i + 1; j < c1; j++){
            aux = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = aux;
        }
    }

    cout << endl << "Impresion de elementos de la matriz" << endl;
    for(int i=0;i<f1;i++){
        cout << "[";
        for(int j=0;j<c1;j++){
        cout << a[i][j];
        if(j < c1 - 1){
            cout << "\t";
        }
        }
        cout << "]" << std::endl;
    }



}