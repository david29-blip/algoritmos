#include <iostream>
using namespace std;


int main(){
	int a, b, c, mayor, xd, dx;
    do{
        cout << "Ingrese la cantidad de valores a contar los digitos: ";
	    cin >> a;
    }while(a<1);
	c =0;
	for(int i=0; i<a; i++){
        cout << "Ingrese el valor a contar los digitos: ";
		cin >> b;
		xd = b;
		int contador = 0;
		if(b==0){
			contador = 1;
		}
		while(b>0 or b<0){
			b = b/10;
			contador = contador + 1;
		}
        dx = contador;
		cout << "El numero de digitos de " << xd << " es: " << contador << endl;
		if(c<dx){
			mayor = xd;
		}
		c = dx;
	}
	cout <<  "El numero con la mayor cantidad de digitos es: " << mayor;
}
