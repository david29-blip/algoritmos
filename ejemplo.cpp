#include <iostream> 
#include <iomanip> // Biblioteca necesaria
#include <cmath>
using namespace std; 

int main(){

    long double frac, a; //numero y parte fraccionaria
    long double resp;  //la respuesta
    bool neg = false; //bandera que indica si el numero original es negativo
	int va; //Numero para saber a que redondear
    long double x; //almaceno el numero a dividir o multiplicar

    cout << "Ingrese el numero de ceros para el redondeo positivos para enteros y negativos para la parte fraccionaria, por ejemplo 1 para la unidad mas cercana, 2 para la centena mas cercana y -1 para un decimal 2 para 2 decimales etc: ";
    cin >> va;
    x = 1;

    while(va > 1 or va < -1){
        if(va > 0){
            x = x/10;
            va = va-1;
        }else{
            x = x*10;
            va = va+1;
        }

    }

    cout << "Ingresa un numero xd: "; 
    cin >> a; 
    a = a*x;


	if (a < 0){    
    	neg = true;  
    	a *= (-1);  
	}
	frac = a - (int)a;

    if(frac>=0.5){   
	    resp = (int)a + 1; 
    } 
	else{
		resp = (int)a;
	}

    if(x==1){
        resp = resp;
    }else if(x==10){
        resp = (resp/x)+1;
    }else{
        resp = (resp/x);
    }

	cout << "El numero redondeado es: " << setprecision(20) << ((neg) ? (resp *= (-1)) : (resp)) << endl;

}
