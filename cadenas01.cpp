#include <iostream>
#include <string>
#include <algorithm>	//para emplear transform y reverse
#include <cctype>		//para emplear toupper
using namespace std;

int main(){
	system("color f0");
	string cad;
	char letra;
	int pos;

	
	cout << endl << "Ingrese una cadena: ";
	getline(cin, cad);
	
	cout << endl << "Ingrese un caracter para buscar: ";
	cin >> letra;
	
	cout << endl << "La cadena ingresada es: " << cad;
	cout << endl << "Posee " << cad.length() << " caracteres...";
	cout << endl << "El caracter " << letra << " se encuentra en la posicion ";
	
	//sintaxis de find: cad.find(<subcadena a buscar>, <posicion de inicio de busqueda) => si no existe, es 0	
	pos = cad.find(letra);
	
	//si no se encuentra, comparar el valor devuelto con la constante string::npos)
	if (pos == string::npos){     //npos es una constante con valor fijo que se almacena en caso de que no encuentre ese caracter 
		cout << endl << " NO ENCONTRADO";
	} else {
		cout << pos;
	}
	
	//sintaxis de substr: cad.substr(posicion inicial, extension)
	cout << endl << " La subcadena a partir de la posicion 5 es " << cad.substr(5,3);

	//sintaxis de erase: cad.erase(posicion inicial, extension)
	cad.erase(5, 3);
	
	cout << endl << "La cadena eliminando tres caracteres a partir de la posicion 5 es " << cad;

	// sintaxis de transform: transform(inicio, fin, destino, operación);
	transform(cad.begin(), cad.end(), cad.begin(), ::toupper);
	cout << endl << "La cadena transformada a mayusculas es: " << cad;
	transform(cad.begin(), cad.end(), cad.begin(), ::tolower);
	cout << endl << "La cadena transformada a minusculas es: " << cad;

	//sintaxis de reverse: reverse(inicio, fin)
	reverse(cad.begin(), cad.end());
	cout << endl << "La cadena invertida es: " << cad;
	
	cin.ignore();	//para borrar el buffer de lectura anterior
	
	cout << endl << "Ingrese una nueva cadena: ";
	getline(cin, cad);
	
	cout << "Los caracteres que conforman la nueva cadena es: ";
	for (int i=0; i < cad.size(); i++){
		cout << endl << "  > " << cad[i];
	}
	
	
	cout << endl;
	system("pause");
}
