#include <iostream>
#include <cmath>
using namespace std;
// Define aquí la función que quieres integrar
double f(double x) {
return 1/x; // Ejemplo: f(x) = x^2
}
int main() {
double a, b, h, resultado;
cout << "Ingrese el limite inferior (a): ";
cin >> a;
cout << "Ingrese el limite superior (b): ";
cin >> b;
// Paso 1: calcular h
h = (b - a) / 3;
// Paso 2: puntos
double x0 = a;
double x1 = a + h;
double x2 = a + 2*h;
double x3 = b;
// Paso 3: aplicar la formula
resultado = (3*h/8) * (f(x0) + 3*f(x1) + 3*f(x2) + f(x3));
// Resultado
cout << "La aproximacion de la integral es: " << resultado << endl;
return 0;
}

