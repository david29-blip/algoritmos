#include <iostream> 
#include <vector>
#include <string>
using namespace std; 



int main(){

    float frac, a; //numero y parte fraccionaria
    int resp;  //la respuesta
    bool neg = false; //bandera que indica si el numero original es negativo
	int va; //Numero para saber a que redondear

	system("color f0"); //funcion para cambiar el color de la interfaz del programa 

    cout << "Ingresa un numero xd: "; 

    cin >> a; 

	if (a < 0){      //si el valor es negativo
    	neg = true;  //indico que el valor es negativo
    	a *= (-1);   //transformo a positivo
	}
	frac = a - (int)a;

    if(frac>=0.5){   //casting pasar un float a int ponerlo entre () 
	    resp = (int)a + 1; 
    } 
	else{
		resp = (int)a;
	}
	
	
	/* if(neg){
		resp *= (-1);      de otra forma
	}else{
		resp;
		
	}
	*/
	a = a - frac;
	cout << "El numero redondeado es: " << ((neg) ? (resp *= (-1)) : (resp)) << endl;
	cout << "El numero truncado es: " << ((neg) ? (a *= (-1)) : (a)) << endl;

    system("pause");  //mensaje de pausa

	
}