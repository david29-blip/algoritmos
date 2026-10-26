#include <iostream>
using namespace std;

int main(){
    int a,num,c,menor,b,aux, aux2,con;
    do{
        cout << "Ingrese la cantidad de valores a ordenar los digitos: ";
	    cin >> a;
    }while(a<1);


    for(int i=0; i<a; i++){
        cout << "Ingrese el valor a ordenar los digitos: ";
		cin >> b;
        aux2 = b;

        int contador = 0;
		if(b==0){
			contador = 1;
		}
		while(b>0 or b<0){
			b = b/10;
			contador = contador + 1;
		}
        con = contador;

        for(int i=0; i<con; i++){

            c = 10;
            aux = aux2;

            for(int i=0; i<contador; i++){
            
            num = aux%10;

            if(c>num){
                menor = num;
                c = num;
            }
            aux = aux/10;
            }

            contador = contador-1;

            cout << menor;
            
            aux2 = aux2/10;
        } 
    
    }
}
